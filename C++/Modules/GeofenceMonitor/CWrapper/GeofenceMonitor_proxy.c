/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */
#include "GeofenceMonitor_proxy.h"

void _wrap_FlightData_paramData_set(SwigObj * carg1, SwigObj * carg2);
SwigObj * _wrap_FlightData_paramData_get(SwigObj * carg1);
FlightData * _wrap_new_FlightData(/*aaa*/ char * carg1);
void _wrap_FlightData_AddMissionItem(SwigObj * carg1, SwigObj * carg2);
void _wrap_FlightData_AddResolutionItem(SwigObj * carg1, SwigObj * carg2);
void _wrap_FlightData_SetStartMissionFlag(SwigObj * carg1, SwigObj * carg2);
void _wrap_FlightData_ConstructMissionPlan(SwigObj * carg1);
void _wrap_FlightData_ConstructResolutionPlan(SwigObj * carg1);
void _wrap_FlightData_InputState(SwigObj * carg1, double carg2, double carg3, double carg4, double carg5, double carg6, double carg7, double carg8);
void _wrap_FlightData_AddTraffic(SwigObj * carg1, int carg2, double carg3, double carg4, double carg5, double carg6, double carg7, double carg8);
void _wrap_FlightData_GetTraffic_pFlightData_i_pd_pd_pd_pd_pd_pd(SwigObj * carg1, int carg2, double * carg3, double * carg4, double * carg5, double * carg6, double * carg7, double * carg8);
void _wrap_FlightData_ClearMissionList(SwigObj * carg1);
void _wrap_FlightData_ClearResolutionList(SwigObj * carg1);
void _wrap_FlightData_InputNextMissionWP(SwigObj * carg1, int carg2);
void _wrap_FlightData_InputNextResolutionWP(SwigObj * carg1, int carg2);
void _wrap_FlightData_InputTakeoffAlt(SwigObj * carg1, double carg2);
void _wrap_FlightData_InputCruisingAlt(SwigObj * carg1, double carg2);
void _wrap_FlightData_InputGeofenceData(SwigObj * carg1, SwigObj * carg2);
double _wrap_FlightData_GetTakeoffAlt(SwigObj * carg1);
double _wrap_FlightData_GetCruisingAlt(SwigObj * carg1);
double _wrap_FlightData_GetAltitude(SwigObj * carg1);
double _wrap_FlightData_GetAllowedXtracDeviation(SwigObj * carg1);
double _wrap_FlightData_GetResolutionSpeed(SwigObj * carg1);
int _wrap_FlightData_GetTotalMissionWP(SwigObj * carg1);
int _wrap_FlightData_GetTotalResolutionWP(SwigObj * carg1);
int _wrap_FlightData_GetTotalTraffic(SwigObj * carg1);
void _wrap_FlightData_Reset(SwigObj * carg1);
void _wrap_FlightData_InputAck(SwigObj * carg1, SwigObj * carg2);
bool _wrap_FlightData_CheckAck(SwigObj * carg1, SwigObj * carg2);
SwigObj * _wrap_FlightData_GetStartMissionFlag(SwigObj * carg1);
SwigObj * _wrap_FlightData_GetMissionPlanSize(SwigObj * carg1);
SwigObj * _wrap_FlightData_GetResolutionPlanSize(SwigObj * carg1);
SwigObj * _wrap_FlightData_GetNextMissionWP(SwigObj * carg1);
SwigObj * _wrap_FlightData_GetNextResolutionWP(SwigObj * carg1);
int _wrap_FlightData_GetTotalFences(SwigObj * carg1);
double _wrap_FlightData_getFlightPlanSpeed(SwigObj * carg1, SwigObj * carg2, int carg3);
void _wrap_FlightData_GetTraffic_pFlightData_i_rlarcfm_Position_rlarcfm_Velocity(SwigObj * carg1, int carg2, SwigObj * carg3, SwigObj * carg4);
/*aaaaaa*/SwigObj * _wrap_FlightData_GetGeofence(SwigObj * carg1, int carg2);
/*aaaaaa*/SwigObj * _wrap_FlightData_GetPolyPath(SwigObj * carg1);
void _wrap_delete_FlightData(FlightData * carg1);
void _wrap_GeofenceConflict_fenceId_set(SwigObj * carg1, int carg2);
int _wrap_GeofenceConflict_fenceId_get(SwigObj * carg1);
void _wrap_GeofenceConflict_violationStatus_set(SwigObj * carg1, bool carg2);
bool _wrap_GeofenceConflict_violationStatus_get(SwigObj * carg1);
void _wrap_GeofenceConflict_conflictstatus_set(SwigObj * carg1, bool carg2);
bool _wrap_GeofenceConflict_conflictstatus_get(SwigObj * carg1);
void _wrap_GeofenceConflict_recoveryPoint_set(SwigObj * carg1, /*aaa*/ double * carg2);
double * _wrap_GeofenceConflict_recoveryPoint_get(SwigObj * carg1);
GeofenceConflict * _wrap_new_GeofenceConflict();
void _wrap_delete_GeofenceConflict(GeofenceConflict * carg1);
GeofenceMonitor * _wrap_new_GeofenceMonitor(SwigObj * carg1);
void _wrap_GeofenceMonitor_CheckViolation(SwigObj * carg1, /*aaa*/ double * carg2, double carg3, double carg4, double carg5);
bool _wrap_GeofenceMonitor_CheckWPFeasibility(SwigObj * carg1, /*aaa*/ double * carg2, /*aaa*/ double * carg3);
int _wrap_GeofenceMonitor_GetNumConflicts(SwigObj * carg1);
void _wrap_GeofenceMonitor_GetConflictStatus(SwigObj * carg1, bool * carg2);
void _wrap_GeofenceMonitor_GetConflict(SwigObj * carg1, int carg2, int * carg3, bool * carg4, bool * carg5, /*aaa*/ double * carg6);
void _wrap_GeofenceMonitor_GetClosestRecoveryPoint(SwigObj * carg1, /*aaa*/ double * carg2, /*aaa*/ double * carg3);
void _wrap_delete_GeofenceMonitor(GeofenceMonitor * carg1);

void FlightData_paramData_set(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_paramData_set(carg1, carg2);
}
SwigObj * FlightData_paramData_get(SwigObj * carg1) {
  return _wrap_FlightData_paramData_get(carg1);
}
FlightData * new_FlightData(/*aaa*/ char * carg1) {
  return _wrap_new_FlightData(carg1);
}
void FlightData_AddMissionItem(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_AddMissionItem(carg1, carg2);
}
void FlightData_AddResolutionItem(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_AddResolutionItem(carg1, carg2);
}
void FlightData_SetStartMissionFlag(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_SetStartMissionFlag(carg1, carg2);
}
void FlightData_ConstructMissionPlan(SwigObj * carg1) {
  return _wrap_FlightData_ConstructMissionPlan(carg1);
}
void FlightData_ConstructResolutionPlan(SwigObj * carg1) {
  return _wrap_FlightData_ConstructResolutionPlan(carg1);
}
void FlightData_InputState(SwigObj * carg1, double carg2, double carg3, double carg4, double carg5, double carg6, double carg7, double carg8) {
  return _wrap_FlightData_InputState(carg1, carg2, carg3, carg4, carg5, carg6, carg7, carg8);
}
void FlightData_AddTraffic(SwigObj * carg1, int carg2, double carg3, double carg4, double carg5, double carg6, double carg7, double carg8) {
  return _wrap_FlightData_AddTraffic(carg1, carg2, carg3, carg4, carg5, carg6, carg7, carg8);
}
void FlightData_GetTraffic_pFlightData_i_pd_pd_pd_pd_pd_pd(SwigObj * carg1, int carg2, double * carg3, double * carg4, double * carg5, double * carg6, double * carg7, double * carg8) {
  return _wrap_FlightData_GetTraffic_pFlightData_i_pd_pd_pd_pd_pd_pd(carg1, carg2, carg3, carg4, carg5, carg6, carg7, carg8);
}
void FlightData_ClearMissionList(SwigObj * carg1) {
  return _wrap_FlightData_ClearMissionList(carg1);
}
void FlightData_ClearResolutionList(SwigObj * carg1) {
  return _wrap_FlightData_ClearResolutionList(carg1);
}
void FlightData_InputNextMissionWP(SwigObj * carg1, int carg2) {
  return _wrap_FlightData_InputNextMissionWP(carg1, carg2);
}
void FlightData_InputNextResolutionWP(SwigObj * carg1, int carg2) {
  return _wrap_FlightData_InputNextResolutionWP(carg1, carg2);
}
void FlightData_InputTakeoffAlt(SwigObj * carg1, double carg2) {
  return _wrap_FlightData_InputTakeoffAlt(carg1, carg2);
}
void FlightData_InputCruisingAlt(SwigObj * carg1, double carg2) {
  return _wrap_FlightData_InputCruisingAlt(carg1, carg2);
}
void FlightData_InputGeofenceData(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_InputGeofenceData(carg1, carg2);
}
double FlightData_GetTakeoffAlt(SwigObj * carg1) {
  return _wrap_FlightData_GetTakeoffAlt(carg1);
}
double FlightData_GetCruisingAlt(SwigObj * carg1) {
  return _wrap_FlightData_GetCruisingAlt(carg1);
}
double FlightData_GetAltitude(SwigObj * carg1) {
  return _wrap_FlightData_GetAltitude(carg1);
}
double FlightData_GetAllowedXtracDeviation(SwigObj * carg1) {
  return _wrap_FlightData_GetAllowedXtracDeviation(carg1);
}
double FlightData_GetResolutionSpeed(SwigObj * carg1) {
  return _wrap_FlightData_GetResolutionSpeed(carg1);
}
int FlightData_GetTotalMissionWP(SwigObj * carg1) {
  return _wrap_FlightData_GetTotalMissionWP(carg1);
}
int FlightData_GetTotalResolutionWP(SwigObj * carg1) {
  return _wrap_FlightData_GetTotalResolutionWP(carg1);
}
int FlightData_GetTotalTraffic(SwigObj * carg1) {
  return _wrap_FlightData_GetTotalTraffic(carg1);
}
void FlightData_Reset(SwigObj * carg1) {
  return _wrap_FlightData_Reset(carg1);
}
void FlightData_InputAck(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_InputAck(carg1, carg2);
}
bool FlightData_CheckAck(SwigObj * carg1, SwigObj * carg2) {
  return _wrap_FlightData_CheckAck(carg1, carg2);
}
SwigObj * FlightData_GetStartMissionFlag(SwigObj * carg1) {
  return _wrap_FlightData_GetStartMissionFlag(carg1);
}
SwigObj * FlightData_GetMissionPlanSize(SwigObj * carg1) {
  return _wrap_FlightData_GetMissionPlanSize(carg1);
}
SwigObj * FlightData_GetResolutionPlanSize(SwigObj * carg1) {
  return _wrap_FlightData_GetResolutionPlanSize(carg1);
}
SwigObj * FlightData_GetNextMissionWP(SwigObj * carg1) {
  return _wrap_FlightData_GetNextMissionWP(carg1);
}
SwigObj * FlightData_GetNextResolutionWP(SwigObj * carg1) {
  return _wrap_FlightData_GetNextResolutionWP(carg1);
}
int FlightData_GetTotalFences(SwigObj * carg1) {
  return _wrap_FlightData_GetTotalFences(carg1);
}
double FlightData_getFlightPlanSpeed(SwigObj * carg1, SwigObj * carg2, int carg3) {
  return _wrap_FlightData_getFlightPlanSpeed(carg1, carg2, carg3);
}
void FlightData_GetTraffic_pFlightData_i_rlarcfm_Position_rlarcfm_Velocity(SwigObj * carg1, int carg2, SwigObj * carg3, SwigObj * carg4) {
  return _wrap_FlightData_GetTraffic_pFlightData_i_rlarcfm_Position_rlarcfm_Velocity(carg1, carg2, carg3, carg4);
}
/*aaaaaa*/SwigObj * FlightData_GetGeofence(SwigObj * carg1, int carg2) {
  return _wrap_FlightData_GetGeofence(carg1, carg2);
}
/*aaaaaa*/SwigObj * FlightData_GetPolyPath(SwigObj * carg1) {
  return _wrap_FlightData_GetPolyPath(carg1);
}
void delete_FlightData(FlightData * carg1) {
  return _wrap_delete_FlightData(carg1);
}
void GeofenceConflict_fenceId_set(SwigObj * carg1, int carg2) {
  return _wrap_GeofenceConflict_fenceId_set(carg1, carg2);
}
int GeofenceConflict_fenceId_get(SwigObj * carg1) {
  return _wrap_GeofenceConflict_fenceId_get(carg1);
}
void GeofenceConflict_violationStatus_set(SwigObj * carg1, bool carg2) {
  return _wrap_GeofenceConflict_violationStatus_set(carg1, carg2);
}
bool GeofenceConflict_violationStatus_get(SwigObj * carg1) {
  return _wrap_GeofenceConflict_violationStatus_get(carg1);
}
void GeofenceConflict_conflictstatus_set(SwigObj * carg1, bool carg2) {
  return _wrap_GeofenceConflict_conflictstatus_set(carg1, carg2);
}
bool GeofenceConflict_conflictstatus_get(SwigObj * carg1) {
  return _wrap_GeofenceConflict_conflictstatus_get(carg1);
}
void GeofenceConflict_recoveryPoint_set(SwigObj * carg1, /*aaa*/ double * carg2) {
  return _wrap_GeofenceConflict_recoveryPoint_set(carg1, carg2);
}
double * GeofenceConflict_recoveryPoint_get(SwigObj * carg1) {
  return _wrap_GeofenceConflict_recoveryPoint_get(carg1);
}
GeofenceConflict * new_GeofenceConflict() {
  return _wrap_new_GeofenceConflict();
}
void delete_GeofenceConflict(GeofenceConflict * carg1) {
  return _wrap_delete_GeofenceConflict(carg1);
}
GeofenceMonitor * new_GeofenceMonitor(SwigObj * carg1) {
  return _wrap_new_GeofenceMonitor(carg1);
}
void GeofenceMonitor_CheckViolation(SwigObj * carg1, /*aaa*/ double * carg2, double carg3, double carg4, double carg5) {
  return _wrap_GeofenceMonitor_CheckViolation(carg1, carg2, carg3, carg4, carg5);
}
bool GeofenceMonitor_CheckWPFeasibility(SwigObj * carg1, /*aaa*/ double * carg2, /*aaa*/ double * carg3) {
  return _wrap_GeofenceMonitor_CheckWPFeasibility(carg1, carg2, carg3);
}
int GeofenceMonitor_GetNumConflicts(SwigObj * carg1) {
  return _wrap_GeofenceMonitor_GetNumConflicts(carg1);
}
void GeofenceMonitor_GetConflictStatus(SwigObj * carg1, bool * carg2) {
  return _wrap_GeofenceMonitor_GetConflictStatus(carg1, carg2);
}
void GeofenceMonitor_GetConflict(SwigObj * carg1, int carg2, int * carg3, bool * carg4, bool * carg5, /*aaa*/ double * carg6) {
  return _wrap_GeofenceMonitor_GetConflict(carg1, carg2, carg3, carg4, carg5, carg6);
}
void GeofenceMonitor_GetClosestRecoveryPoint(SwigObj * carg1, /*aaa*/ double * carg2, /*aaa*/ double * carg3) {
  return _wrap_GeofenceMonitor_GetClosestRecoveryPoint(carg1, carg2, carg3);
}
void delete_GeofenceMonitor(GeofenceMonitor * carg1) {
  return _wrap_delete_GeofenceMonitor(carg1);
}

