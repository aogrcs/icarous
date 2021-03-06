cmake_minimum_required(VERSION 2.6.4)
project(TRAJECTORY_APP C)

set(CMAKE_CXX_STANDARD 11)


set(MODULES_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../../../C++/Modules")
set(MODULES_LIB "${CMAKE_CURRENT_SOURCE_DIR}/../../../C++/lib")
set(PLEXIL_SOURCE "${MODULES_ROOT}/Plexil/src")
set(PLEXIL_LIB "${PLEXIL_SOURCE}/../lib")

include_directories(../inc)
include_directories(${MODULES_ROOT}/TrajectoryPlanners)
include_directories(${MODULES_ROOT}/TrajectoryPlanners/CWrapper)
include_directories(${PLEXIL_SOURCE}/interfaces/CfsAdapter)
include_directories(${PLEXIL_SOURCE}/wrapper)

aux_source_directory(fsw/src APP_SRC_FILES)

link_directories(${MODULES_LIB})
link_directories(${PLEXIL_LIB})

add_library(trajectory MODULE ${APP_SRC_FILES} ${MODULES_ROOT}/TrajectoryPlanners/CWrapper/TrajectoryPlanner_proxy.c fsw/src/TrajPlxMsgHandler.c)

target_link_libraries(trajectory PathPlanner PlexilWrapper)

set_target_properties(trajectory PROPERTIES PREFIX "")

set_target_properties(trajectory PROPERTIES INSTALL_RPATH "${MODULES_LIB}:${PLEXIL_LIB}")

add_dependencies(trajectory TrajectoryPlanners-all Plexil-all)

foreach(TGT ${APP_INSTALL_LIST})
    install(TARGETS trajectory DESTINATION ${TGT}/${INSTALL_SUBDIR})
endforeach()
