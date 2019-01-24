/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A71
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/catalog/arm/cortexm4/tiva/ce/Boot.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm4/Timer.h>
#include <ti/sysbios/family/arm/lm4/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/loggers/LoggerStopMode.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm4_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Object__ {
    const ti_sysbios_family_arm_lm4_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm4_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm4_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm4_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt rollovers;
    xdc_UInt savedCurrCount;
    xdc_Bool altclk;
} ti_sysbios_family_arm_lm4_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm4_Timer_Object__ obj;
} ti_sysbios_family_arm_lm4_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_lm4_Timer___VERS
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock_TimerProxy___VERS
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_loggers_LoggerStopMode_Module__;

/* Module__root__V */
extern ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V;

/* Object__ */
typedef struct ti_uia_loggers_LoggerStopMode_Object__ {
    const ti_uia_loggers_LoggerStopMode_Fxns__ *__fxns;
    xdc_Bool enabled;
    xdc_Int16 instanceId;
    xdc_UInt32 bufSize;
    xdc_UInt32 *buffer;
    xdc_UInt32 *write;
    xdc_UInt32 *end;
    xdc_SizeT maxEventSizeInBits32;
    xdc_SizeT maxEventSize;
    xdc_UInt16 numBytesInPrevEvent;
    xdc_Bits32 droppedEvents;
    xdc_UInt16 eventSequenceNum;
    xdc_UInt16 pktSequenceNum;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__hdr hdr;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray packetArray;
} ti_uia_loggers_LoggerStopMode_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_loggers_LoggerStopMode_Object__ obj;
} ti_uia_loggers_LoggerStopMode_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_loggers_LoggerStopMode___VERS
    #define ti_uia_loggers_LoggerStopMode___ParamsPtr xdc_UChar*
#else
    #define ti_uia_loggers_LoggerStopMode___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.uia.runtime.EventHdr INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_IUIATransfer_Interface__BASE__C, ".const:ti_uia_runtime_IUIATransfer_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATransfer_Interface__BASE__C = {(void*)&xdc_runtime_IFilterLogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {(void*)&xdc_runtime_ILogger_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, ".const:ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C = {(void*)&ti_uia_runtime_IUIATransfer_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8037, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8031, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8032, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8026, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__FXNS__C, ".const:ti_uia_loggers_LoggerStopMode_Module__FXNS__C");
const ti_uia_loggers_LoggerStopMode_Fxns__ ti_uia_loggers_LoggerStopMode_Module__FXNS__C = {
    (void*)&ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, /* __base */
    &ti_uia_loggers_LoggerStopMode_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_loggers_LoggerStopMode_enable__E,
    ti_uia_loggers_LoggerStopMode_disable__E,
    ti_uia_loggers_LoggerStopMode_write0__E,
    ti_uia_loggers_LoggerStopMode_write1__E,
    ti_uia_loggers_LoggerStopMode_write2__E,
    ti_uia_loggers_LoggerStopMode_write4__E,
    ti_uia_loggers_LoggerStopMode_write8__E,
    ti_uia_loggers_LoggerStopMode_setFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getTransferType__E,
    ti_uia_loggers_LoggerStopMode_getContents__E,
    ti_uia_loggers_LoggerStopMode_isEmpty__E,
    ti_uia_loggers_LoggerStopMode_getMaxLength__E,
    ti_uia_loggers_LoggerStopMode_getInstanceId__E,
    ti_uia_loggers_LoggerStopMode_getPriority__E,
    ti_uia_loggers_LoggerStopMode_setPriority__E,
    ti_uia_loggers_LoggerStopMode_reset__E,
    ti_uia_loggers_LoggerStopMode_writeMemoryRange__E,
    {
        ti_uia_loggers_LoggerStopMode_Object__create__S,
        ti_uia_loggers_LoggerStopMode_Object__delete__S,
        ti_uia_loggers_LoggerStopMode_Handle__label__S,
        0x803d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm4_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6];

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6];

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V;

/* --> ti_sysbios_family_arm_lm4_Timer_enableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_enableTiva(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_disableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_disableTiva(xdc_Int);


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_lm4_Timer_Handle timer;
    volatile xdc_UInt32 hi;
} ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[4];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    __TA_ti_sysbios_utils_Load_Module_State__taskEnv taskEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    xdc_UInt32 taskEnvLen;
    xdc_UInt32 taskNum;
    xdc_Bool powerEnabled;
    xdc_UInt32 idleStartTime;
    xdc_UInt32 busyStartTime;
    xdc_UInt32 busyTime;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif
/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif
#endif

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3];

/* Module_State__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module_State__ {
    xdc_Bool enabled;
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} ti_uia_loggers_LoggerStopMode_Module_State__;

/* Module__state__V */
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V;


/*
 * ======== ti.uia.runtime.EventHdr DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_QueueDescriptor_Module_State__ {
    xdc_Ptr mPtrToFirstDescriptor;
    xdc_UInt mUpdateCount;
    xdc_UInt32 is5555ifInitialized;
} ti_uia_runtime_QueueDescriptor_Module_State__;

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V;


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E(xdc_Int);

/* --> ti_uia_loggers_LoggerStopMode_Module_startup__E */
extern xdc_Int ti_uia_loggers_LoggerStopMode_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7984];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[64];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__, Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/scetre/workspace6_1/acsndSensor/Debug__opt_for_speed__4/configPkg/package/cfg/acsndSensor_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.tiva");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.tiva.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32777, &xdc_runtime_Main_Module__root__V.mask},
    {32798, &ti_sysbios_knl_Event_Module__root__V.mask},
    {32802, &ti_sysbios_knl_Task_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}


/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[10];
    xdc_runtime_Startup_startModsFxn__C(state, 10);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        xdc_Double d, tmp;
        xdc_runtime_System_UNum  fract;
        xdc_Int    negative;

        if (parse->aFlag) {
            xdc_runtime_Assert_isTrue((sizeof(xdc_Float) <= sizeof(xdc_IArg)), 
                xdc_runtime_System_A_cannotFitIntoArg);

            d = argToFloat(va_arg(va, xdc_IArg));
        }
        else {
            d = va_arg(va, double);
        }

        if (d < 0.0) {
            d = -d;
            negative = TRUE;
            parse->zpad--;
        }
        else {
            negative = FALSE;
        }

        /*
         * output (error) if we can't print correct value
         */
        if (d > (double) LONG_MAX) {
            parse->ptr = "(error)";
            parse->len = 7;                /* strlen("(error)"); */
            goto end;
        }

        /* Assumes four digits after decimal point. We are using a temporary
         * double variable to force double-precision computations without 
         * using --fp_mode=strict flag. See the description of that flag in
         * the compiler's doc for a further explanation.
         */
        tmp = (d - (xdc_runtime_System_INum)d) * 1e4;
        fract = (xdc_runtime_System_UNum)tmp;

        parse->ptr = xdc_runtime_System_formatNum__I(parse->end, fract, 4, 10);
        *(--parse->ptr) = '.';

#if 0
        /* eliminate trailing zeros */
        do {
        } while (*(--parse->end) == '0');
        ++parse->end;
#endif
        parse->len = parse->end - parse->ptr;
        /* format integer part (right to left!) */
        parse->ptr = xdc_runtime_System_formatNum__I(parse->ptr,
            (xdc_runtime_System_INum)d, parse->zpad - parse->len, 10);
        if (negative) {
            *(--parse->ptr) = '-';
        }

        parse->len = parse->end - parse->ptr;
        found = TRUE;
    }

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot TEMPLATE ========
 */

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_arm_cortexm4_tiva_ce_Boot_init ========
 */
xdc_Void ti_catalog_arm_cortexm4_tiva_ce_Boot_init()
{
    ti_catalog_arm_cortexm4_tiva_ce_Boot_sysCtlClockSet((xdc_ULong)
        (-1056963264));
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_arm_lm4_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_lm4_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */



/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[216];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[216];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
        ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (SizeT)__section_size("CSTACK");
}
#endif

/*
 * ======== ti.uia.loggers.LoggerStopMode TEMPLATE ========
 */


#include <xdc/std.h>

#include <xdc/runtime/Log.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/UIAPacket.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/loggers/LoggerStopMode.h>

#include <string.h>  /* For memcpy */

#ifdef xdc_target__isaCompatible_64P
extern volatile cregister UInt32 TSCL, TSCH;
#endif

/*
 *  ======== ti_uia_loggers_LoggerStopMode_fillInTimestamp =========
 */
static inline UInt32 *ti_uia_loggers_LoggerStopMode_fillInTimestamp(UInt32 *writePtr)
{

#ifndef xdc_target__isaCompatible_64P
    xdc_runtime_Types_Timestamp64 tstamp;
    xdc_runtime_Timestamp_get64(&tstamp);
    *(writePtr++) = tstamp.lo;
    *(writePtr++) = tstamp.hi;
#else
    *(writePtr++) = TSCL;
    *(writePtr++) = TSCH;
#endif
    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeStart ========
 */
static inline Ptr ti_uia_loggers_LoggerStopMode_writeStart(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr, UInt32 numBytes,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid)
{


    *writePtr++ = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
        numBytes,
        obj->numBytesInPrevEvent,
        obj->eventSequenceNum,
        ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWith64bTimestamp);

    obj->numBytesInPrevEvent = numBytes;

    writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);
    *writePtr++ = xdc_runtime_Types_makeEvent(xdc_runtime_Log_getEventId(evt), mid);

    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeFinish ========
 */
static inline Void ti_uia_loggers_LoggerStopMode_writeFinish(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr)
{
    if (writePtr > obj->end) {
        /* Set UIA packet length and sequence number */
        ti_uia_runtime_UIAPacket_setEventLengthFast(
                (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
                (UInt32)((writePtr - obj->buffer) * 4));

        /* Reset the write pointer to the beginning of the buffer */
        obj->write = obj->buffer + 4;

        /*
         *  Update the sequence count after the packet has been fully written
         *  in order to ensure that, if the target is halted it can decode the
         *  partially written packet correctly
         */
        obj->pktSequenceNum++;
        ti_uia_runtime_UIAPacket_setSequenceCounts(
            (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
            obj->pktSequenceNum,
            obj->eventSequenceNum);
    }
    else {
        obj->write = writePtr;
    }
    ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)obj->write;
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_filterOutEvent ========
 *  Returns TRUE if the event should be filtered out.
 */
Bool ti_uia_loggers_LoggerStopMode_filterOutEvent__I(xdc_runtime_Diags_Mask mask)
{
    return (FALSE);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write0__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write0__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            16, evt, mid);


    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            16,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write1__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write1__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            20, evt, mid);

    *writePtr++ = a1;

    obj->numBytesInPrevEvent = 20;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            20,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write2__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write2__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            24, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;

    obj->numBytesInPrevEvent = 24;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            24,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write4__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write4__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2, IArg a3, IArg a4)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            32, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;

    obj->numBytesInPrevEvent = 32;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            32,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write8__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write8__E(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid,
        IArg a1, IArg a2, IArg a3, IArg a4,
        IArg a5, IArg a6, IArg a7, IArg a8)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            48, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;
    *writePtr++ = a5;
    *writePtr++ = a6;
    *writePtr++ = a7;
    *writePtr++ = a8;

    obj->numBytesInPrevEvent = 48;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            48,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_setFilterLevel__E ========
 *  Sets the filter level for the given diags level.
 *
 *  LoggerStopMode maintains a separate filter level for every diags category.
 *  This is accomplished by maintaining three masks, one for each of the levels
 *  1 - 3, wich store the diags categories which are currently at that level.
 *  There is no mask for level4; if the diags category is not found in levels
 *  1-3, it is  assumed that the filtering level is level4.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
Void ti_uia_loggers_LoggerStopMode_setFilterLevel__E(ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_Mask mask,
                xdc_runtime_Diags_EventLevel filterLevel)
{
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_getFilterLevel__E ========
 *  Returns the mask of diags categories which are set to the specified filter
 *  level.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
xdc_runtime_Diags_Mask ti_uia_loggers_LoggerStopMode_getFilterLevel__E (ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_EventLevel level)
{
    return (0);

}

/*  ======== writeMemoryRange =========
 *  logs a range of consecutive memory values.
 *
 *  Breaks up large blocks into a series of smaller blocks in order to limit the
 *  maximum amount of time that interrupts are disabled.
 */
Void ti_uia_loggers_LoggerStopMode_writeMemoryRange__E(ti_uia_loggers_LoggerStopMode_Object *obj, xdc_runtime_Log_Event evt,
                xdc_runtime_Types_ModuleId mid, UInt32 snapshotId,
                IArg fileName, IArg lineNum, IArg fmt,
                IArg startAdrs, UInt32 lengthInMAUs)
{
    Int i;
    UInt32 eventSizeBits32;
    UInt32 dataSizeBits32;
    Ptr pAdrs = iargToPtr(startAdrs);
    SizeT headerSizeBits32;
    SizeT lenAdjustedBits32;
    Int numRecords;
    UInt key;
    UInt32 *writePtr = obj->write;



    if (obj->maxEventSizeInBits32 == 0) {
        return;
    }

    /* Size of header in 32 bit words */
    headerSizeBits32 = 10;

    /* Round up to word boundary */
    lenAdjustedBits32 = (lengthInMAUs + sizeof(Bits32) - 1) / sizeof(Bits32);

    numRecords = (lenAdjustedBits32 / (obj->maxEventSizeInBits32 - headerSizeBits32)) + 1;

    for (i = 0; i < numRecords; i++) {
        if ((headerSizeBits32 + lenAdjustedBits32) > obj->maxEventSizeInBits32) {
            dataSizeBits32 = obj->maxEventSizeInBits32 - headerSizeBits32;
            lenAdjustedBits32 -= dataSizeBits32;
        }
        else {
            dataSizeBits32 = lenAdjustedBits32;
        }
        eventSizeBits32 = dataSizeBits32 + headerSizeBits32;

        key = ti_sysbios_hal_Hwi_disable();
        if ((writePtr + eventSizeBits32) >= obj->end) {
            ti_uia_loggers_LoggerStopMode_flush(obj);
            writePtr = obj->write;
        }

        if ((writePtr == NULL ) || ((writePtr + eventSizeBits32) >= obj->end)) {
            obj->droppedEvents++;
            ti_sysbios_hal_Hwi_restore(key);

            continue;
        }

        /*
         *  Fill in Snapshot header.
         *  Use events with previous event length in header to allow events
         *  to be read from partially written packets
         */
        *(writePtr++) = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            ((eventSizeBits32) * 4),
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum, ti_uia_runtime_EventHdr_HdrType_SnapshotEventWithPrevLenAnd64bTimestamp);

        writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);

        *(writePtr++) = ((evt) & 0xffff0000) | mid;
        *(writePtr++) = fileName;
        *(writePtr++) = lineNum;
        *(writePtr++) = snapshotId;
        *(writePtr++) = (Bits32)pAdrs;
        *(writePtr++) = (((((dataSizeBits32) * sizeof(Bits32)) & 0x0FFFF)<<16) | (lengthInMAUs & 0x0FFFF));
        *(writePtr++) = fmt;

        memcpy((Ptr)writePtr, pAdrs, ((dataSizeBits32) * sizeof(Bits32)));
        writePtr = (Ptr)((Char *)writePtr + ((dataSizeBits32) * sizeof(Bits32)));

        /*
         * Update serial number even if the buffer is full or disabled.
         * We do this because a reader (decoder) of the buffer needs to
         * know if events have been missed, and the buffer might become
         * un-FULL at some later time.
         */
        obj->eventSequenceNum++;

        obj->numBytesInPrevEvent = ((eventSizeBits32) * 4);
        *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

        obj->write = writePtr;

        ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)writePtr;
        pAdrs = (Ptr)((Char *)pAdrs + ((dataSizeBits32) * sizeof(Bits32)));
        ti_sysbios_hal_Hwi_restore(key);
    }
    obj->write = writePtr;
}

/*
 * ======== ti.sysbios.utils.Load TEMPLATE ========
 */

#include <ti/sysbios/utils/Load.h>
#include <ti/sysbios/hal/Core.h>

/*
 *  ======== Load_update ========
 */
Void ti_sysbios_utils_Load_update__E()
{
    /* Update and Log CPU load, Task, Swi, and Hwi loads (if enabled). */
    ti_sysbios_utils_Load_updateLoads();
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C = 0;

/* A_mustUseEnhancedClockMode__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_mustNotUseEnhancedClockMode__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)474) << 16 | 16);


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x4c4b400,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x4c4b400,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm4_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    (xdc_UInt)0xffffffff,  /* prevThreshold */
    0,  /* altclk */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x13880,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6] = {
    {
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x56,  /* intNum */
        ((xdc_Ptr)(0x40034000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x6c,  /* intNum */
        ((xdc_Ptr)(0x40035000)),  /* baseAddr */
    },  /* [5] */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6] = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* [0] */
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V = {
    (xdc_UInt)0x3c,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__id__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C = (xdc_Bits16)0x803b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__count__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm4_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__table__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C = ti_sysbios_family_arm_lm4_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4881) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4917) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4956) << 16 | 0);

/* E_noaltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_noaltclk ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C = (((xdc_runtime_Error_Id)5014) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_anyMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C = (xdc_UInt)0x3f;

/* supportsAltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_supportsAltclk ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C = 1;

/* enableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_enableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_enableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc ti_sysbios_family_arm_lm4_Timer_enableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_enableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTiva));

/* disableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_disableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_disableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc ti_sysbios_family_arm_lm4_Timer_disableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_disableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_disableTiva));

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_lm4_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C = (xdc_Int)0x6;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* timer */
    (xdc_UInt32)0x0,  /* hi */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__id ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C = (xdc_Bits16)0x803a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__count ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__table ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C = 0;

/* useClockTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C = 0;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_timerId ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x23,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x25,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x300,  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x8036;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xd8;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)7255) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)7325) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)3814) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4395) << 16 | 0);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)4443) << 16 | 0);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4491) << 16 | 0);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4696) << 16 | 0);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4724) << 16 | 0);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4734) << 16 | 0);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4750) << 16 | 0);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4780) << 16 | 0);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4810) << 16 | 0);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4827) << 16 | 0);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4848) << 16 | 0);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4863) << 16 | 0);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8037;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x8038;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8031;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8032;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3615) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4232) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2478) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2514) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2559) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4317) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2450) << 16 | 16);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)5232) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5254) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5272) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)646) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)727) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5304) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5358) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)797) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)844) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)883) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)926) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)989) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_utils_Load_idleFxn__E)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5439) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5469) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1137) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1192) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)926) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1257) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1311) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5512) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5559) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5577) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1405) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1462) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[4] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5617) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5685) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5730) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5771) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5803) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5851) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5907) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5938) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)6021) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)6107) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4107) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4150) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4201) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1511) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1580) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1634) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1688) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1751) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1801) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1836) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1869) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1953) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x4;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_utils_Load_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data_ti_sysbios_utils_Load_Module__state__V")));
#endif
#endif
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* swiEnv */
    ((void*)0),  /* taskEnv */
    (xdc_UInt32)0x0,  /* swiCnt */
    (xdc_UInt32)0x0,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0,  /* hwiCnt */
    (xdc_UInt32)0x0,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffff,  /* minLoop */
    (xdc_UInt32)0x0,  /* minIdle */
    (xdc_UInt32)0x0,  /* t0 */
    (xdc_UInt32)0x0,  /* idleCnt */
    (xdc_UInt32)0x0,  /* cpuLoad */
    (xdc_UInt32)0x0,  /* taskEnvLen */
    (xdc_UInt32)0x0,  /* taskNum */
    0,  /* powerEnabled */
    (xdc_UInt32)0x0,  /* idleStartTime */
    (xdc_UInt32)0x0,  /* busyStartTime */
    (xdc_UInt32)0x0,  /* busyTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x890;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x890;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((CT__ti_sysbios_utils_Load_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((CT__ti_sysbios_utils_Load_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((CT__ti_sysbios_utils_Load_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x803f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((CT__ti_sysbios_utils_Load_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__startupDoneFxn__C, ".const:ti_sysbios_utils_Load_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__startupDoneFxn ti_sysbios_utils_Load_Module__startupDoneFxn__C = ((CT__ti_sysbios_utils_Load_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = 0;

/* LS_cpuLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)7363) << 16 | 2048);

/* LS_hwiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)7380) << 16 | 2048);

/* LS_swiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)7398) << 16 | 2048);

/* LS_taskLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)7416) << 16 | 2048);

/* postUpdate__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((CT__ti_sysbios_utils_Load_postUpdate)0);

/* updateInIdle__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4;

/* hwiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 0;

/* autoAddTasks__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 0;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((CT__ti_uia_events_DvtTypes_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((CT__ti_uia_events_DvtTypes_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((CT__ti_uia_events_DvtTypes_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((CT__ti_uia_events_DvtTypes_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__startupDoneFxn__C, ".const:ti_uia_events_DvtTypes_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__startupDoneFxn ti_uia_events_DvtTypes_Module__startupDoneFxn__C = ((CT__ti_uia_events_DvtTypes_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = 0;


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((CT__ti_uia_events_UIAErr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((CT__ti_uia_events_UIAErr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((CT__ti_uia_events_UIAErr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((CT__ti_uia_events_UIAErr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAErr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__startupDoneFxn ti_uia_events_UIAErr_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAErr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = 0;

/* error__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)6177) << 16 | 192);

/* errorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)6199) << 16 | 192);

/* hwError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)6226) << 16 | 192);

/* hwErrorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)6251) << 16 | 192);

/* fatal__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)6281) << 16 | 128);

/* fatalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)6309) << 16 | 128);

/* critical__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)6342) << 16 | 160);

/* criticalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)6373) << 16 | 160);

/* exception__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)6409) << 16 | 192);

/* uncaughtException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)6434) << 16 | 192);

/* nullPointerException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)6468) << 16 | 192);

/* unexpectedInterrupt__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)6506) << 16 | 192);

/* memoryAccessFault__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)6542) << 16 | 192);

/* securityException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)6588) << 16 | 192);

/* divisionByZero__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)6622) << 16 | 192);

/* overflowException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)6654) << 16 | 192);

/* indexOutOfRange__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)6688) << 16 | 192);

/* notImplemented__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)6734) << 16 | 192);

/* stackOverflow__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)6799) << 16 | 160);

/* illegalInstruction__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)6838) << 16 | 192);

/* entryPointNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)6882) << 16 | 192);

/* moduleNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)6919) << 16 | 192);

/* floatingPointError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)6968) << 16 | 192);

/* invalidParameter__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)7004) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((CT__ti_uia_events_UIAEvt_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((CT__ti_uia_events_UIAEvt_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((CT__ti_uia_events_UIAEvt_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((CT__ti_uia_events_UIAEvt_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAEvt_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__startupDoneFxn ti_uia_events_UIAEvt_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAEvt_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = 0;

/* warning__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)7067) << 16 | 224);

/* warningWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)7091) << 16 | 224);

/* info__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)7120) << 16 | 16384);

/* infoWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)7142) << 16 | 16384);

/* detail__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)7169) << 16 | 16480);

/* detailWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)7192) << 16 | 16480);

/* intWithKey__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)7221) << 16 | 32768);


/*
 * ======== ti.uia.loggers.LoggerStopMode INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_loggers_LoggerStopMode_Object__PARAMS__C");
__FAR__ const ti_uia_loggers_LoggerStopMode_Params ti_uia_loggers_LoggerStopMode_Object__PARAMS__C = {
    sizeof (ti_uia_loggers_LoggerStopMode_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C.__iprms, /* instance */
    ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
    ti_uia_runtime_IUIATransfer_Priority_STANDARD,  /* priority */
    (xdc_Int16)0x1,  /* instanceId */
    (xdc_SizeT)0x0,  /* transferBufSize */
    (xdc_SizeT)0x200,  /* maxEventSize */
    (xdc_SizeT)0x578,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024];

/* Module__root__V */
ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V = {
    {&ti_uia_loggers_LoggerStopMode_Module__root__V.link,  /* link.next */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3] = {
    {/* instance#0 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x1,  /* instanceId */
        (xdc_UInt32)0x200,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A),  /* packetArray */
    },
    {/* instance#1 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x2,  /* instanceId */
        (xdc_UInt32)0x400,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A),  /* packetArray */
    },
    {/* instance#2 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x3,  /* instanceId */
        (xdc_UInt32)0x400,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A),  /* packetArray */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_loggers_LoggerStopMode_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V __attribute__ ((section(".data_ti_uia_loggers_LoggerStopMode_Module__state__V")));
#endif
#endif
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V = {
    1,  /* enabled */
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsEnabled ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsIncluded ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsMask__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsMask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask ti_uia_loggers_LoggerStopMode_Module__diagsMask__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gateObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gateObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gateObj ti_uia_loggers_LoggerStopMode_Module__gateObj__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gatePrms__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gatePrms__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms ti_uia_loggers_LoggerStopMode_Module__gatePrms__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__id__C, ".const:ti_uia_loggers_LoggerStopMode_Module__id__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__id ti_uia_loggers_LoggerStopMode_Module__id__C = (xdc_Bits16)0x803d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerDefined ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj ti_uia_loggers_LoggerStopMode_Module__loggerObj__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C, ".const:ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__count__C, ".const:ti_uia_loggers_LoggerStopMode_Object__count__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__count ti_uia_loggers_LoggerStopMode_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__heap__C, ".const:ti_uia_loggers_LoggerStopMode_Object__heap__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__heap ti_uia_loggers_LoggerStopMode_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__sizeof__C, ".const:ti_uia_loggers_LoggerStopMode_Object__sizeof__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__sizeof ti_uia_loggers_LoggerStopMode_Object__sizeof__C = sizeof(ti_uia_loggers_LoggerStopMode_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__table__C, ".const:ti_uia_loggers_LoggerStopMode_Object__table__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__table ti_uia_loggers_LoggerStopMode_Object__table__C = ti_uia_loggers_LoggerStopMode_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_filterByLevel__C, ".const:ti_uia_loggers_LoggerStopMode_filterByLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_filterByLevel ti_uia_loggers_LoggerStopMode_filterByLevel__C = 0;

/* isTimestampEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_isTimestampEnabled ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C = 1;

/* supportLoggerDisable__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C, ".const:ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_supportLoggerDisable ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level1Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level1Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level1Mask ti_uia_loggers_LoggerStopMode_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level2Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level2Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level2Mask ti_uia_loggers_LoggerStopMode_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level3Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level3Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level3Mask ti_uia_loggers_LoggerStopMode_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level4Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level4Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level4Mask ti_uia_loggers_LoggerStopMode_level4Mask__C = (xdc_Bits16)0xff87;

/* L_test__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_L_test__C, ".const:ti_uia_loggers_LoggerStopMode_L_test__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_L_test ti_uia_loggers_LoggerStopMode_L_test__C = (((xdc_runtime_Log_Event)7343) << 16 | 256);

/* E_badLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_E_badLevel__C, ".const:ti_uia_loggers_LoggerStopMode_E_badLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_E_badLevel ti_uia_loggers_LoggerStopMode_E_badLevel__C = (((xdc_runtime_Error_Id)3935) << 16 | 0);

/* numCores__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_numCores__C, ".const:ti_uia_loggers_LoggerStopMode_numCores__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_numCores ti_uia_loggers_LoggerStopMode_numCores__C = (xdc_Int)0x1;


/*
 * ======== ti.uia.runtime.EventHdr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsEnabled__C, ".const:ti_uia_runtime_EventHdr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsEnabled ti_uia_runtime_EventHdr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsIncluded__C, ".const:ti_uia_runtime_EventHdr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsIncluded ti_uia_runtime_EventHdr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsMask__C, ".const:ti_uia_runtime_EventHdr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsMask ti_uia_runtime_EventHdr_Module__diagsMask__C = ((CT__ti_uia_runtime_EventHdr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gateObj__C, ".const:ti_uia_runtime_EventHdr_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gateObj ti_uia_runtime_EventHdr_Module__gateObj__C = ((CT__ti_uia_runtime_EventHdr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gatePrms__C, ".const:ti_uia_runtime_EventHdr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gatePrms ti_uia_runtime_EventHdr_Module__gatePrms__C = ((CT__ti_uia_runtime_EventHdr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__id__C, ".const:ti_uia_runtime_EventHdr_Module__id__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__id ti_uia_runtime_EventHdr_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerDefined__C, ".const:ti_uia_runtime_EventHdr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerDefined ti_uia_runtime_EventHdr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerObj__C, ".const:ti_uia_runtime_EventHdr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerObj ti_uia_runtime_EventHdr_Module__loggerObj__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn0__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0 ti_uia_runtime_EventHdr_Module__loggerFxn0__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn1__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1 ti_uia_runtime_EventHdr_Module__loggerFxn1__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn2__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2 ti_uia_runtime_EventHdr_Module__loggerFxn2__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn4__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4 ti_uia_runtime_EventHdr_Module__loggerFxn4__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn8__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8 ti_uia_runtime_EventHdr_Module__loggerFxn8__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__startupDoneFxn__C, ".const:ti_uia_runtime_EventHdr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn ti_uia_runtime_EventHdr_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__count__C, ".const:ti_uia_runtime_EventHdr_Object__count__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__count ti_uia_runtime_EventHdr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__heap__C, ".const:ti_uia_runtime_EventHdr_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__heap ti_uia_runtime_EventHdr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__sizeof__C, ".const:ti_uia_runtime_EventHdr_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__sizeof ti_uia_runtime_EventHdr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__table__C, ".const:ti_uia_runtime_EventHdr_Object__table__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__table ti_uia_runtime_EventHdr_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.QueueDescriptor INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_runtime_QueueDescriptor_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V __attribute__ ((section(".data_ti_uia_runtime_QueueDescriptor_Module__state__V")));
#endif
#endif
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V = {
    ((xdc_Ptr)0),  /* mPtrToFirstDescriptor */
    (xdc_UInt)0x0,  /* mUpdateCount */
    (xdc_UInt32)0x5555,  /* is5555ifInitialized */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsEnabled ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsIncluded ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsMask__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask ti_uia_runtime_QueueDescriptor_Module__diagsMask__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gateObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj ti_uia_runtime_QueueDescriptor_Module__gateObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gatePrms__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms ti_uia_runtime_QueueDescriptor_Module__gatePrms__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__id__C, ".const:ti_uia_runtime_QueueDescriptor_Module__id__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__id ti_uia_runtime_QueueDescriptor_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerDefined ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj ti_uia_runtime_QueueDescriptor_Module__loggerObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0 ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1 ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2 ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4 ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8 ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C, ".const:ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__count__C, ".const:ti_uia_runtime_QueueDescriptor_Object__count__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__count ti_uia_runtime_QueueDescriptor_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__heap__C, ".const:ti_uia_runtime_QueueDescriptor_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__heap ti_uia_runtime_QueueDescriptor_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__sizeof__C, ".const:ti_uia_runtime_QueueDescriptor_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__sizeof ti_uia_runtime_QueueDescriptor_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__table__C, ".const:ti_uia_runtime_QueueDescriptor_Object__table__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__table ti_uia_runtime_QueueDescriptor_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x802f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C, ".const:ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3867) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3889) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3893) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3927) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)5056) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5080) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)5101) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5120) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5137) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5151) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5167) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5174) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5185) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5195) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5214) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    65408,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[5] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_catalog_arm_cortexm4_tiva_ce_Boot_init__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [3] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTimers__I)),  /* [4] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_startTimer__E)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_uia_loggers_LoggerStopMode_Module_startup__E)),  /* [9] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    1,  /* [7] */
    0,  /* [8] */
    1,  /* [9] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {5, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7984] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6d,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x74,  /* [405] */
    (xdc_Char)0x55,  /* [406] */
    (xdc_Char)0x73,  /* [407] */
    (xdc_Char)0x65,  /* [408] */
    (xdc_Char)0x45,  /* [409] */
    (xdc_Char)0x6e,  /* [410] */
    (xdc_Char)0x68,  /* [411] */
    (xdc_Char)0x61,  /* [412] */
    (xdc_Char)0x6e,  /* [413] */
    (xdc_Char)0x63,  /* [414] */
    (xdc_Char)0x65,  /* [415] */
    (xdc_Char)0x64,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x6c,  /* [418] */
    (xdc_Char)0x6f,  /* [419] */
    (xdc_Char)0x63,  /* [420] */
    (xdc_Char)0x6b,  /* [421] */
    (xdc_Char)0x4d,  /* [422] */
    (xdc_Char)0x6f,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x65,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x54,  /* [428] */
    (xdc_Char)0x68,  /* [429] */
    (xdc_Char)0x69,  /* [430] */
    (xdc_Char)0x73,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x64,  /* [433] */
    (xdc_Char)0x65,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x69,  /* [436] */
    (xdc_Char)0x63,  /* [437] */
    (xdc_Char)0x65,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x72,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x71,  /* [442] */
    (xdc_Char)0x75,  /* [443] */
    (xdc_Char)0x69,  /* [444] */
    (xdc_Char)0x72,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x73,  /* [447] */
    (xdc_Char)0x20,  /* [448] */
    (xdc_Char)0x74,  /* [449] */
    (xdc_Char)0x68,  /* [450] */
    (xdc_Char)0x65,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x45,  /* [453] */
    (xdc_Char)0x6e,  /* [454] */
    (xdc_Char)0x68,  /* [455] */
    (xdc_Char)0x61,  /* [456] */
    (xdc_Char)0x6e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x65,  /* [459] */
    (xdc_Char)0x64,  /* [460] */
    (xdc_Char)0x20,  /* [461] */
    (xdc_Char)0x43,  /* [462] */
    (xdc_Char)0x6c,  /* [463] */
    (xdc_Char)0x6f,  /* [464] */
    (xdc_Char)0x63,  /* [465] */
    (xdc_Char)0x6b,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x4d,  /* [468] */
    (xdc_Char)0x6f,  /* [469] */
    (xdc_Char)0x64,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x2e,  /* [472] */
    (xdc_Char)0x0,  /* [473] */
    (xdc_Char)0x41,  /* [474] */
    (xdc_Char)0x5f,  /* [475] */
    (xdc_Char)0x6d,  /* [476] */
    (xdc_Char)0x75,  /* [477] */
    (xdc_Char)0x73,  /* [478] */
    (xdc_Char)0x74,  /* [479] */
    (xdc_Char)0x4e,  /* [480] */
    (xdc_Char)0x6f,  /* [481] */
    (xdc_Char)0x74,  /* [482] */
    (xdc_Char)0x55,  /* [483] */
    (xdc_Char)0x73,  /* [484] */
    (xdc_Char)0x65,  /* [485] */
    (xdc_Char)0x45,  /* [486] */
    (xdc_Char)0x6e,  /* [487] */
    (xdc_Char)0x68,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x63,  /* [491] */
    (xdc_Char)0x65,  /* [492] */
    (xdc_Char)0x64,  /* [493] */
    (xdc_Char)0x43,  /* [494] */
    (xdc_Char)0x6c,  /* [495] */
    (xdc_Char)0x6f,  /* [496] */
    (xdc_Char)0x63,  /* [497] */
    (xdc_Char)0x6b,  /* [498] */
    (xdc_Char)0x4d,  /* [499] */
    (xdc_Char)0x6f,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x65,  /* [502] */
    (xdc_Char)0x3a,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x54,  /* [505] */
    (xdc_Char)0x68,  /* [506] */
    (xdc_Char)0x69,  /* [507] */
    (xdc_Char)0x73,  /* [508] */
    (xdc_Char)0x20,  /* [509] */
    (xdc_Char)0x64,  /* [510] */
    (xdc_Char)0x65,  /* [511] */
    (xdc_Char)0x76,  /* [512] */
    (xdc_Char)0x69,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x20,  /* [516] */
    (xdc_Char)0x64,  /* [517] */
    (xdc_Char)0x6f,  /* [518] */
    (xdc_Char)0x65,  /* [519] */
    (xdc_Char)0x73,  /* [520] */
    (xdc_Char)0x20,  /* [521] */
    (xdc_Char)0x6e,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x74,  /* [524] */
    (xdc_Char)0x20,  /* [525] */
    (xdc_Char)0x73,  /* [526] */
    (xdc_Char)0x75,  /* [527] */
    (xdc_Char)0x70,  /* [528] */
    (xdc_Char)0x70,  /* [529] */
    (xdc_Char)0x6f,  /* [530] */
    (xdc_Char)0x72,  /* [531] */
    (xdc_Char)0x74,  /* [532] */
    (xdc_Char)0x20,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x68,  /* [535] */
    (xdc_Char)0x65,  /* [536] */
    (xdc_Char)0x20,  /* [537] */
    (xdc_Char)0x45,  /* [538] */
    (xdc_Char)0x6e,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x61,  /* [541] */
    (xdc_Char)0x6e,  /* [542] */
    (xdc_Char)0x63,  /* [543] */
    (xdc_Char)0x65,  /* [544] */
    (xdc_Char)0x64,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x43,  /* [547] */
    (xdc_Char)0x6c,  /* [548] */
    (xdc_Char)0x6f,  /* [549] */
    (xdc_Char)0x63,  /* [550] */
    (xdc_Char)0x6b,  /* [551] */
    (xdc_Char)0x20,  /* [552] */
    (xdc_Char)0x4d,  /* [553] */
    (xdc_Char)0x6f,  /* [554] */
    (xdc_Char)0x64,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x2e,  /* [557] */
    (xdc_Char)0x0,  /* [558] */
    (xdc_Char)0x41,  /* [559] */
    (xdc_Char)0x5f,  /* [560] */
    (xdc_Char)0x6e,  /* [561] */
    (xdc_Char)0x75,  /* [562] */
    (xdc_Char)0x6c,  /* [563] */
    (xdc_Char)0x6c,  /* [564] */
    (xdc_Char)0x50,  /* [565] */
    (xdc_Char)0x6f,  /* [566] */
    (xdc_Char)0x69,  /* [567] */
    (xdc_Char)0x6e,  /* [568] */
    (xdc_Char)0x74,  /* [569] */
    (xdc_Char)0x65,  /* [570] */
    (xdc_Char)0x72,  /* [571] */
    (xdc_Char)0x3a,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x50,  /* [574] */
    (xdc_Char)0x6f,  /* [575] */
    (xdc_Char)0x69,  /* [576] */
    (xdc_Char)0x6e,  /* [577] */
    (xdc_Char)0x74,  /* [578] */
    (xdc_Char)0x65,  /* [579] */
    (xdc_Char)0x72,  /* [580] */
    (xdc_Char)0x20,  /* [581] */
    (xdc_Char)0x69,  /* [582] */
    (xdc_Char)0x73,  /* [583] */
    (xdc_Char)0x20,  /* [584] */
    (xdc_Char)0x6e,  /* [585] */
    (xdc_Char)0x75,  /* [586] */
    (xdc_Char)0x6c,  /* [587] */
    (xdc_Char)0x6c,  /* [588] */
    (xdc_Char)0x0,  /* [589] */
    (xdc_Char)0x41,  /* [590] */
    (xdc_Char)0x5f,  /* [591] */
    (xdc_Char)0x69,  /* [592] */
    (xdc_Char)0x6e,  /* [593] */
    (xdc_Char)0x76,  /* [594] */
    (xdc_Char)0x61,  /* [595] */
    (xdc_Char)0x6c,  /* [596] */
    (xdc_Char)0x69,  /* [597] */
    (xdc_Char)0x64,  /* [598] */
    (xdc_Char)0x52,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x67,  /* [601] */
    (xdc_Char)0x69,  /* [602] */
    (xdc_Char)0x6f,  /* [603] */
    (xdc_Char)0x6e,  /* [604] */
    (xdc_Char)0x49,  /* [605] */
    (xdc_Char)0x64,  /* [606] */
    (xdc_Char)0x3a,  /* [607] */
    (xdc_Char)0x20,  /* [608] */
    (xdc_Char)0x4d,  /* [609] */
    (xdc_Char)0x50,  /* [610] */
    (xdc_Char)0x55,  /* [611] */
    (xdc_Char)0x20,  /* [612] */
    (xdc_Char)0x52,  /* [613] */
    (xdc_Char)0x65,  /* [614] */
    (xdc_Char)0x67,  /* [615] */
    (xdc_Char)0x69,  /* [616] */
    (xdc_Char)0x6f,  /* [617] */
    (xdc_Char)0x6e,  /* [618] */
    (xdc_Char)0x20,  /* [619] */
    (xdc_Char)0x6e,  /* [620] */
    (xdc_Char)0x75,  /* [621] */
    (xdc_Char)0x6d,  /* [622] */
    (xdc_Char)0x62,  /* [623] */
    (xdc_Char)0x65,  /* [624] */
    (xdc_Char)0x72,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x70,  /* [627] */
    (xdc_Char)0x61,  /* [628] */
    (xdc_Char)0x73,  /* [629] */
    (xdc_Char)0x73,  /* [630] */
    (xdc_Char)0x65,  /* [631] */
    (xdc_Char)0x64,  /* [632] */
    (xdc_Char)0x20,  /* [633] */
    (xdc_Char)0x69,  /* [634] */
    (xdc_Char)0x73,  /* [635] */
    (xdc_Char)0x20,  /* [636] */
    (xdc_Char)0x69,  /* [637] */
    (xdc_Char)0x6e,  /* [638] */
    (xdc_Char)0x76,  /* [639] */
    (xdc_Char)0x61,  /* [640] */
    (xdc_Char)0x6c,  /* [641] */
    (xdc_Char)0x69,  /* [642] */
    (xdc_Char)0x64,  /* [643] */
    (xdc_Char)0x2e,  /* [644] */
    (xdc_Char)0x0,  /* [645] */
    (xdc_Char)0x41,  /* [646] */
    (xdc_Char)0x5f,  /* [647] */
    (xdc_Char)0x63,  /* [648] */
    (xdc_Char)0x6c,  /* [649] */
    (xdc_Char)0x6f,  /* [650] */
    (xdc_Char)0x63,  /* [651] */
    (xdc_Char)0x6b,  /* [652] */
    (xdc_Char)0x44,  /* [653] */
    (xdc_Char)0x69,  /* [654] */
    (xdc_Char)0x73,  /* [655] */
    (xdc_Char)0x61,  /* [656] */
    (xdc_Char)0x62,  /* [657] */
    (xdc_Char)0x6c,  /* [658] */
    (xdc_Char)0x65,  /* [659] */
    (xdc_Char)0x64,  /* [660] */
    (xdc_Char)0x3a,  /* [661] */
    (xdc_Char)0x20,  /* [662] */
    (xdc_Char)0x43,  /* [663] */
    (xdc_Char)0x61,  /* [664] */
    (xdc_Char)0x6e,  /* [665] */
    (xdc_Char)0x6e,  /* [666] */
    (xdc_Char)0x6f,  /* [667] */
    (xdc_Char)0x74,  /* [668] */
    (xdc_Char)0x20,  /* [669] */
    (xdc_Char)0x63,  /* [670] */
    (xdc_Char)0x72,  /* [671] */
    (xdc_Char)0x65,  /* [672] */
    (xdc_Char)0x61,  /* [673] */
    (xdc_Char)0x74,  /* [674] */
    (xdc_Char)0x65,  /* [675] */
    (xdc_Char)0x20,  /* [676] */
    (xdc_Char)0x61,  /* [677] */
    (xdc_Char)0x20,  /* [678] */
    (xdc_Char)0x63,  /* [679] */
    (xdc_Char)0x6c,  /* [680] */
    (xdc_Char)0x6f,  /* [681] */
    (xdc_Char)0x63,  /* [682] */
    (xdc_Char)0x6b,  /* [683] */
    (xdc_Char)0x20,  /* [684] */
    (xdc_Char)0x69,  /* [685] */
    (xdc_Char)0x6e,  /* [686] */
    (xdc_Char)0x73,  /* [687] */
    (xdc_Char)0x74,  /* [688] */
    (xdc_Char)0x61,  /* [689] */
    (xdc_Char)0x6e,  /* [690] */
    (xdc_Char)0x63,  /* [691] */
    (xdc_Char)0x65,  /* [692] */
    (xdc_Char)0x20,  /* [693] */
    (xdc_Char)0x77,  /* [694] */
    (xdc_Char)0x68,  /* [695] */
    (xdc_Char)0x65,  /* [696] */
    (xdc_Char)0x6e,  /* [697] */
    (xdc_Char)0x20,  /* [698] */
    (xdc_Char)0x42,  /* [699] */
    (xdc_Char)0x49,  /* [700] */
    (xdc_Char)0x4f,  /* [701] */
    (xdc_Char)0x53,  /* [702] */
    (xdc_Char)0x2e,  /* [703] */
    (xdc_Char)0x63,  /* [704] */
    (xdc_Char)0x6c,  /* [705] */
    (xdc_Char)0x6f,  /* [706] */
    (xdc_Char)0x63,  /* [707] */
    (xdc_Char)0x6b,  /* [708] */
    (xdc_Char)0x45,  /* [709] */
    (xdc_Char)0x6e,  /* [710] */
    (xdc_Char)0x61,  /* [711] */
    (xdc_Char)0x62,  /* [712] */
    (xdc_Char)0x6c,  /* [713] */
    (xdc_Char)0x65,  /* [714] */
    (xdc_Char)0x64,  /* [715] */
    (xdc_Char)0x20,  /* [716] */
    (xdc_Char)0x69,  /* [717] */
    (xdc_Char)0x73,  /* [718] */
    (xdc_Char)0x20,  /* [719] */
    (xdc_Char)0x66,  /* [720] */
    (xdc_Char)0x61,  /* [721] */
    (xdc_Char)0x6c,  /* [722] */
    (xdc_Char)0x73,  /* [723] */
    (xdc_Char)0x65,  /* [724] */
    (xdc_Char)0x2e,  /* [725] */
    (xdc_Char)0x0,  /* [726] */
    (xdc_Char)0x41,  /* [727] */
    (xdc_Char)0x5f,  /* [728] */
    (xdc_Char)0x62,  /* [729] */
    (xdc_Char)0x61,  /* [730] */
    (xdc_Char)0x64,  /* [731] */
    (xdc_Char)0x54,  /* [732] */
    (xdc_Char)0x68,  /* [733] */
    (xdc_Char)0x72,  /* [734] */
    (xdc_Char)0x65,  /* [735] */
    (xdc_Char)0x61,  /* [736] */
    (xdc_Char)0x64,  /* [737] */
    (xdc_Char)0x54,  /* [738] */
    (xdc_Char)0x79,  /* [739] */
    (xdc_Char)0x70,  /* [740] */
    (xdc_Char)0x65,  /* [741] */
    (xdc_Char)0x3a,  /* [742] */
    (xdc_Char)0x20,  /* [743] */
    (xdc_Char)0x43,  /* [744] */
    (xdc_Char)0x61,  /* [745] */
    (xdc_Char)0x6e,  /* [746] */
    (xdc_Char)0x6e,  /* [747] */
    (xdc_Char)0x6f,  /* [748] */
    (xdc_Char)0x74,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x63,  /* [751] */
    (xdc_Char)0x72,  /* [752] */
    (xdc_Char)0x65,  /* [753] */
    (xdc_Char)0x61,  /* [754] */
    (xdc_Char)0x74,  /* [755] */
    (xdc_Char)0x65,  /* [756] */
    (xdc_Char)0x2f,  /* [757] */
    (xdc_Char)0x64,  /* [758] */
    (xdc_Char)0x65,  /* [759] */
    (xdc_Char)0x6c,  /* [760] */
    (xdc_Char)0x65,  /* [761] */
    (xdc_Char)0x74,  /* [762] */
    (xdc_Char)0x65,  /* [763] */
    (xdc_Char)0x20,  /* [764] */
    (xdc_Char)0x61,  /* [765] */
    (xdc_Char)0x20,  /* [766] */
    (xdc_Char)0x43,  /* [767] */
    (xdc_Char)0x6c,  /* [768] */
    (xdc_Char)0x6f,  /* [769] */
    (xdc_Char)0x63,  /* [770] */
    (xdc_Char)0x6b,  /* [771] */
    (xdc_Char)0x20,  /* [772] */
    (xdc_Char)0x66,  /* [773] */
    (xdc_Char)0x72,  /* [774] */
    (xdc_Char)0x6f,  /* [775] */
    (xdc_Char)0x6d,  /* [776] */
    (xdc_Char)0x20,  /* [777] */
    (xdc_Char)0x48,  /* [778] */
    (xdc_Char)0x77,  /* [779] */
    (xdc_Char)0x69,  /* [780] */
    (xdc_Char)0x20,  /* [781] */
    (xdc_Char)0x6f,  /* [782] */
    (xdc_Char)0x72,  /* [783] */
    (xdc_Char)0x20,  /* [784] */
    (xdc_Char)0x53,  /* [785] */
    (xdc_Char)0x77,  /* [786] */
    (xdc_Char)0x69,  /* [787] */
    (xdc_Char)0x20,  /* [788] */
    (xdc_Char)0x74,  /* [789] */
    (xdc_Char)0x68,  /* [790] */
    (xdc_Char)0x72,  /* [791] */
    (xdc_Char)0x65,  /* [792] */
    (xdc_Char)0x61,  /* [793] */
    (xdc_Char)0x64,  /* [794] */
    (xdc_Char)0x2e,  /* [795] */
    (xdc_Char)0x0,  /* [796] */
    (xdc_Char)0x41,  /* [797] */
    (xdc_Char)0x5f,  /* [798] */
    (xdc_Char)0x6e,  /* [799] */
    (xdc_Char)0x75,  /* [800] */
    (xdc_Char)0x6c,  /* [801] */
    (xdc_Char)0x6c,  /* [802] */
    (xdc_Char)0x45,  /* [803] */
    (xdc_Char)0x76,  /* [804] */
    (xdc_Char)0x65,  /* [805] */
    (xdc_Char)0x6e,  /* [806] */
    (xdc_Char)0x74,  /* [807] */
    (xdc_Char)0x4d,  /* [808] */
    (xdc_Char)0x61,  /* [809] */
    (xdc_Char)0x73,  /* [810] */
    (xdc_Char)0x6b,  /* [811] */
    (xdc_Char)0x73,  /* [812] */
    (xdc_Char)0x3a,  /* [813] */
    (xdc_Char)0x20,  /* [814] */
    (xdc_Char)0x6f,  /* [815] */
    (xdc_Char)0x72,  /* [816] */
    (xdc_Char)0x4d,  /* [817] */
    (xdc_Char)0x61,  /* [818] */
    (xdc_Char)0x73,  /* [819] */
    (xdc_Char)0x6b,  /* [820] */
    (xdc_Char)0x20,  /* [821] */
    (xdc_Char)0x61,  /* [822] */
    (xdc_Char)0x6e,  /* [823] */
    (xdc_Char)0x64,  /* [824] */
    (xdc_Char)0x20,  /* [825] */
    (xdc_Char)0x61,  /* [826] */
    (xdc_Char)0x6e,  /* [827] */
    (xdc_Char)0x64,  /* [828] */
    (xdc_Char)0x4d,  /* [829] */
    (xdc_Char)0x61,  /* [830] */
    (xdc_Char)0x73,  /* [831] */
    (xdc_Char)0x6b,  /* [832] */
    (xdc_Char)0x20,  /* [833] */
    (xdc_Char)0x61,  /* [834] */
    (xdc_Char)0x72,  /* [835] */
    (xdc_Char)0x65,  /* [836] */
    (xdc_Char)0x20,  /* [837] */
    (xdc_Char)0x6e,  /* [838] */
    (xdc_Char)0x75,  /* [839] */
    (xdc_Char)0x6c,  /* [840] */
    (xdc_Char)0x6c,  /* [841] */
    (xdc_Char)0x2e,  /* [842] */
    (xdc_Char)0x0,  /* [843] */
    (xdc_Char)0x41,  /* [844] */
    (xdc_Char)0x5f,  /* [845] */
    (xdc_Char)0x6e,  /* [846] */
    (xdc_Char)0x75,  /* [847] */
    (xdc_Char)0x6c,  /* [848] */
    (xdc_Char)0x6c,  /* [849] */
    (xdc_Char)0x45,  /* [850] */
    (xdc_Char)0x76,  /* [851] */
    (xdc_Char)0x65,  /* [852] */
    (xdc_Char)0x6e,  /* [853] */
    (xdc_Char)0x74,  /* [854] */
    (xdc_Char)0x49,  /* [855] */
    (xdc_Char)0x64,  /* [856] */
    (xdc_Char)0x3a,  /* [857] */
    (xdc_Char)0x20,  /* [858] */
    (xdc_Char)0x70,  /* [859] */
    (xdc_Char)0x6f,  /* [860] */
    (xdc_Char)0x73,  /* [861] */
    (xdc_Char)0x74,  /* [862] */
    (xdc_Char)0x65,  /* [863] */
    (xdc_Char)0x64,  /* [864] */
    (xdc_Char)0x20,  /* [865] */
    (xdc_Char)0x65,  /* [866] */
    (xdc_Char)0x76,  /* [867] */
    (xdc_Char)0x65,  /* [868] */
    (xdc_Char)0x6e,  /* [869] */
    (xdc_Char)0x74,  /* [870] */
    (xdc_Char)0x49,  /* [871] */
    (xdc_Char)0x64,  /* [872] */
    (xdc_Char)0x20,  /* [873] */
    (xdc_Char)0x69,  /* [874] */
    (xdc_Char)0x73,  /* [875] */
    (xdc_Char)0x20,  /* [876] */
    (xdc_Char)0x6e,  /* [877] */
    (xdc_Char)0x75,  /* [878] */
    (xdc_Char)0x6c,  /* [879] */
    (xdc_Char)0x6c,  /* [880] */
    (xdc_Char)0x2e,  /* [881] */
    (xdc_Char)0x0,  /* [882] */
    (xdc_Char)0x41,  /* [883] */
    (xdc_Char)0x5f,  /* [884] */
    (xdc_Char)0x65,  /* [885] */
    (xdc_Char)0x76,  /* [886] */
    (xdc_Char)0x65,  /* [887] */
    (xdc_Char)0x6e,  /* [888] */
    (xdc_Char)0x74,  /* [889] */
    (xdc_Char)0x49,  /* [890] */
    (xdc_Char)0x6e,  /* [891] */
    (xdc_Char)0x55,  /* [892] */
    (xdc_Char)0x73,  /* [893] */
    (xdc_Char)0x65,  /* [894] */
    (xdc_Char)0x3a,  /* [895] */
    (xdc_Char)0x20,  /* [896] */
    (xdc_Char)0x45,  /* [897] */
    (xdc_Char)0x76,  /* [898] */
    (xdc_Char)0x65,  /* [899] */
    (xdc_Char)0x6e,  /* [900] */
    (xdc_Char)0x74,  /* [901] */
    (xdc_Char)0x20,  /* [902] */
    (xdc_Char)0x6f,  /* [903] */
    (xdc_Char)0x62,  /* [904] */
    (xdc_Char)0x6a,  /* [905] */
    (xdc_Char)0x65,  /* [906] */
    (xdc_Char)0x63,  /* [907] */
    (xdc_Char)0x74,  /* [908] */
    (xdc_Char)0x20,  /* [909] */
    (xdc_Char)0x61,  /* [910] */
    (xdc_Char)0x6c,  /* [911] */
    (xdc_Char)0x72,  /* [912] */
    (xdc_Char)0x65,  /* [913] */
    (xdc_Char)0x61,  /* [914] */
    (xdc_Char)0x64,  /* [915] */
    (xdc_Char)0x79,  /* [916] */
    (xdc_Char)0x20,  /* [917] */
    (xdc_Char)0x69,  /* [918] */
    (xdc_Char)0x6e,  /* [919] */
    (xdc_Char)0x20,  /* [920] */
    (xdc_Char)0x75,  /* [921] */
    (xdc_Char)0x73,  /* [922] */
    (xdc_Char)0x65,  /* [923] */
    (xdc_Char)0x2e,  /* [924] */
    (xdc_Char)0x0,  /* [925] */
    (xdc_Char)0x41,  /* [926] */
    (xdc_Char)0x5f,  /* [927] */
    (xdc_Char)0x62,  /* [928] */
    (xdc_Char)0x61,  /* [929] */
    (xdc_Char)0x64,  /* [930] */
    (xdc_Char)0x43,  /* [931] */
    (xdc_Char)0x6f,  /* [932] */
    (xdc_Char)0x6e,  /* [933] */
    (xdc_Char)0x74,  /* [934] */
    (xdc_Char)0x65,  /* [935] */
    (xdc_Char)0x78,  /* [936] */
    (xdc_Char)0x74,  /* [937] */
    (xdc_Char)0x3a,  /* [938] */
    (xdc_Char)0x20,  /* [939] */
    (xdc_Char)0x62,  /* [940] */
    (xdc_Char)0x61,  /* [941] */
    (xdc_Char)0x64,  /* [942] */
    (xdc_Char)0x20,  /* [943] */
    (xdc_Char)0x63,  /* [944] */
    (xdc_Char)0x61,  /* [945] */
    (xdc_Char)0x6c,  /* [946] */
    (xdc_Char)0x6c,  /* [947] */
    (xdc_Char)0x69,  /* [948] */
    (xdc_Char)0x6e,  /* [949] */
    (xdc_Char)0x67,  /* [950] */
    (xdc_Char)0x20,  /* [951] */
    (xdc_Char)0x63,  /* [952] */
    (xdc_Char)0x6f,  /* [953] */
    (xdc_Char)0x6e,  /* [954] */
    (xdc_Char)0x74,  /* [955] */
    (xdc_Char)0x65,  /* [956] */
    (xdc_Char)0x78,  /* [957] */
    (xdc_Char)0x74,  /* [958] */
    (xdc_Char)0x2e,  /* [959] */
    (xdc_Char)0x20,  /* [960] */
    (xdc_Char)0x4d,  /* [961] */
    (xdc_Char)0x75,  /* [962] */
    (xdc_Char)0x73,  /* [963] */
    (xdc_Char)0x74,  /* [964] */
    (xdc_Char)0x20,  /* [965] */
    (xdc_Char)0x62,  /* [966] */
    (xdc_Char)0x65,  /* [967] */
    (xdc_Char)0x20,  /* [968] */
    (xdc_Char)0x63,  /* [969] */
    (xdc_Char)0x61,  /* [970] */
    (xdc_Char)0x6c,  /* [971] */
    (xdc_Char)0x6c,  /* [972] */
    (xdc_Char)0x65,  /* [973] */
    (xdc_Char)0x64,  /* [974] */
    (xdc_Char)0x20,  /* [975] */
    (xdc_Char)0x66,  /* [976] */
    (xdc_Char)0x72,  /* [977] */
    (xdc_Char)0x6f,  /* [978] */
    (xdc_Char)0x6d,  /* [979] */
    (xdc_Char)0x20,  /* [980] */
    (xdc_Char)0x61,  /* [981] */
    (xdc_Char)0x20,  /* [982] */
    (xdc_Char)0x54,  /* [983] */
    (xdc_Char)0x61,  /* [984] */
    (xdc_Char)0x73,  /* [985] */
    (xdc_Char)0x6b,  /* [986] */
    (xdc_Char)0x2e,  /* [987] */
    (xdc_Char)0x0,  /* [988] */
    (xdc_Char)0x41,  /* [989] */
    (xdc_Char)0x5f,  /* [990] */
    (xdc_Char)0x70,  /* [991] */
    (xdc_Char)0x65,  /* [992] */
    (xdc_Char)0x6e,  /* [993] */
    (xdc_Char)0x64,  /* [994] */
    (xdc_Char)0x54,  /* [995] */
    (xdc_Char)0x61,  /* [996] */
    (xdc_Char)0x73,  /* [997] */
    (xdc_Char)0x6b,  /* [998] */
    (xdc_Char)0x44,  /* [999] */
    (xdc_Char)0x69,  /* [1000] */
    (xdc_Char)0x73,  /* [1001] */
    (xdc_Char)0x61,  /* [1002] */
    (xdc_Char)0x62,  /* [1003] */
    (xdc_Char)0x6c,  /* [1004] */
    (xdc_Char)0x65,  /* [1005] */
    (xdc_Char)0x64,  /* [1006] */
    (xdc_Char)0x3a,  /* [1007] */
    (xdc_Char)0x20,  /* [1008] */
    (xdc_Char)0x43,  /* [1009] */
    (xdc_Char)0x61,  /* [1010] */
    (xdc_Char)0x6e,  /* [1011] */
    (xdc_Char)0x6e,  /* [1012] */
    (xdc_Char)0x6f,  /* [1013] */
    (xdc_Char)0x74,  /* [1014] */
    (xdc_Char)0x20,  /* [1015] */
    (xdc_Char)0x63,  /* [1016] */
    (xdc_Char)0x61,  /* [1017] */
    (xdc_Char)0x6c,  /* [1018] */
    (xdc_Char)0x6c,  /* [1019] */
    (xdc_Char)0x20,  /* [1020] */
    (xdc_Char)0x45,  /* [1021] */
    (xdc_Char)0x76,  /* [1022] */
    (xdc_Char)0x65,  /* [1023] */
    (xdc_Char)0x6e,  /* [1024] */
    (xdc_Char)0x74,  /* [1025] */
    (xdc_Char)0x5f,  /* [1026] */
    (xdc_Char)0x70,  /* [1027] */
    (xdc_Char)0x65,  /* [1028] */
    (xdc_Char)0x6e,  /* [1029] */
    (xdc_Char)0x64,  /* [1030] */
    (xdc_Char)0x28,  /* [1031] */
    (xdc_Char)0x29,  /* [1032] */
    (xdc_Char)0x20,  /* [1033] */
    (xdc_Char)0x77,  /* [1034] */
    (xdc_Char)0x68,  /* [1035] */
    (xdc_Char)0x69,  /* [1036] */
    (xdc_Char)0x6c,  /* [1037] */
    (xdc_Char)0x65,  /* [1038] */
    (xdc_Char)0x20,  /* [1039] */
    (xdc_Char)0x74,  /* [1040] */
    (xdc_Char)0x68,  /* [1041] */
    (xdc_Char)0x65,  /* [1042] */
    (xdc_Char)0x20,  /* [1043] */
    (xdc_Char)0x54,  /* [1044] */
    (xdc_Char)0x61,  /* [1045] */
    (xdc_Char)0x73,  /* [1046] */
    (xdc_Char)0x6b,  /* [1047] */
    (xdc_Char)0x20,  /* [1048] */
    (xdc_Char)0x6f,  /* [1049] */
    (xdc_Char)0x72,  /* [1050] */
    (xdc_Char)0x20,  /* [1051] */
    (xdc_Char)0x53,  /* [1052] */
    (xdc_Char)0x77,  /* [1053] */
    (xdc_Char)0x69,  /* [1054] */
    (xdc_Char)0x20,  /* [1055] */
    (xdc_Char)0x73,  /* [1056] */
    (xdc_Char)0x63,  /* [1057] */
    (xdc_Char)0x68,  /* [1058] */
    (xdc_Char)0x65,  /* [1059] */
    (xdc_Char)0x64,  /* [1060] */
    (xdc_Char)0x75,  /* [1061] */
    (xdc_Char)0x6c,  /* [1062] */
    (xdc_Char)0x65,  /* [1063] */
    (xdc_Char)0x72,  /* [1064] */
    (xdc_Char)0x20,  /* [1065] */
    (xdc_Char)0x69,  /* [1066] */
    (xdc_Char)0x73,  /* [1067] */
    (xdc_Char)0x20,  /* [1068] */
    (xdc_Char)0x64,  /* [1069] */
    (xdc_Char)0x69,  /* [1070] */
    (xdc_Char)0x73,  /* [1071] */
    (xdc_Char)0x61,  /* [1072] */
    (xdc_Char)0x62,  /* [1073] */
    (xdc_Char)0x6c,  /* [1074] */
    (xdc_Char)0x65,  /* [1075] */
    (xdc_Char)0x64,  /* [1076] */
    (xdc_Char)0x2e,  /* [1077] */
    (xdc_Char)0x0,  /* [1078] */
    (xdc_Char)0x4d,  /* [1079] */
    (xdc_Char)0x61,  /* [1080] */
    (xdc_Char)0x69,  /* [1081] */
    (xdc_Char)0x6c,  /* [1082] */
    (xdc_Char)0x62,  /* [1083] */
    (xdc_Char)0x6f,  /* [1084] */
    (xdc_Char)0x78,  /* [1085] */
    (xdc_Char)0x5f,  /* [1086] */
    (xdc_Char)0x63,  /* [1087] */
    (xdc_Char)0x72,  /* [1088] */
    (xdc_Char)0x65,  /* [1089] */
    (xdc_Char)0x61,  /* [1090] */
    (xdc_Char)0x74,  /* [1091] */
    (xdc_Char)0x65,  /* [1092] */
    (xdc_Char)0x27,  /* [1093] */
    (xdc_Char)0x73,  /* [1094] */
    (xdc_Char)0x20,  /* [1095] */
    (xdc_Char)0x62,  /* [1096] */
    (xdc_Char)0x75,  /* [1097] */
    (xdc_Char)0x66,  /* [1098] */
    (xdc_Char)0x53,  /* [1099] */
    (xdc_Char)0x69,  /* [1100] */
    (xdc_Char)0x7a,  /* [1101] */
    (xdc_Char)0x65,  /* [1102] */
    (xdc_Char)0x20,  /* [1103] */
    (xdc_Char)0x70,  /* [1104] */
    (xdc_Char)0x61,  /* [1105] */
    (xdc_Char)0x72,  /* [1106] */
    (xdc_Char)0x61,  /* [1107] */
    (xdc_Char)0x6d,  /* [1108] */
    (xdc_Char)0x65,  /* [1109] */
    (xdc_Char)0x74,  /* [1110] */
    (xdc_Char)0x65,  /* [1111] */
    (xdc_Char)0x72,  /* [1112] */
    (xdc_Char)0x20,  /* [1113] */
    (xdc_Char)0x69,  /* [1114] */
    (xdc_Char)0x73,  /* [1115] */
    (xdc_Char)0x20,  /* [1116] */
    (xdc_Char)0x69,  /* [1117] */
    (xdc_Char)0x6e,  /* [1118] */
    (xdc_Char)0x76,  /* [1119] */
    (xdc_Char)0x61,  /* [1120] */
    (xdc_Char)0x6c,  /* [1121] */
    (xdc_Char)0x69,  /* [1122] */
    (xdc_Char)0x64,  /* [1123] */
    (xdc_Char)0x20,  /* [1124] */
    (xdc_Char)0x28,  /* [1125] */
    (xdc_Char)0x74,  /* [1126] */
    (xdc_Char)0x6f,  /* [1127] */
    (xdc_Char)0x6f,  /* [1128] */
    (xdc_Char)0x20,  /* [1129] */
    (xdc_Char)0x73,  /* [1130] */
    (xdc_Char)0x6d,  /* [1131] */
    (xdc_Char)0x61,  /* [1132] */
    (xdc_Char)0x6c,  /* [1133] */
    (xdc_Char)0x6c,  /* [1134] */
    (xdc_Char)0x29,  /* [1135] */
    (xdc_Char)0x0,  /* [1136] */
    (xdc_Char)0x41,  /* [1137] */
    (xdc_Char)0x5f,  /* [1138] */
    (xdc_Char)0x6e,  /* [1139] */
    (xdc_Char)0x6f,  /* [1140] */
    (xdc_Char)0x45,  /* [1141] */
    (xdc_Char)0x76,  /* [1142] */
    (xdc_Char)0x65,  /* [1143] */
    (xdc_Char)0x6e,  /* [1144] */
    (xdc_Char)0x74,  /* [1145] */
    (xdc_Char)0x73,  /* [1146] */
    (xdc_Char)0x3a,  /* [1147] */
    (xdc_Char)0x20,  /* [1148] */
    (xdc_Char)0x54,  /* [1149] */
    (xdc_Char)0x68,  /* [1150] */
    (xdc_Char)0x65,  /* [1151] */
    (xdc_Char)0x20,  /* [1152] */
    (xdc_Char)0x45,  /* [1153] */
    (xdc_Char)0x76,  /* [1154] */
    (xdc_Char)0x65,  /* [1155] */
    (xdc_Char)0x6e,  /* [1156] */
    (xdc_Char)0x74,  /* [1157] */
    (xdc_Char)0x2e,  /* [1158] */
    (xdc_Char)0x73,  /* [1159] */
    (xdc_Char)0x75,  /* [1160] */
    (xdc_Char)0x70,  /* [1161] */
    (xdc_Char)0x70,  /* [1162] */
    (xdc_Char)0x6f,  /* [1163] */
    (xdc_Char)0x72,  /* [1164] */
    (xdc_Char)0x74,  /* [1165] */
    (xdc_Char)0x73,  /* [1166] */
    (xdc_Char)0x45,  /* [1167] */
    (xdc_Char)0x76,  /* [1168] */
    (xdc_Char)0x65,  /* [1169] */
    (xdc_Char)0x6e,  /* [1170] */
    (xdc_Char)0x74,  /* [1171] */
    (xdc_Char)0x73,  /* [1172] */
    (xdc_Char)0x20,  /* [1173] */
    (xdc_Char)0x66,  /* [1174] */
    (xdc_Char)0x6c,  /* [1175] */
    (xdc_Char)0x61,  /* [1176] */
    (xdc_Char)0x67,  /* [1177] */
    (xdc_Char)0x20,  /* [1178] */
    (xdc_Char)0x69,  /* [1179] */
    (xdc_Char)0x73,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x64,  /* [1182] */
    (xdc_Char)0x69,  /* [1183] */
    (xdc_Char)0x73,  /* [1184] */
    (xdc_Char)0x61,  /* [1185] */
    (xdc_Char)0x62,  /* [1186] */
    (xdc_Char)0x6c,  /* [1187] */
    (xdc_Char)0x65,  /* [1188] */
    (xdc_Char)0x64,  /* [1189] */
    (xdc_Char)0x2e,  /* [1190] */
    (xdc_Char)0x0,  /* [1191] */
    (xdc_Char)0x41,  /* [1192] */
    (xdc_Char)0x5f,  /* [1193] */
    (xdc_Char)0x69,  /* [1194] */
    (xdc_Char)0x6e,  /* [1195] */
    (xdc_Char)0x76,  /* [1196] */
    (xdc_Char)0x54,  /* [1197] */
    (xdc_Char)0x69,  /* [1198] */
    (xdc_Char)0x6d,  /* [1199] */
    (xdc_Char)0x65,  /* [1200] */
    (xdc_Char)0x6f,  /* [1201] */
    (xdc_Char)0x75,  /* [1202] */
    (xdc_Char)0x74,  /* [1203] */
    (xdc_Char)0x3a,  /* [1204] */
    (xdc_Char)0x20,  /* [1205] */
    (xdc_Char)0x43,  /* [1206] */
    (xdc_Char)0x61,  /* [1207] */
    (xdc_Char)0x6e,  /* [1208] */
    (xdc_Char)0x27,  /* [1209] */
    (xdc_Char)0x74,  /* [1210] */
    (xdc_Char)0x20,  /* [1211] */
    (xdc_Char)0x75,  /* [1212] */
    (xdc_Char)0x73,  /* [1213] */
    (xdc_Char)0x65,  /* [1214] */
    (xdc_Char)0x20,  /* [1215] */
    (xdc_Char)0x42,  /* [1216] */
    (xdc_Char)0x49,  /* [1217] */
    (xdc_Char)0x4f,  /* [1218] */
    (xdc_Char)0x53,  /* [1219] */
    (xdc_Char)0x5f,  /* [1220] */
    (xdc_Char)0x45,  /* [1221] */
    (xdc_Char)0x56,  /* [1222] */
    (xdc_Char)0x45,  /* [1223] */
    (xdc_Char)0x4e,  /* [1224] */
    (xdc_Char)0x54,  /* [1225] */
    (xdc_Char)0x5f,  /* [1226] */
    (xdc_Char)0x41,  /* [1227] */
    (xdc_Char)0x43,  /* [1228] */
    (xdc_Char)0x51,  /* [1229] */
    (xdc_Char)0x55,  /* [1230] */
    (xdc_Char)0x49,  /* [1231] */
    (xdc_Char)0x52,  /* [1232] */
    (xdc_Char)0x45,  /* [1233] */
    (xdc_Char)0x44,  /* [1234] */
    (xdc_Char)0x20,  /* [1235] */
    (xdc_Char)0x77,  /* [1236] */
    (xdc_Char)0x69,  /* [1237] */
    (xdc_Char)0x74,  /* [1238] */
    (xdc_Char)0x68,  /* [1239] */
    (xdc_Char)0x20,  /* [1240] */
    (xdc_Char)0x74,  /* [1241] */
    (xdc_Char)0x68,  /* [1242] */
    (xdc_Char)0x69,  /* [1243] */
    (xdc_Char)0x73,  /* [1244] */
    (xdc_Char)0x20,  /* [1245] */
    (xdc_Char)0x53,  /* [1246] */
    (xdc_Char)0x65,  /* [1247] */
    (xdc_Char)0x6d,  /* [1248] */
    (xdc_Char)0x61,  /* [1249] */
    (xdc_Char)0x70,  /* [1250] */
    (xdc_Char)0x68,  /* [1251] */
    (xdc_Char)0x6f,  /* [1252] */
    (xdc_Char)0x72,  /* [1253] */
    (xdc_Char)0x65,  /* [1254] */
    (xdc_Char)0x2e,  /* [1255] */
    (xdc_Char)0x0,  /* [1256] */
    (xdc_Char)0x41,  /* [1257] */
    (xdc_Char)0x5f,  /* [1258] */
    (xdc_Char)0x6f,  /* [1259] */
    (xdc_Char)0x76,  /* [1260] */
    (xdc_Char)0x65,  /* [1261] */
    (xdc_Char)0x72,  /* [1262] */
    (xdc_Char)0x66,  /* [1263] */
    (xdc_Char)0x6c,  /* [1264] */
    (xdc_Char)0x6f,  /* [1265] */
    (xdc_Char)0x77,  /* [1266] */
    (xdc_Char)0x3a,  /* [1267] */
    (xdc_Char)0x20,  /* [1268] */
    (xdc_Char)0x43,  /* [1269] */
    (xdc_Char)0x6f,  /* [1270] */
    (xdc_Char)0x75,  /* [1271] */
    (xdc_Char)0x6e,  /* [1272] */
    (xdc_Char)0x74,  /* [1273] */
    (xdc_Char)0x20,  /* [1274] */
    (xdc_Char)0x68,  /* [1275] */
    (xdc_Char)0x61,  /* [1276] */
    (xdc_Char)0x73,  /* [1277] */
    (xdc_Char)0x20,  /* [1278] */
    (xdc_Char)0x65,  /* [1279] */
    (xdc_Char)0x78,  /* [1280] */
    (xdc_Char)0x63,  /* [1281] */
    (xdc_Char)0x65,  /* [1282] */
    (xdc_Char)0x65,  /* [1283] */
    (xdc_Char)0x64,  /* [1284] */
    (xdc_Char)0x65,  /* [1285] */
    (xdc_Char)0x64,  /* [1286] */
    (xdc_Char)0x20,  /* [1287] */
    (xdc_Char)0x36,  /* [1288] */
    (xdc_Char)0x35,  /* [1289] */
    (xdc_Char)0x35,  /* [1290] */
    (xdc_Char)0x33,  /* [1291] */
    (xdc_Char)0x35,  /* [1292] */
    (xdc_Char)0x20,  /* [1293] */
    (xdc_Char)0x61,  /* [1294] */
    (xdc_Char)0x6e,  /* [1295] */
    (xdc_Char)0x64,  /* [1296] */
    (xdc_Char)0x20,  /* [1297] */
    (xdc_Char)0x72,  /* [1298] */
    (xdc_Char)0x6f,  /* [1299] */
    (xdc_Char)0x6c,  /* [1300] */
    (xdc_Char)0x6c,  /* [1301] */
    (xdc_Char)0x65,  /* [1302] */
    (xdc_Char)0x64,  /* [1303] */
    (xdc_Char)0x20,  /* [1304] */
    (xdc_Char)0x6f,  /* [1305] */
    (xdc_Char)0x76,  /* [1306] */
    (xdc_Char)0x65,  /* [1307] */
    (xdc_Char)0x72,  /* [1308] */
    (xdc_Char)0x2e,  /* [1309] */
    (xdc_Char)0x0,  /* [1310] */
    (xdc_Char)0x41,  /* [1311] */
    (xdc_Char)0x5f,  /* [1312] */
    (xdc_Char)0x70,  /* [1313] */
    (xdc_Char)0x65,  /* [1314] */
    (xdc_Char)0x6e,  /* [1315] */
    (xdc_Char)0x64,  /* [1316] */
    (xdc_Char)0x54,  /* [1317] */
    (xdc_Char)0x61,  /* [1318] */
    (xdc_Char)0x73,  /* [1319] */
    (xdc_Char)0x6b,  /* [1320] */
    (xdc_Char)0x44,  /* [1321] */
    (xdc_Char)0x69,  /* [1322] */
    (xdc_Char)0x73,  /* [1323] */
    (xdc_Char)0x61,  /* [1324] */
    (xdc_Char)0x62,  /* [1325] */
    (xdc_Char)0x6c,  /* [1326] */
    (xdc_Char)0x65,  /* [1327] */
    (xdc_Char)0x64,  /* [1328] */
    (xdc_Char)0x3a,  /* [1329] */
    (xdc_Char)0x20,  /* [1330] */
    (xdc_Char)0x43,  /* [1331] */
    (xdc_Char)0x61,  /* [1332] */
    (xdc_Char)0x6e,  /* [1333] */
    (xdc_Char)0x6e,  /* [1334] */
    (xdc_Char)0x6f,  /* [1335] */
    (xdc_Char)0x74,  /* [1336] */
    (xdc_Char)0x20,  /* [1337] */
    (xdc_Char)0x63,  /* [1338] */
    (xdc_Char)0x61,  /* [1339] */
    (xdc_Char)0x6c,  /* [1340] */
    (xdc_Char)0x6c,  /* [1341] */
    (xdc_Char)0x20,  /* [1342] */
    (xdc_Char)0x53,  /* [1343] */
    (xdc_Char)0x65,  /* [1344] */
    (xdc_Char)0x6d,  /* [1345] */
    (xdc_Char)0x61,  /* [1346] */
    (xdc_Char)0x70,  /* [1347] */
    (xdc_Char)0x68,  /* [1348] */
    (xdc_Char)0x6f,  /* [1349] */
    (xdc_Char)0x72,  /* [1350] */
    (xdc_Char)0x65,  /* [1351] */
    (xdc_Char)0x5f,  /* [1352] */
    (xdc_Char)0x70,  /* [1353] */
    (xdc_Char)0x65,  /* [1354] */
    (xdc_Char)0x6e,  /* [1355] */
    (xdc_Char)0x64,  /* [1356] */
    (xdc_Char)0x28,  /* [1357] */
    (xdc_Char)0x29,  /* [1358] */
    (xdc_Char)0x20,  /* [1359] */
    (xdc_Char)0x77,  /* [1360] */
    (xdc_Char)0x68,  /* [1361] */
    (xdc_Char)0x69,  /* [1362] */
    (xdc_Char)0x6c,  /* [1363] */
    (xdc_Char)0x65,  /* [1364] */
    (xdc_Char)0x20,  /* [1365] */
    (xdc_Char)0x74,  /* [1366] */
    (xdc_Char)0x68,  /* [1367] */
    (xdc_Char)0x65,  /* [1368] */
    (xdc_Char)0x20,  /* [1369] */
    (xdc_Char)0x54,  /* [1370] */
    (xdc_Char)0x61,  /* [1371] */
    (xdc_Char)0x73,  /* [1372] */
    (xdc_Char)0x6b,  /* [1373] */
    (xdc_Char)0x20,  /* [1374] */
    (xdc_Char)0x6f,  /* [1375] */
    (xdc_Char)0x72,  /* [1376] */
    (xdc_Char)0x20,  /* [1377] */
    (xdc_Char)0x53,  /* [1378] */
    (xdc_Char)0x77,  /* [1379] */
    (xdc_Char)0x69,  /* [1380] */
    (xdc_Char)0x20,  /* [1381] */
    (xdc_Char)0x73,  /* [1382] */
    (xdc_Char)0x63,  /* [1383] */
    (xdc_Char)0x68,  /* [1384] */
    (xdc_Char)0x65,  /* [1385] */
    (xdc_Char)0x64,  /* [1386] */
    (xdc_Char)0x75,  /* [1387] */
    (xdc_Char)0x6c,  /* [1388] */
    (xdc_Char)0x65,  /* [1389] */
    (xdc_Char)0x72,  /* [1390] */
    (xdc_Char)0x20,  /* [1391] */
    (xdc_Char)0x69,  /* [1392] */
    (xdc_Char)0x73,  /* [1393] */
    (xdc_Char)0x20,  /* [1394] */
    (xdc_Char)0x64,  /* [1395] */
    (xdc_Char)0x69,  /* [1396] */
    (xdc_Char)0x73,  /* [1397] */
    (xdc_Char)0x61,  /* [1398] */
    (xdc_Char)0x62,  /* [1399] */
    (xdc_Char)0x6c,  /* [1400] */
    (xdc_Char)0x65,  /* [1401] */
    (xdc_Char)0x64,  /* [1402] */
    (xdc_Char)0x2e,  /* [1403] */
    (xdc_Char)0x0,  /* [1404] */
    (xdc_Char)0x41,  /* [1405] */
    (xdc_Char)0x5f,  /* [1406] */
    (xdc_Char)0x73,  /* [1407] */
    (xdc_Char)0x77,  /* [1408] */
    (xdc_Char)0x69,  /* [1409] */
    (xdc_Char)0x44,  /* [1410] */
    (xdc_Char)0x69,  /* [1411] */
    (xdc_Char)0x73,  /* [1412] */
    (xdc_Char)0x61,  /* [1413] */
    (xdc_Char)0x62,  /* [1414] */
    (xdc_Char)0x6c,  /* [1415] */
    (xdc_Char)0x65,  /* [1416] */
    (xdc_Char)0x64,  /* [1417] */
    (xdc_Char)0x3a,  /* [1418] */
    (xdc_Char)0x20,  /* [1419] */
    (xdc_Char)0x43,  /* [1420] */
    (xdc_Char)0x61,  /* [1421] */
    (xdc_Char)0x6e,  /* [1422] */
    (xdc_Char)0x6e,  /* [1423] */
    (xdc_Char)0x6f,  /* [1424] */
    (xdc_Char)0x74,  /* [1425] */
    (xdc_Char)0x20,  /* [1426] */
    (xdc_Char)0x63,  /* [1427] */
    (xdc_Char)0x72,  /* [1428] */
    (xdc_Char)0x65,  /* [1429] */
    (xdc_Char)0x61,  /* [1430] */
    (xdc_Char)0x74,  /* [1431] */
    (xdc_Char)0x65,  /* [1432] */
    (xdc_Char)0x20,  /* [1433] */
    (xdc_Char)0x61,  /* [1434] */
    (xdc_Char)0x20,  /* [1435] */
    (xdc_Char)0x53,  /* [1436] */
    (xdc_Char)0x77,  /* [1437] */
    (xdc_Char)0x69,  /* [1438] */
    (xdc_Char)0x20,  /* [1439] */
    (xdc_Char)0x77,  /* [1440] */
    (xdc_Char)0x68,  /* [1441] */
    (xdc_Char)0x65,  /* [1442] */
    (xdc_Char)0x6e,  /* [1443] */
    (xdc_Char)0x20,  /* [1444] */
    (xdc_Char)0x53,  /* [1445] */
    (xdc_Char)0x77,  /* [1446] */
    (xdc_Char)0x69,  /* [1447] */
    (xdc_Char)0x20,  /* [1448] */
    (xdc_Char)0x69,  /* [1449] */
    (xdc_Char)0x73,  /* [1450] */
    (xdc_Char)0x20,  /* [1451] */
    (xdc_Char)0x64,  /* [1452] */
    (xdc_Char)0x69,  /* [1453] */
    (xdc_Char)0x73,  /* [1454] */
    (xdc_Char)0x61,  /* [1455] */
    (xdc_Char)0x62,  /* [1456] */
    (xdc_Char)0x6c,  /* [1457] */
    (xdc_Char)0x65,  /* [1458] */
    (xdc_Char)0x64,  /* [1459] */
    (xdc_Char)0x2e,  /* [1460] */
    (xdc_Char)0x0,  /* [1461] */
    (xdc_Char)0x41,  /* [1462] */
    (xdc_Char)0x5f,  /* [1463] */
    (xdc_Char)0x62,  /* [1464] */
    (xdc_Char)0x61,  /* [1465] */
    (xdc_Char)0x64,  /* [1466] */
    (xdc_Char)0x50,  /* [1467] */
    (xdc_Char)0x72,  /* [1468] */
    (xdc_Char)0x69,  /* [1469] */
    (xdc_Char)0x6f,  /* [1470] */
    (xdc_Char)0x72,  /* [1471] */
    (xdc_Char)0x69,  /* [1472] */
    (xdc_Char)0x74,  /* [1473] */
    (xdc_Char)0x79,  /* [1474] */
    (xdc_Char)0x3a,  /* [1475] */
    (xdc_Char)0x20,  /* [1476] */
    (xdc_Char)0x41,  /* [1477] */
    (xdc_Char)0x6e,  /* [1478] */
    (xdc_Char)0x20,  /* [1479] */
    (xdc_Char)0x69,  /* [1480] */
    (xdc_Char)0x6e,  /* [1481] */
    (xdc_Char)0x76,  /* [1482] */
    (xdc_Char)0x61,  /* [1483] */
    (xdc_Char)0x6c,  /* [1484] */
    (xdc_Char)0x69,  /* [1485] */
    (xdc_Char)0x64,  /* [1486] */
    (xdc_Char)0x20,  /* [1487] */
    (xdc_Char)0x53,  /* [1488] */
    (xdc_Char)0x77,  /* [1489] */
    (xdc_Char)0x69,  /* [1490] */
    (xdc_Char)0x20,  /* [1491] */
    (xdc_Char)0x70,  /* [1492] */
    (xdc_Char)0x72,  /* [1493] */
    (xdc_Char)0x69,  /* [1494] */
    (xdc_Char)0x6f,  /* [1495] */
    (xdc_Char)0x72,  /* [1496] */
    (xdc_Char)0x69,  /* [1497] */
    (xdc_Char)0x74,  /* [1498] */
    (xdc_Char)0x79,  /* [1499] */
    (xdc_Char)0x20,  /* [1500] */
    (xdc_Char)0x77,  /* [1501] */
    (xdc_Char)0x61,  /* [1502] */
    (xdc_Char)0x73,  /* [1503] */
    (xdc_Char)0x20,  /* [1504] */
    (xdc_Char)0x75,  /* [1505] */
    (xdc_Char)0x73,  /* [1506] */
    (xdc_Char)0x65,  /* [1507] */
    (xdc_Char)0x64,  /* [1508] */
    (xdc_Char)0x2e,  /* [1509] */
    (xdc_Char)0x0,  /* [1510] */
    (xdc_Char)0x41,  /* [1511] */
    (xdc_Char)0x5f,  /* [1512] */
    (xdc_Char)0x62,  /* [1513] */
    (xdc_Char)0x61,  /* [1514] */
    (xdc_Char)0x64,  /* [1515] */
    (xdc_Char)0x54,  /* [1516] */
    (xdc_Char)0x68,  /* [1517] */
    (xdc_Char)0x72,  /* [1518] */
    (xdc_Char)0x65,  /* [1519] */
    (xdc_Char)0x61,  /* [1520] */
    (xdc_Char)0x64,  /* [1521] */
    (xdc_Char)0x54,  /* [1522] */
    (xdc_Char)0x79,  /* [1523] */
    (xdc_Char)0x70,  /* [1524] */
    (xdc_Char)0x65,  /* [1525] */
    (xdc_Char)0x3a,  /* [1526] */
    (xdc_Char)0x20,  /* [1527] */
    (xdc_Char)0x43,  /* [1528] */
    (xdc_Char)0x61,  /* [1529] */
    (xdc_Char)0x6e,  /* [1530] */
    (xdc_Char)0x6e,  /* [1531] */
    (xdc_Char)0x6f,  /* [1532] */
    (xdc_Char)0x74,  /* [1533] */
    (xdc_Char)0x20,  /* [1534] */
    (xdc_Char)0x63,  /* [1535] */
    (xdc_Char)0x72,  /* [1536] */
    (xdc_Char)0x65,  /* [1537] */
    (xdc_Char)0x61,  /* [1538] */
    (xdc_Char)0x74,  /* [1539] */
    (xdc_Char)0x65,  /* [1540] */
    (xdc_Char)0x2f,  /* [1541] */
    (xdc_Char)0x64,  /* [1542] */
    (xdc_Char)0x65,  /* [1543] */
    (xdc_Char)0x6c,  /* [1544] */
    (xdc_Char)0x65,  /* [1545] */
    (xdc_Char)0x74,  /* [1546] */
    (xdc_Char)0x65,  /* [1547] */
    (xdc_Char)0x20,  /* [1548] */
    (xdc_Char)0x61,  /* [1549] */
    (xdc_Char)0x20,  /* [1550] */
    (xdc_Char)0x74,  /* [1551] */
    (xdc_Char)0x61,  /* [1552] */
    (xdc_Char)0x73,  /* [1553] */
    (xdc_Char)0x6b,  /* [1554] */
    (xdc_Char)0x20,  /* [1555] */
    (xdc_Char)0x66,  /* [1556] */
    (xdc_Char)0x72,  /* [1557] */
    (xdc_Char)0x6f,  /* [1558] */
    (xdc_Char)0x6d,  /* [1559] */
    (xdc_Char)0x20,  /* [1560] */
    (xdc_Char)0x48,  /* [1561] */
    (xdc_Char)0x77,  /* [1562] */
    (xdc_Char)0x69,  /* [1563] */
    (xdc_Char)0x20,  /* [1564] */
    (xdc_Char)0x6f,  /* [1565] */
    (xdc_Char)0x72,  /* [1566] */
    (xdc_Char)0x20,  /* [1567] */
    (xdc_Char)0x53,  /* [1568] */
    (xdc_Char)0x77,  /* [1569] */
    (xdc_Char)0x69,  /* [1570] */
    (xdc_Char)0x20,  /* [1571] */
    (xdc_Char)0x74,  /* [1572] */
    (xdc_Char)0x68,  /* [1573] */
    (xdc_Char)0x72,  /* [1574] */
    (xdc_Char)0x65,  /* [1575] */
    (xdc_Char)0x61,  /* [1576] */
    (xdc_Char)0x64,  /* [1577] */
    (xdc_Char)0x2e,  /* [1578] */
    (xdc_Char)0x0,  /* [1579] */
    (xdc_Char)0x41,  /* [1580] */
    (xdc_Char)0x5f,  /* [1581] */
    (xdc_Char)0x62,  /* [1582] */
    (xdc_Char)0x61,  /* [1583] */
    (xdc_Char)0x64,  /* [1584] */
    (xdc_Char)0x54,  /* [1585] */
    (xdc_Char)0x61,  /* [1586] */
    (xdc_Char)0x73,  /* [1587] */
    (xdc_Char)0x6b,  /* [1588] */
    (xdc_Char)0x53,  /* [1589] */
    (xdc_Char)0x74,  /* [1590] */
    (xdc_Char)0x61,  /* [1591] */
    (xdc_Char)0x74,  /* [1592] */
    (xdc_Char)0x65,  /* [1593] */
    (xdc_Char)0x3a,  /* [1594] */
    (xdc_Char)0x20,  /* [1595] */
    (xdc_Char)0x43,  /* [1596] */
    (xdc_Char)0x61,  /* [1597] */
    (xdc_Char)0x6e,  /* [1598] */
    (xdc_Char)0x27,  /* [1599] */
    (xdc_Char)0x74,  /* [1600] */
    (xdc_Char)0x20,  /* [1601] */
    (xdc_Char)0x64,  /* [1602] */
    (xdc_Char)0x65,  /* [1603] */
    (xdc_Char)0x6c,  /* [1604] */
    (xdc_Char)0x65,  /* [1605] */
    (xdc_Char)0x74,  /* [1606] */
    (xdc_Char)0x65,  /* [1607] */
    (xdc_Char)0x20,  /* [1608] */
    (xdc_Char)0x61,  /* [1609] */
    (xdc_Char)0x20,  /* [1610] */
    (xdc_Char)0x74,  /* [1611] */
    (xdc_Char)0x61,  /* [1612] */
    (xdc_Char)0x73,  /* [1613] */
    (xdc_Char)0x6b,  /* [1614] */
    (xdc_Char)0x20,  /* [1615] */
    (xdc_Char)0x69,  /* [1616] */
    (xdc_Char)0x6e,  /* [1617] */
    (xdc_Char)0x20,  /* [1618] */
    (xdc_Char)0x52,  /* [1619] */
    (xdc_Char)0x55,  /* [1620] */
    (xdc_Char)0x4e,  /* [1621] */
    (xdc_Char)0x4e,  /* [1622] */
    (xdc_Char)0x49,  /* [1623] */
    (xdc_Char)0x4e,  /* [1624] */
    (xdc_Char)0x47,  /* [1625] */
    (xdc_Char)0x20,  /* [1626] */
    (xdc_Char)0x73,  /* [1627] */
    (xdc_Char)0x74,  /* [1628] */
    (xdc_Char)0x61,  /* [1629] */
    (xdc_Char)0x74,  /* [1630] */
    (xdc_Char)0x65,  /* [1631] */
    (xdc_Char)0x2e,  /* [1632] */
    (xdc_Char)0x0,  /* [1633] */
    (xdc_Char)0x41,  /* [1634] */
    (xdc_Char)0x5f,  /* [1635] */
    (xdc_Char)0x6e,  /* [1636] */
    (xdc_Char)0x6f,  /* [1637] */
    (xdc_Char)0x50,  /* [1638] */
    (xdc_Char)0x65,  /* [1639] */
    (xdc_Char)0x6e,  /* [1640] */
    (xdc_Char)0x64,  /* [1641] */
    (xdc_Char)0x45,  /* [1642] */
    (xdc_Char)0x6c,  /* [1643] */
    (xdc_Char)0x65,  /* [1644] */
    (xdc_Char)0x6d,  /* [1645] */
    (xdc_Char)0x3a,  /* [1646] */
    (xdc_Char)0x20,  /* [1647] */
    (xdc_Char)0x4e,  /* [1648] */
    (xdc_Char)0x6f,  /* [1649] */
    (xdc_Char)0x74,  /* [1650] */
    (xdc_Char)0x20,  /* [1651] */
    (xdc_Char)0x65,  /* [1652] */
    (xdc_Char)0x6e,  /* [1653] */
    (xdc_Char)0x6f,  /* [1654] */
    (xdc_Char)0x75,  /* [1655] */
    (xdc_Char)0x67,  /* [1656] */
    (xdc_Char)0x68,  /* [1657] */
    (xdc_Char)0x20,  /* [1658] */
    (xdc_Char)0x69,  /* [1659] */
    (xdc_Char)0x6e,  /* [1660] */
    (xdc_Char)0x66,  /* [1661] */
    (xdc_Char)0x6f,  /* [1662] */
    (xdc_Char)0x20,  /* [1663] */
    (xdc_Char)0x74,  /* [1664] */
    (xdc_Char)0x6f,  /* [1665] */
    (xdc_Char)0x20,  /* [1666] */
    (xdc_Char)0x64,  /* [1667] */
    (xdc_Char)0x65,  /* [1668] */
    (xdc_Char)0x6c,  /* [1669] */
    (xdc_Char)0x65,  /* [1670] */
    (xdc_Char)0x74,  /* [1671] */
    (xdc_Char)0x65,  /* [1672] */
    (xdc_Char)0x20,  /* [1673] */
    (xdc_Char)0x42,  /* [1674] */
    (xdc_Char)0x4c,  /* [1675] */
    (xdc_Char)0x4f,  /* [1676] */
    (xdc_Char)0x43,  /* [1677] */
    (xdc_Char)0x4b,  /* [1678] */
    (xdc_Char)0x45,  /* [1679] */
    (xdc_Char)0x44,  /* [1680] */
    (xdc_Char)0x20,  /* [1681] */
    (xdc_Char)0x74,  /* [1682] */
    (xdc_Char)0x61,  /* [1683] */
    (xdc_Char)0x73,  /* [1684] */
    (xdc_Char)0x6b,  /* [1685] */
    (xdc_Char)0x2e,  /* [1686] */
    (xdc_Char)0x0,  /* [1687] */
    (xdc_Char)0x41,  /* [1688] */
    (xdc_Char)0x5f,  /* [1689] */
    (xdc_Char)0x74,  /* [1690] */
    (xdc_Char)0x61,  /* [1691] */
    (xdc_Char)0x73,  /* [1692] */
    (xdc_Char)0x6b,  /* [1693] */
    (xdc_Char)0x44,  /* [1694] */
    (xdc_Char)0x69,  /* [1695] */
    (xdc_Char)0x73,  /* [1696] */
    (xdc_Char)0x61,  /* [1697] */
    (xdc_Char)0x62,  /* [1698] */
    (xdc_Char)0x6c,  /* [1699] */
    (xdc_Char)0x65,  /* [1700] */
    (xdc_Char)0x64,  /* [1701] */
    (xdc_Char)0x3a,  /* [1702] */
    (xdc_Char)0x20,  /* [1703] */
    (xdc_Char)0x43,  /* [1704] */
    (xdc_Char)0x61,  /* [1705] */
    (xdc_Char)0x6e,  /* [1706] */
    (xdc_Char)0x6e,  /* [1707] */
    (xdc_Char)0x6f,  /* [1708] */
    (xdc_Char)0x74,  /* [1709] */
    (xdc_Char)0x20,  /* [1710] */
    (xdc_Char)0x63,  /* [1711] */
    (xdc_Char)0x72,  /* [1712] */
    (xdc_Char)0x65,  /* [1713] */
    (xdc_Char)0x61,  /* [1714] */
    (xdc_Char)0x74,  /* [1715] */
    (xdc_Char)0x65,  /* [1716] */
    (xdc_Char)0x20,  /* [1717] */
    (xdc_Char)0x61,  /* [1718] */
    (xdc_Char)0x20,  /* [1719] */
    (xdc_Char)0x74,  /* [1720] */
    (xdc_Char)0x61,  /* [1721] */
    (xdc_Char)0x73,  /* [1722] */
    (xdc_Char)0x6b,  /* [1723] */
    (xdc_Char)0x20,  /* [1724] */
    (xdc_Char)0x77,  /* [1725] */
    (xdc_Char)0x68,  /* [1726] */
    (xdc_Char)0x65,  /* [1727] */
    (xdc_Char)0x6e,  /* [1728] */
    (xdc_Char)0x20,  /* [1729] */
    (xdc_Char)0x74,  /* [1730] */
    (xdc_Char)0x61,  /* [1731] */
    (xdc_Char)0x73,  /* [1732] */
    (xdc_Char)0x6b,  /* [1733] */
    (xdc_Char)0x69,  /* [1734] */
    (xdc_Char)0x6e,  /* [1735] */
    (xdc_Char)0x67,  /* [1736] */
    (xdc_Char)0x20,  /* [1737] */
    (xdc_Char)0x69,  /* [1738] */
    (xdc_Char)0x73,  /* [1739] */
    (xdc_Char)0x20,  /* [1740] */
    (xdc_Char)0x64,  /* [1741] */
    (xdc_Char)0x69,  /* [1742] */
    (xdc_Char)0x73,  /* [1743] */
    (xdc_Char)0x61,  /* [1744] */
    (xdc_Char)0x62,  /* [1745] */
    (xdc_Char)0x6c,  /* [1746] */
    (xdc_Char)0x65,  /* [1747] */
    (xdc_Char)0x64,  /* [1748] */
    (xdc_Char)0x2e,  /* [1749] */
    (xdc_Char)0x0,  /* [1750] */
    (xdc_Char)0x41,  /* [1751] */
    (xdc_Char)0x5f,  /* [1752] */
    (xdc_Char)0x62,  /* [1753] */
    (xdc_Char)0x61,  /* [1754] */
    (xdc_Char)0x64,  /* [1755] */
    (xdc_Char)0x50,  /* [1756] */
    (xdc_Char)0x72,  /* [1757] */
    (xdc_Char)0x69,  /* [1758] */
    (xdc_Char)0x6f,  /* [1759] */
    (xdc_Char)0x72,  /* [1760] */
    (xdc_Char)0x69,  /* [1761] */
    (xdc_Char)0x74,  /* [1762] */
    (xdc_Char)0x79,  /* [1763] */
    (xdc_Char)0x3a,  /* [1764] */
    (xdc_Char)0x20,  /* [1765] */
    (xdc_Char)0x41,  /* [1766] */
    (xdc_Char)0x6e,  /* [1767] */
    (xdc_Char)0x20,  /* [1768] */
    (xdc_Char)0x69,  /* [1769] */
    (xdc_Char)0x6e,  /* [1770] */
    (xdc_Char)0x76,  /* [1771] */
    (xdc_Char)0x61,  /* [1772] */
    (xdc_Char)0x6c,  /* [1773] */
    (xdc_Char)0x69,  /* [1774] */
    (xdc_Char)0x64,  /* [1775] */
    (xdc_Char)0x20,  /* [1776] */
    (xdc_Char)0x74,  /* [1777] */
    (xdc_Char)0x61,  /* [1778] */
    (xdc_Char)0x73,  /* [1779] */
    (xdc_Char)0x6b,  /* [1780] */
    (xdc_Char)0x20,  /* [1781] */
    (xdc_Char)0x70,  /* [1782] */
    (xdc_Char)0x72,  /* [1783] */
    (xdc_Char)0x69,  /* [1784] */
    (xdc_Char)0x6f,  /* [1785] */
    (xdc_Char)0x72,  /* [1786] */
    (xdc_Char)0x69,  /* [1787] */
    (xdc_Char)0x74,  /* [1788] */
    (xdc_Char)0x79,  /* [1789] */
    (xdc_Char)0x20,  /* [1790] */
    (xdc_Char)0x77,  /* [1791] */
    (xdc_Char)0x61,  /* [1792] */
    (xdc_Char)0x73,  /* [1793] */
    (xdc_Char)0x20,  /* [1794] */
    (xdc_Char)0x75,  /* [1795] */
    (xdc_Char)0x73,  /* [1796] */
    (xdc_Char)0x65,  /* [1797] */
    (xdc_Char)0x64,  /* [1798] */
    (xdc_Char)0x2e,  /* [1799] */
    (xdc_Char)0x0,  /* [1800] */
    (xdc_Char)0x41,  /* [1801] */
    (xdc_Char)0x5f,  /* [1802] */
    (xdc_Char)0x62,  /* [1803] */
    (xdc_Char)0x61,  /* [1804] */
    (xdc_Char)0x64,  /* [1805] */
    (xdc_Char)0x54,  /* [1806] */
    (xdc_Char)0x69,  /* [1807] */
    (xdc_Char)0x6d,  /* [1808] */
    (xdc_Char)0x65,  /* [1809] */
    (xdc_Char)0x6f,  /* [1810] */
    (xdc_Char)0x75,  /* [1811] */
    (xdc_Char)0x74,  /* [1812] */
    (xdc_Char)0x3a,  /* [1813] */
    (xdc_Char)0x20,  /* [1814] */
    (xdc_Char)0x43,  /* [1815] */
    (xdc_Char)0x61,  /* [1816] */
    (xdc_Char)0x6e,  /* [1817] */
    (xdc_Char)0x27,  /* [1818] */
    (xdc_Char)0x74,  /* [1819] */
    (xdc_Char)0x20,  /* [1820] */
    (xdc_Char)0x73,  /* [1821] */
    (xdc_Char)0x6c,  /* [1822] */
    (xdc_Char)0x65,  /* [1823] */
    (xdc_Char)0x65,  /* [1824] */
    (xdc_Char)0x70,  /* [1825] */
    (xdc_Char)0x20,  /* [1826] */
    (xdc_Char)0x46,  /* [1827] */
    (xdc_Char)0x4f,  /* [1828] */
    (xdc_Char)0x52,  /* [1829] */
    (xdc_Char)0x45,  /* [1830] */
    (xdc_Char)0x56,  /* [1831] */
    (xdc_Char)0x45,  /* [1832] */
    (xdc_Char)0x52,  /* [1833] */
    (xdc_Char)0x2e,  /* [1834] */
    (xdc_Char)0x0,  /* [1835] */
    (xdc_Char)0x41,  /* [1836] */
    (xdc_Char)0x5f,  /* [1837] */
    (xdc_Char)0x62,  /* [1838] */
    (xdc_Char)0x61,  /* [1839] */
    (xdc_Char)0x64,  /* [1840] */
    (xdc_Char)0x41,  /* [1841] */
    (xdc_Char)0x66,  /* [1842] */
    (xdc_Char)0x66,  /* [1843] */
    (xdc_Char)0x69,  /* [1844] */
    (xdc_Char)0x6e,  /* [1845] */
    (xdc_Char)0x69,  /* [1846] */
    (xdc_Char)0x74,  /* [1847] */
    (xdc_Char)0x79,  /* [1848] */
    (xdc_Char)0x3a,  /* [1849] */
    (xdc_Char)0x20,  /* [1850] */
    (xdc_Char)0x49,  /* [1851] */
    (xdc_Char)0x6e,  /* [1852] */
    (xdc_Char)0x76,  /* [1853] */
    (xdc_Char)0x61,  /* [1854] */
    (xdc_Char)0x6c,  /* [1855] */
    (xdc_Char)0x69,  /* [1856] */
    (xdc_Char)0x64,  /* [1857] */
    (xdc_Char)0x20,  /* [1858] */
    (xdc_Char)0x61,  /* [1859] */
    (xdc_Char)0x66,  /* [1860] */
    (xdc_Char)0x66,  /* [1861] */
    (xdc_Char)0x69,  /* [1862] */
    (xdc_Char)0x6e,  /* [1863] */
    (xdc_Char)0x69,  /* [1864] */
    (xdc_Char)0x74,  /* [1865] */
    (xdc_Char)0x79,  /* [1866] */
    (xdc_Char)0x2e,  /* [1867] */
    (xdc_Char)0x0,  /* [1868] */
    (xdc_Char)0x41,  /* [1869] */
    (xdc_Char)0x5f,  /* [1870] */
    (xdc_Char)0x73,  /* [1871] */
    (xdc_Char)0x6c,  /* [1872] */
    (xdc_Char)0x65,  /* [1873] */
    (xdc_Char)0x65,  /* [1874] */
    (xdc_Char)0x70,  /* [1875] */
    (xdc_Char)0x54,  /* [1876] */
    (xdc_Char)0x61,  /* [1877] */
    (xdc_Char)0x73,  /* [1878] */
    (xdc_Char)0x6b,  /* [1879] */
    (xdc_Char)0x44,  /* [1880] */
    (xdc_Char)0x69,  /* [1881] */
    (xdc_Char)0x73,  /* [1882] */
    (xdc_Char)0x61,  /* [1883] */
    (xdc_Char)0x62,  /* [1884] */
    (xdc_Char)0x6c,  /* [1885] */
    (xdc_Char)0x65,  /* [1886] */
    (xdc_Char)0x64,  /* [1887] */
    (xdc_Char)0x3a,  /* [1888] */
    (xdc_Char)0x20,  /* [1889] */
    (xdc_Char)0x43,  /* [1890] */
    (xdc_Char)0x61,  /* [1891] */
    (xdc_Char)0x6e,  /* [1892] */
    (xdc_Char)0x6e,  /* [1893] */
    (xdc_Char)0x6f,  /* [1894] */
    (xdc_Char)0x74,  /* [1895] */
    (xdc_Char)0x20,  /* [1896] */
    (xdc_Char)0x63,  /* [1897] */
    (xdc_Char)0x61,  /* [1898] */
    (xdc_Char)0x6c,  /* [1899] */
    (xdc_Char)0x6c,  /* [1900] */
    (xdc_Char)0x20,  /* [1901] */
    (xdc_Char)0x54,  /* [1902] */
    (xdc_Char)0x61,  /* [1903] */
    (xdc_Char)0x73,  /* [1904] */
    (xdc_Char)0x6b,  /* [1905] */
    (xdc_Char)0x5f,  /* [1906] */
    (xdc_Char)0x73,  /* [1907] */
    (xdc_Char)0x6c,  /* [1908] */
    (xdc_Char)0x65,  /* [1909] */
    (xdc_Char)0x65,  /* [1910] */
    (xdc_Char)0x70,  /* [1911] */
    (xdc_Char)0x28,  /* [1912] */
    (xdc_Char)0x29,  /* [1913] */
    (xdc_Char)0x20,  /* [1914] */
    (xdc_Char)0x77,  /* [1915] */
    (xdc_Char)0x68,  /* [1916] */
    (xdc_Char)0x69,  /* [1917] */
    (xdc_Char)0x6c,  /* [1918] */
    (xdc_Char)0x65,  /* [1919] */
    (xdc_Char)0x20,  /* [1920] */
    (xdc_Char)0x74,  /* [1921] */
    (xdc_Char)0x68,  /* [1922] */
    (xdc_Char)0x65,  /* [1923] */
    (xdc_Char)0x20,  /* [1924] */
    (xdc_Char)0x54,  /* [1925] */
    (xdc_Char)0x61,  /* [1926] */
    (xdc_Char)0x73,  /* [1927] */
    (xdc_Char)0x6b,  /* [1928] */
    (xdc_Char)0x20,  /* [1929] */
    (xdc_Char)0x73,  /* [1930] */
    (xdc_Char)0x63,  /* [1931] */
    (xdc_Char)0x68,  /* [1932] */
    (xdc_Char)0x65,  /* [1933] */
    (xdc_Char)0x64,  /* [1934] */
    (xdc_Char)0x75,  /* [1935] */
    (xdc_Char)0x6c,  /* [1936] */
    (xdc_Char)0x65,  /* [1937] */
    (xdc_Char)0x72,  /* [1938] */
    (xdc_Char)0x20,  /* [1939] */
    (xdc_Char)0x69,  /* [1940] */
    (xdc_Char)0x73,  /* [1941] */
    (xdc_Char)0x20,  /* [1942] */
    (xdc_Char)0x64,  /* [1943] */
    (xdc_Char)0x69,  /* [1944] */
    (xdc_Char)0x73,  /* [1945] */
    (xdc_Char)0x61,  /* [1946] */
    (xdc_Char)0x62,  /* [1947] */
    (xdc_Char)0x6c,  /* [1948] */
    (xdc_Char)0x65,  /* [1949] */
    (xdc_Char)0x64,  /* [1950] */
    (xdc_Char)0x2e,  /* [1951] */
    (xdc_Char)0x0,  /* [1952] */
    (xdc_Char)0x41,  /* [1953] */
    (xdc_Char)0x5f,  /* [1954] */
    (xdc_Char)0x69,  /* [1955] */
    (xdc_Char)0x6e,  /* [1956] */
    (xdc_Char)0x76,  /* [1957] */
    (xdc_Char)0x61,  /* [1958] */
    (xdc_Char)0x6c,  /* [1959] */
    (xdc_Char)0x69,  /* [1960] */
    (xdc_Char)0x64,  /* [1961] */
    (xdc_Char)0x43,  /* [1962] */
    (xdc_Char)0x6f,  /* [1963] */
    (xdc_Char)0x72,  /* [1964] */
    (xdc_Char)0x65,  /* [1965] */
    (xdc_Char)0x49,  /* [1966] */
    (xdc_Char)0x64,  /* [1967] */
    (xdc_Char)0x3a,  /* [1968] */
    (xdc_Char)0x20,  /* [1969] */
    (xdc_Char)0x43,  /* [1970] */
    (xdc_Char)0x61,  /* [1971] */
    (xdc_Char)0x6e,  /* [1972] */
    (xdc_Char)0x6e,  /* [1973] */
    (xdc_Char)0x6f,  /* [1974] */
    (xdc_Char)0x74,  /* [1975] */
    (xdc_Char)0x20,  /* [1976] */
    (xdc_Char)0x70,  /* [1977] */
    (xdc_Char)0x61,  /* [1978] */
    (xdc_Char)0x73,  /* [1979] */
    (xdc_Char)0x73,  /* [1980] */
    (xdc_Char)0x20,  /* [1981] */
    (xdc_Char)0x61,  /* [1982] */
    (xdc_Char)0x20,  /* [1983] */
    (xdc_Char)0x6e,  /* [1984] */
    (xdc_Char)0x6f,  /* [1985] */
    (xdc_Char)0x6e,  /* [1986] */
    (xdc_Char)0x2d,  /* [1987] */
    (xdc_Char)0x7a,  /* [1988] */
    (xdc_Char)0x65,  /* [1989] */
    (xdc_Char)0x72,  /* [1990] */
    (xdc_Char)0x6f,  /* [1991] */
    (xdc_Char)0x20,  /* [1992] */
    (xdc_Char)0x43,  /* [1993] */
    (xdc_Char)0x6f,  /* [1994] */
    (xdc_Char)0x72,  /* [1995] */
    (xdc_Char)0x65,  /* [1996] */
    (xdc_Char)0x49,  /* [1997] */
    (xdc_Char)0x64,  /* [1998] */
    (xdc_Char)0x20,  /* [1999] */
    (xdc_Char)0x69,  /* [2000] */
    (xdc_Char)0x6e,  /* [2001] */
    (xdc_Char)0x20,  /* [2002] */
    (xdc_Char)0x61,  /* [2003] */
    (xdc_Char)0x20,  /* [2004] */
    (xdc_Char)0x6e,  /* [2005] */
    (xdc_Char)0x6f,  /* [2006] */
    (xdc_Char)0x6e,  /* [2007] */
    (xdc_Char)0x2d,  /* [2008] */
    (xdc_Char)0x53,  /* [2009] */
    (xdc_Char)0x4d,  /* [2010] */
    (xdc_Char)0x50,  /* [2011] */
    (xdc_Char)0x20,  /* [2012] */
    (xdc_Char)0x61,  /* [2013] */
    (xdc_Char)0x70,  /* [2014] */
    (xdc_Char)0x70,  /* [2015] */
    (xdc_Char)0x6c,  /* [2016] */
    (xdc_Char)0x69,  /* [2017] */
    (xdc_Char)0x63,  /* [2018] */
    (xdc_Char)0x61,  /* [2019] */
    (xdc_Char)0x74,  /* [2020] */
    (xdc_Char)0x69,  /* [2021] */
    (xdc_Char)0x6f,  /* [2022] */
    (xdc_Char)0x6e,  /* [2023] */
    (xdc_Char)0x2e,  /* [2024] */
    (xdc_Char)0x0,  /* [2025] */
    (xdc_Char)0x62,  /* [2026] */
    (xdc_Char)0x75,  /* [2027] */
    (xdc_Char)0x66,  /* [2028] */
    (xdc_Char)0x20,  /* [2029] */
    (xdc_Char)0x70,  /* [2030] */
    (xdc_Char)0x61,  /* [2031] */
    (xdc_Char)0x72,  /* [2032] */
    (xdc_Char)0x61,  /* [2033] */
    (xdc_Char)0x6d,  /* [2034] */
    (xdc_Char)0x65,  /* [2035] */
    (xdc_Char)0x74,  /* [2036] */
    (xdc_Char)0x65,  /* [2037] */
    (xdc_Char)0x72,  /* [2038] */
    (xdc_Char)0x20,  /* [2039] */
    (xdc_Char)0x63,  /* [2040] */
    (xdc_Char)0x61,  /* [2041] */
    (xdc_Char)0x6e,  /* [2042] */
    (xdc_Char)0x6e,  /* [2043] */
    (xdc_Char)0x6f,  /* [2044] */
    (xdc_Char)0x74,  /* [2045] */
    (xdc_Char)0x20,  /* [2046] */
    (xdc_Char)0x62,  /* [2047] */
    (xdc_Char)0x65,  /* [2048] */
    (xdc_Char)0x20,  /* [2049] */
    (xdc_Char)0x6e,  /* [2050] */
    (xdc_Char)0x75,  /* [2051] */
    (xdc_Char)0x6c,  /* [2052] */
    (xdc_Char)0x6c,  /* [2053] */
    (xdc_Char)0x0,  /* [2054] */
    (xdc_Char)0x62,  /* [2055] */
    (xdc_Char)0x75,  /* [2056] */
    (xdc_Char)0x66,  /* [2057] */
    (xdc_Char)0x20,  /* [2058] */
    (xdc_Char)0x6e,  /* [2059] */
    (xdc_Char)0x6f,  /* [2060] */
    (xdc_Char)0x74,  /* [2061] */
    (xdc_Char)0x20,  /* [2062] */
    (xdc_Char)0x70,  /* [2063] */
    (xdc_Char)0x72,  /* [2064] */
    (xdc_Char)0x6f,  /* [2065] */
    (xdc_Char)0x70,  /* [2066] */
    (xdc_Char)0x65,  /* [2067] */
    (xdc_Char)0x72,  /* [2068] */
    (xdc_Char)0x6c,  /* [2069] */
    (xdc_Char)0x79,  /* [2070] */
    (xdc_Char)0x20,  /* [2071] */
    (xdc_Char)0x61,  /* [2072] */
    (xdc_Char)0x6c,  /* [2073] */
    (xdc_Char)0x69,  /* [2074] */
    (xdc_Char)0x67,  /* [2075] */
    (xdc_Char)0x6e,  /* [2076] */
    (xdc_Char)0x65,  /* [2077] */
    (xdc_Char)0x64,  /* [2078] */
    (xdc_Char)0x0,  /* [2079] */
    (xdc_Char)0x61,  /* [2080] */
    (xdc_Char)0x6c,  /* [2081] */
    (xdc_Char)0x69,  /* [2082] */
    (xdc_Char)0x67,  /* [2083] */
    (xdc_Char)0x6e,  /* [2084] */
    (xdc_Char)0x20,  /* [2085] */
    (xdc_Char)0x70,  /* [2086] */
    (xdc_Char)0x61,  /* [2087] */
    (xdc_Char)0x72,  /* [2088] */
    (xdc_Char)0x61,  /* [2089] */
    (xdc_Char)0x6d,  /* [2090] */
    (xdc_Char)0x65,  /* [2091] */
    (xdc_Char)0x74,  /* [2092] */
    (xdc_Char)0x65,  /* [2093] */
    (xdc_Char)0x72,  /* [2094] */
    (xdc_Char)0x20,  /* [2095] */
    (xdc_Char)0x6d,  /* [2096] */
    (xdc_Char)0x75,  /* [2097] */
    (xdc_Char)0x73,  /* [2098] */
    (xdc_Char)0x74,  /* [2099] */
    (xdc_Char)0x20,  /* [2100] */
    (xdc_Char)0x62,  /* [2101] */
    (xdc_Char)0x65,  /* [2102] */
    (xdc_Char)0x20,  /* [2103] */
    (xdc_Char)0x30,  /* [2104] */
    (xdc_Char)0x20,  /* [2105] */
    (xdc_Char)0x6f,  /* [2106] */
    (xdc_Char)0x72,  /* [2107] */
    (xdc_Char)0x20,  /* [2108] */
    (xdc_Char)0x61,  /* [2109] */
    (xdc_Char)0x20,  /* [2110] */
    (xdc_Char)0x70,  /* [2111] */
    (xdc_Char)0x6f,  /* [2112] */
    (xdc_Char)0x77,  /* [2113] */
    (xdc_Char)0x65,  /* [2114] */
    (xdc_Char)0x72,  /* [2115] */
    (xdc_Char)0x20,  /* [2116] */
    (xdc_Char)0x6f,  /* [2117] */
    (xdc_Char)0x66,  /* [2118] */
    (xdc_Char)0x20,  /* [2119] */
    (xdc_Char)0x32,  /* [2120] */
    (xdc_Char)0x20,  /* [2121] */
    (xdc_Char)0x3e,  /* [2122] */
    (xdc_Char)0x3d,  /* [2123] */
    (xdc_Char)0x20,  /* [2124] */
    (xdc_Char)0x74,  /* [2125] */
    (xdc_Char)0x68,  /* [2126] */
    (xdc_Char)0x65,  /* [2127] */
    (xdc_Char)0x20,  /* [2128] */
    (xdc_Char)0x76,  /* [2129] */
    (xdc_Char)0x61,  /* [2130] */
    (xdc_Char)0x6c,  /* [2131] */
    (xdc_Char)0x75,  /* [2132] */
    (xdc_Char)0x65,  /* [2133] */
    (xdc_Char)0x20,  /* [2134] */
    (xdc_Char)0x6f,  /* [2135] */
    (xdc_Char)0x66,  /* [2136] */
    (xdc_Char)0x20,  /* [2137] */
    (xdc_Char)0x4d,  /* [2138] */
    (xdc_Char)0x65,  /* [2139] */
    (xdc_Char)0x6d,  /* [2140] */
    (xdc_Char)0x6f,  /* [2141] */
    (xdc_Char)0x72,  /* [2142] */
    (xdc_Char)0x79,  /* [2143] */
    (xdc_Char)0x5f,  /* [2144] */
    (xdc_Char)0x67,  /* [2145] */
    (xdc_Char)0x65,  /* [2146] */
    (xdc_Char)0x74,  /* [2147] */
    (xdc_Char)0x4d,  /* [2148] */
    (xdc_Char)0x61,  /* [2149] */
    (xdc_Char)0x78,  /* [2150] */
    (xdc_Char)0x44,  /* [2151] */
    (xdc_Char)0x65,  /* [2152] */
    (xdc_Char)0x66,  /* [2153] */
    (xdc_Char)0x61,  /* [2154] */
    (xdc_Char)0x75,  /* [2155] */
    (xdc_Char)0x6c,  /* [2156] */
    (xdc_Char)0x74,  /* [2157] */
    (xdc_Char)0x54,  /* [2158] */
    (xdc_Char)0x79,  /* [2159] */
    (xdc_Char)0x70,  /* [2160] */
    (xdc_Char)0x65,  /* [2161] */
    (xdc_Char)0x41,  /* [2162] */
    (xdc_Char)0x6c,  /* [2163] */
    (xdc_Char)0x69,  /* [2164] */
    (xdc_Char)0x67,  /* [2165] */
    (xdc_Char)0x6e,  /* [2166] */
    (xdc_Char)0x28,  /* [2167] */
    (xdc_Char)0x29,  /* [2168] */
    (xdc_Char)0x0,  /* [2169] */
    (xdc_Char)0x61,  /* [2170] */
    (xdc_Char)0x6c,  /* [2171] */
    (xdc_Char)0x69,  /* [2172] */
    (xdc_Char)0x67,  /* [2173] */
    (xdc_Char)0x6e,  /* [2174] */
    (xdc_Char)0x20,  /* [2175] */
    (xdc_Char)0x70,  /* [2176] */
    (xdc_Char)0x61,  /* [2177] */
    (xdc_Char)0x72,  /* [2178] */
    (xdc_Char)0x61,  /* [2179] */
    (xdc_Char)0x6d,  /* [2180] */
    (xdc_Char)0x65,  /* [2181] */
    (xdc_Char)0x74,  /* [2182] */
    (xdc_Char)0x65,  /* [2183] */
    (xdc_Char)0x72,  /* [2184] */
    (xdc_Char)0x20,  /* [2185] */
    (xdc_Char)0x31,  /* [2186] */
    (xdc_Char)0x29,  /* [2187] */
    (xdc_Char)0x20,  /* [2188] */
    (xdc_Char)0x6d,  /* [2189] */
    (xdc_Char)0x75,  /* [2190] */
    (xdc_Char)0x73,  /* [2191] */
    (xdc_Char)0x74,  /* [2192] */
    (xdc_Char)0x20,  /* [2193] */
    (xdc_Char)0x62,  /* [2194] */
    (xdc_Char)0x65,  /* [2195] */
    (xdc_Char)0x20,  /* [2196] */
    (xdc_Char)0x30,  /* [2197] */
    (xdc_Char)0x20,  /* [2198] */
    (xdc_Char)0x6f,  /* [2199] */
    (xdc_Char)0x72,  /* [2200] */
    (xdc_Char)0x20,  /* [2201] */
    (xdc_Char)0x61,  /* [2202] */
    (xdc_Char)0x20,  /* [2203] */
    (xdc_Char)0x70,  /* [2204] */
    (xdc_Char)0x6f,  /* [2205] */
    (xdc_Char)0x77,  /* [2206] */
    (xdc_Char)0x65,  /* [2207] */
    (xdc_Char)0x72,  /* [2208] */
    (xdc_Char)0x20,  /* [2209] */
    (xdc_Char)0x6f,  /* [2210] */
    (xdc_Char)0x66,  /* [2211] */
    (xdc_Char)0x20,  /* [2212] */
    (xdc_Char)0x32,  /* [2213] */
    (xdc_Char)0x20,  /* [2214] */
    (xdc_Char)0x61,  /* [2215] */
    (xdc_Char)0x6e,  /* [2216] */
    (xdc_Char)0x64,  /* [2217] */
    (xdc_Char)0x20,  /* [2218] */
    (xdc_Char)0x32,  /* [2219] */
    (xdc_Char)0x29,  /* [2220] */
    (xdc_Char)0x20,  /* [2221] */
    (xdc_Char)0x6e,  /* [2222] */
    (xdc_Char)0x6f,  /* [2223] */
    (xdc_Char)0x74,  /* [2224] */
    (xdc_Char)0x20,  /* [2225] */
    (xdc_Char)0x67,  /* [2226] */
    (xdc_Char)0x72,  /* [2227] */
    (xdc_Char)0x65,  /* [2228] */
    (xdc_Char)0x61,  /* [2229] */
    (xdc_Char)0x74,  /* [2230] */
    (xdc_Char)0x65,  /* [2231] */
    (xdc_Char)0x72,  /* [2232] */
    (xdc_Char)0x20,  /* [2233] */
    (xdc_Char)0x74,  /* [2234] */
    (xdc_Char)0x68,  /* [2235] */
    (xdc_Char)0x61,  /* [2236] */
    (xdc_Char)0x6e,  /* [2237] */
    (xdc_Char)0x20,  /* [2238] */
    (xdc_Char)0x74,  /* [2239] */
    (xdc_Char)0x68,  /* [2240] */
    (xdc_Char)0x65,  /* [2241] */
    (xdc_Char)0x20,  /* [2242] */
    (xdc_Char)0x68,  /* [2243] */
    (xdc_Char)0x65,  /* [2244] */
    (xdc_Char)0x61,  /* [2245] */
    (xdc_Char)0x70,  /* [2246] */
    (xdc_Char)0x73,  /* [2247] */
    (xdc_Char)0x20,  /* [2248] */
    (xdc_Char)0x61,  /* [2249] */
    (xdc_Char)0x6c,  /* [2250] */
    (xdc_Char)0x69,  /* [2251] */
    (xdc_Char)0x67,  /* [2252] */
    (xdc_Char)0x6e,  /* [2253] */
    (xdc_Char)0x6d,  /* [2254] */
    (xdc_Char)0x65,  /* [2255] */
    (xdc_Char)0x6e,  /* [2256] */
    (xdc_Char)0x74,  /* [2257] */
    (xdc_Char)0x0,  /* [2258] */
    (xdc_Char)0x62,  /* [2259] */
    (xdc_Char)0x6c,  /* [2260] */
    (xdc_Char)0x6f,  /* [2261] */
    (xdc_Char)0x63,  /* [2262] */
    (xdc_Char)0x6b,  /* [2263] */
    (xdc_Char)0x53,  /* [2264] */
    (xdc_Char)0x69,  /* [2265] */
    (xdc_Char)0x7a,  /* [2266] */
    (xdc_Char)0x65,  /* [2267] */
    (xdc_Char)0x20,  /* [2268] */
    (xdc_Char)0x63,  /* [2269] */
    (xdc_Char)0x61,  /* [2270] */
    (xdc_Char)0x6e,  /* [2271] */
    (xdc_Char)0x6e,  /* [2272] */
    (xdc_Char)0x6f,  /* [2273] */
    (xdc_Char)0x74,  /* [2274] */
    (xdc_Char)0x20,  /* [2275] */
    (xdc_Char)0x62,  /* [2276] */
    (xdc_Char)0x65,  /* [2277] */
    (xdc_Char)0x20,  /* [2278] */
    (xdc_Char)0x7a,  /* [2279] */
    (xdc_Char)0x65,  /* [2280] */
    (xdc_Char)0x72,  /* [2281] */
    (xdc_Char)0x6f,  /* [2282] */
    (xdc_Char)0x0,  /* [2283] */
    (xdc_Char)0x6e,  /* [2284] */
    (xdc_Char)0x75,  /* [2285] */
    (xdc_Char)0x6d,  /* [2286] */
    (xdc_Char)0x42,  /* [2287] */
    (xdc_Char)0x6c,  /* [2288] */
    (xdc_Char)0x6f,  /* [2289] */
    (xdc_Char)0x63,  /* [2290] */
    (xdc_Char)0x6b,  /* [2291] */
    (xdc_Char)0x73,  /* [2292] */
    (xdc_Char)0x20,  /* [2293] */
    (xdc_Char)0x63,  /* [2294] */
    (xdc_Char)0x61,  /* [2295] */
    (xdc_Char)0x6e,  /* [2296] */
    (xdc_Char)0x6e,  /* [2297] */
    (xdc_Char)0x6f,  /* [2298] */
    (xdc_Char)0x74,  /* [2299] */
    (xdc_Char)0x20,  /* [2300] */
    (xdc_Char)0x62,  /* [2301] */
    (xdc_Char)0x65,  /* [2302] */
    (xdc_Char)0x20,  /* [2303] */
    (xdc_Char)0x7a,  /* [2304] */
    (xdc_Char)0x65,  /* [2305] */
    (xdc_Char)0x72,  /* [2306] */
    (xdc_Char)0x6f,  /* [2307] */
    (xdc_Char)0x0,  /* [2308] */
    (xdc_Char)0x62,  /* [2309] */
    (xdc_Char)0x75,  /* [2310] */
    (xdc_Char)0x66,  /* [2311] */
    (xdc_Char)0x53,  /* [2312] */
    (xdc_Char)0x69,  /* [2313] */
    (xdc_Char)0x7a,  /* [2314] */
    (xdc_Char)0x65,  /* [2315] */
    (xdc_Char)0x20,  /* [2316] */
    (xdc_Char)0x63,  /* [2317] */
    (xdc_Char)0x61,  /* [2318] */
    (xdc_Char)0x6e,  /* [2319] */
    (xdc_Char)0x6e,  /* [2320] */
    (xdc_Char)0x6f,  /* [2321] */
    (xdc_Char)0x74,  /* [2322] */
    (xdc_Char)0x20,  /* [2323] */
    (xdc_Char)0x62,  /* [2324] */
    (xdc_Char)0x65,  /* [2325] */
    (xdc_Char)0x20,  /* [2326] */
    (xdc_Char)0x7a,  /* [2327] */
    (xdc_Char)0x65,  /* [2328] */
    (xdc_Char)0x72,  /* [2329] */
    (xdc_Char)0x6f,  /* [2330] */
    (xdc_Char)0x0,  /* [2331] */
    (xdc_Char)0x48,  /* [2332] */
    (xdc_Char)0x65,  /* [2333] */
    (xdc_Char)0x61,  /* [2334] */
    (xdc_Char)0x70,  /* [2335] */
    (xdc_Char)0x42,  /* [2336] */
    (xdc_Char)0x75,  /* [2337] */
    (xdc_Char)0x66,  /* [2338] */
    (xdc_Char)0x5f,  /* [2339] */
    (xdc_Char)0x63,  /* [2340] */
    (xdc_Char)0x72,  /* [2341] */
    (xdc_Char)0x65,  /* [2342] */
    (xdc_Char)0x61,  /* [2343] */
    (xdc_Char)0x74,  /* [2344] */
    (xdc_Char)0x65,  /* [2345] */
    (xdc_Char)0x27,  /* [2346] */
    (xdc_Char)0x73,  /* [2347] */
    (xdc_Char)0x20,  /* [2348] */
    (xdc_Char)0x62,  /* [2349] */
    (xdc_Char)0x75,  /* [2350] */
    (xdc_Char)0x66,  /* [2351] */
    (xdc_Char)0x53,  /* [2352] */
    (xdc_Char)0x69,  /* [2353] */
    (xdc_Char)0x7a,  /* [2354] */
    (xdc_Char)0x65,  /* [2355] */
    (xdc_Char)0x20,  /* [2356] */
    (xdc_Char)0x70,  /* [2357] */
    (xdc_Char)0x61,  /* [2358] */
    (xdc_Char)0x72,  /* [2359] */
    (xdc_Char)0x61,  /* [2360] */
    (xdc_Char)0x6d,  /* [2361] */
    (xdc_Char)0x65,  /* [2362] */
    (xdc_Char)0x74,  /* [2363] */
    (xdc_Char)0x65,  /* [2364] */
    (xdc_Char)0x72,  /* [2365] */
    (xdc_Char)0x20,  /* [2366] */
    (xdc_Char)0x69,  /* [2367] */
    (xdc_Char)0x73,  /* [2368] */
    (xdc_Char)0x20,  /* [2369] */
    (xdc_Char)0x69,  /* [2370] */
    (xdc_Char)0x6e,  /* [2371] */
    (xdc_Char)0x76,  /* [2372] */
    (xdc_Char)0x61,  /* [2373] */
    (xdc_Char)0x6c,  /* [2374] */
    (xdc_Char)0x69,  /* [2375] */
    (xdc_Char)0x64,  /* [2376] */
    (xdc_Char)0x20,  /* [2377] */
    (xdc_Char)0x28,  /* [2378] */
    (xdc_Char)0x74,  /* [2379] */
    (xdc_Char)0x6f,  /* [2380] */
    (xdc_Char)0x6f,  /* [2381] */
    (xdc_Char)0x20,  /* [2382] */
    (xdc_Char)0x73,  /* [2383] */
    (xdc_Char)0x6d,  /* [2384] */
    (xdc_Char)0x61,  /* [2385] */
    (xdc_Char)0x6c,  /* [2386] */
    (xdc_Char)0x6c,  /* [2387] */
    (xdc_Char)0x29,  /* [2388] */
    (xdc_Char)0x0,  /* [2389] */
    (xdc_Char)0x43,  /* [2390] */
    (xdc_Char)0x61,  /* [2391] */
    (xdc_Char)0x6e,  /* [2392] */
    (xdc_Char)0x6e,  /* [2393] */
    (xdc_Char)0x6f,  /* [2394] */
    (xdc_Char)0x74,  /* [2395] */
    (xdc_Char)0x20,  /* [2396] */
    (xdc_Char)0x63,  /* [2397] */
    (xdc_Char)0x61,  /* [2398] */
    (xdc_Char)0x6c,  /* [2399] */
    (xdc_Char)0x6c,  /* [2400] */
    (xdc_Char)0x20,  /* [2401] */
    (xdc_Char)0x48,  /* [2402] */
    (xdc_Char)0x65,  /* [2403] */
    (xdc_Char)0x61,  /* [2404] */
    (xdc_Char)0x70,  /* [2405] */
    (xdc_Char)0x42,  /* [2406] */
    (xdc_Char)0x75,  /* [2407] */
    (xdc_Char)0x66,  /* [2408] */
    (xdc_Char)0x5f,  /* [2409] */
    (xdc_Char)0x66,  /* [2410] */
    (xdc_Char)0x72,  /* [2411] */
    (xdc_Char)0x65,  /* [2412] */
    (xdc_Char)0x65,  /* [2413] */
    (xdc_Char)0x20,  /* [2414] */
    (xdc_Char)0x77,  /* [2415] */
    (xdc_Char)0x68,  /* [2416] */
    (xdc_Char)0x65,  /* [2417] */
    (xdc_Char)0x6e,  /* [2418] */
    (xdc_Char)0x20,  /* [2419] */
    (xdc_Char)0x6e,  /* [2420] */
    (xdc_Char)0x6f,  /* [2421] */
    (xdc_Char)0x20,  /* [2422] */
    (xdc_Char)0x62,  /* [2423] */
    (xdc_Char)0x6c,  /* [2424] */
    (xdc_Char)0x6f,  /* [2425] */
    (xdc_Char)0x63,  /* [2426] */
    (xdc_Char)0x6b,  /* [2427] */
    (xdc_Char)0x73,  /* [2428] */
    (xdc_Char)0x20,  /* [2429] */
    (xdc_Char)0x68,  /* [2430] */
    (xdc_Char)0x61,  /* [2431] */
    (xdc_Char)0x76,  /* [2432] */
    (xdc_Char)0x65,  /* [2433] */
    (xdc_Char)0x20,  /* [2434] */
    (xdc_Char)0x62,  /* [2435] */
    (xdc_Char)0x65,  /* [2436] */
    (xdc_Char)0x65,  /* [2437] */
    (xdc_Char)0x6e,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x61,  /* [2440] */
    (xdc_Char)0x6c,  /* [2441] */
    (xdc_Char)0x6c,  /* [2442] */
    (xdc_Char)0x6f,  /* [2443] */
    (xdc_Char)0x63,  /* [2444] */
    (xdc_Char)0x61,  /* [2445] */
    (xdc_Char)0x74,  /* [2446] */
    (xdc_Char)0x65,  /* [2447] */
    (xdc_Char)0x64,  /* [2448] */
    (xdc_Char)0x0,  /* [2449] */
    (xdc_Char)0x41,  /* [2450] */
    (xdc_Char)0x5f,  /* [2451] */
    (xdc_Char)0x69,  /* [2452] */
    (xdc_Char)0x6e,  /* [2453] */
    (xdc_Char)0x76,  /* [2454] */
    (xdc_Char)0x61,  /* [2455] */
    (xdc_Char)0x6c,  /* [2456] */
    (xdc_Char)0x69,  /* [2457] */
    (xdc_Char)0x64,  /* [2458] */
    (xdc_Char)0x46,  /* [2459] */
    (xdc_Char)0x72,  /* [2460] */
    (xdc_Char)0x65,  /* [2461] */
    (xdc_Char)0x65,  /* [2462] */
    (xdc_Char)0x3a,  /* [2463] */
    (xdc_Char)0x20,  /* [2464] */
    (xdc_Char)0x49,  /* [2465] */
    (xdc_Char)0x6e,  /* [2466] */
    (xdc_Char)0x76,  /* [2467] */
    (xdc_Char)0x61,  /* [2468] */
    (xdc_Char)0x6c,  /* [2469] */
    (xdc_Char)0x69,  /* [2470] */
    (xdc_Char)0x64,  /* [2471] */
    (xdc_Char)0x20,  /* [2472] */
    (xdc_Char)0x66,  /* [2473] */
    (xdc_Char)0x72,  /* [2474] */
    (xdc_Char)0x65,  /* [2475] */
    (xdc_Char)0x65,  /* [2476] */
    (xdc_Char)0x0,  /* [2477] */
    (xdc_Char)0x41,  /* [2478] */
    (xdc_Char)0x5f,  /* [2479] */
    (xdc_Char)0x7a,  /* [2480] */
    (xdc_Char)0x65,  /* [2481] */
    (xdc_Char)0x72,  /* [2482] */
    (xdc_Char)0x6f,  /* [2483] */
    (xdc_Char)0x42,  /* [2484] */
    (xdc_Char)0x6c,  /* [2485] */
    (xdc_Char)0x6f,  /* [2486] */
    (xdc_Char)0x63,  /* [2487] */
    (xdc_Char)0x6b,  /* [2488] */
    (xdc_Char)0x3a,  /* [2489] */
    (xdc_Char)0x20,  /* [2490] */
    (xdc_Char)0x43,  /* [2491] */
    (xdc_Char)0x61,  /* [2492] */
    (xdc_Char)0x6e,  /* [2493] */
    (xdc_Char)0x6e,  /* [2494] */
    (xdc_Char)0x6f,  /* [2495] */
    (xdc_Char)0x74,  /* [2496] */
    (xdc_Char)0x20,  /* [2497] */
    (xdc_Char)0x61,  /* [2498] */
    (xdc_Char)0x6c,  /* [2499] */
    (xdc_Char)0x6c,  /* [2500] */
    (xdc_Char)0x6f,  /* [2501] */
    (xdc_Char)0x63,  /* [2502] */
    (xdc_Char)0x61,  /* [2503] */
    (xdc_Char)0x74,  /* [2504] */
    (xdc_Char)0x65,  /* [2505] */
    (xdc_Char)0x20,  /* [2506] */
    (xdc_Char)0x73,  /* [2507] */
    (xdc_Char)0x69,  /* [2508] */
    (xdc_Char)0x7a,  /* [2509] */
    (xdc_Char)0x65,  /* [2510] */
    (xdc_Char)0x20,  /* [2511] */
    (xdc_Char)0x30,  /* [2512] */
    (xdc_Char)0x0,  /* [2513] */
    (xdc_Char)0x41,  /* [2514] */
    (xdc_Char)0x5f,  /* [2515] */
    (xdc_Char)0x68,  /* [2516] */
    (xdc_Char)0x65,  /* [2517] */
    (xdc_Char)0x61,  /* [2518] */
    (xdc_Char)0x70,  /* [2519] */
    (xdc_Char)0x53,  /* [2520] */
    (xdc_Char)0x69,  /* [2521] */
    (xdc_Char)0x7a,  /* [2522] */
    (xdc_Char)0x65,  /* [2523] */
    (xdc_Char)0x3a,  /* [2524] */
    (xdc_Char)0x20,  /* [2525] */
    (xdc_Char)0x52,  /* [2526] */
    (xdc_Char)0x65,  /* [2527] */
    (xdc_Char)0x71,  /* [2528] */
    (xdc_Char)0x75,  /* [2529] */
    (xdc_Char)0x65,  /* [2530] */
    (xdc_Char)0x73,  /* [2531] */
    (xdc_Char)0x74,  /* [2532] */
    (xdc_Char)0x65,  /* [2533] */
    (xdc_Char)0x64,  /* [2534] */
    (xdc_Char)0x20,  /* [2535] */
    (xdc_Char)0x68,  /* [2536] */
    (xdc_Char)0x65,  /* [2537] */
    (xdc_Char)0x61,  /* [2538] */
    (xdc_Char)0x70,  /* [2539] */
    (xdc_Char)0x20,  /* [2540] */
    (xdc_Char)0x73,  /* [2541] */
    (xdc_Char)0x69,  /* [2542] */
    (xdc_Char)0x7a,  /* [2543] */
    (xdc_Char)0x65,  /* [2544] */
    (xdc_Char)0x20,  /* [2545] */
    (xdc_Char)0x69,  /* [2546] */
    (xdc_Char)0x73,  /* [2547] */
    (xdc_Char)0x20,  /* [2548] */
    (xdc_Char)0x74,  /* [2549] */
    (xdc_Char)0x6f,  /* [2550] */
    (xdc_Char)0x6f,  /* [2551] */
    (xdc_Char)0x20,  /* [2552] */
    (xdc_Char)0x73,  /* [2553] */
    (xdc_Char)0x6d,  /* [2554] */
    (xdc_Char)0x61,  /* [2555] */
    (xdc_Char)0x6c,  /* [2556] */
    (xdc_Char)0x6c,  /* [2557] */
    (xdc_Char)0x0,  /* [2558] */
    (xdc_Char)0x41,  /* [2559] */
    (xdc_Char)0x5f,  /* [2560] */
    (xdc_Char)0x61,  /* [2561] */
    (xdc_Char)0x6c,  /* [2562] */
    (xdc_Char)0x69,  /* [2563] */
    (xdc_Char)0x67,  /* [2564] */
    (xdc_Char)0x6e,  /* [2565] */
    (xdc_Char)0x3a,  /* [2566] */
    (xdc_Char)0x20,  /* [2567] */
    (xdc_Char)0x52,  /* [2568] */
    (xdc_Char)0x65,  /* [2569] */
    (xdc_Char)0x71,  /* [2570] */
    (xdc_Char)0x75,  /* [2571] */
    (xdc_Char)0x65,  /* [2572] */
    (xdc_Char)0x73,  /* [2573] */
    (xdc_Char)0x74,  /* [2574] */
    (xdc_Char)0x65,  /* [2575] */
    (xdc_Char)0x64,  /* [2576] */
    (xdc_Char)0x20,  /* [2577] */
    (xdc_Char)0x61,  /* [2578] */
    (xdc_Char)0x6c,  /* [2579] */
    (xdc_Char)0x69,  /* [2580] */
    (xdc_Char)0x67,  /* [2581] */
    (xdc_Char)0x6e,  /* [2582] */
    (xdc_Char)0x20,  /* [2583] */
    (xdc_Char)0x69,  /* [2584] */
    (xdc_Char)0x73,  /* [2585] */
    (xdc_Char)0x20,  /* [2586] */
    (xdc_Char)0x6e,  /* [2587] */
    (xdc_Char)0x6f,  /* [2588] */
    (xdc_Char)0x74,  /* [2589] */
    (xdc_Char)0x20,  /* [2590] */
    (xdc_Char)0x61,  /* [2591] */
    (xdc_Char)0x20,  /* [2592] */
    (xdc_Char)0x70,  /* [2593] */
    (xdc_Char)0x6f,  /* [2594] */
    (xdc_Char)0x77,  /* [2595] */
    (xdc_Char)0x65,  /* [2596] */
    (xdc_Char)0x72,  /* [2597] */
    (xdc_Char)0x20,  /* [2598] */
    (xdc_Char)0x6f,  /* [2599] */
    (xdc_Char)0x66,  /* [2600] */
    (xdc_Char)0x20,  /* [2601] */
    (xdc_Char)0x32,  /* [2602] */
    (xdc_Char)0x0,  /* [2603] */
    (xdc_Char)0x49,  /* [2604] */
    (xdc_Char)0x6e,  /* [2605] */
    (xdc_Char)0x76,  /* [2606] */
    (xdc_Char)0x61,  /* [2607] */
    (xdc_Char)0x6c,  /* [2608] */
    (xdc_Char)0x69,  /* [2609] */
    (xdc_Char)0x64,  /* [2610] */
    (xdc_Char)0x20,  /* [2611] */
    (xdc_Char)0x62,  /* [2612] */
    (xdc_Char)0x6c,  /* [2613] */
    (xdc_Char)0x6f,  /* [2614] */
    (xdc_Char)0x63,  /* [2615] */
    (xdc_Char)0x6b,  /* [2616] */
    (xdc_Char)0x20,  /* [2617] */
    (xdc_Char)0x61,  /* [2618] */
    (xdc_Char)0x64,  /* [2619] */
    (xdc_Char)0x64,  /* [2620] */
    (xdc_Char)0x72,  /* [2621] */
    (xdc_Char)0x65,  /* [2622] */
    (xdc_Char)0x73,  /* [2623] */
    (xdc_Char)0x73,  /* [2624] */
    (xdc_Char)0x20,  /* [2625] */
    (xdc_Char)0x6f,  /* [2626] */
    (xdc_Char)0x6e,  /* [2627] */
    (xdc_Char)0x20,  /* [2628] */
    (xdc_Char)0x74,  /* [2629] */
    (xdc_Char)0x68,  /* [2630] */
    (xdc_Char)0x65,  /* [2631] */
    (xdc_Char)0x20,  /* [2632] */
    (xdc_Char)0x66,  /* [2633] */
    (xdc_Char)0x72,  /* [2634] */
    (xdc_Char)0x65,  /* [2635] */
    (xdc_Char)0x65,  /* [2636] */
    (xdc_Char)0x2e,  /* [2637] */
    (xdc_Char)0x20,  /* [2638] */
    (xdc_Char)0x46,  /* [2639] */
    (xdc_Char)0x61,  /* [2640] */
    (xdc_Char)0x69,  /* [2641] */
    (xdc_Char)0x6c,  /* [2642] */
    (xdc_Char)0x65,  /* [2643] */
    (xdc_Char)0x64,  /* [2644] */
    (xdc_Char)0x20,  /* [2645] */
    (xdc_Char)0x74,  /* [2646] */
    (xdc_Char)0x6f,  /* [2647] */
    (xdc_Char)0x20,  /* [2648] */
    (xdc_Char)0x66,  /* [2649] */
    (xdc_Char)0x72,  /* [2650] */
    (xdc_Char)0x65,  /* [2651] */
    (xdc_Char)0x65,  /* [2652] */
    (xdc_Char)0x20,  /* [2653] */
    (xdc_Char)0x62,  /* [2654] */
    (xdc_Char)0x6c,  /* [2655] */
    (xdc_Char)0x6f,  /* [2656] */
    (xdc_Char)0x63,  /* [2657] */
    (xdc_Char)0x6b,  /* [2658] */
    (xdc_Char)0x20,  /* [2659] */
    (xdc_Char)0x62,  /* [2660] */
    (xdc_Char)0x61,  /* [2661] */
    (xdc_Char)0x63,  /* [2662] */
    (xdc_Char)0x6b,  /* [2663] */
    (xdc_Char)0x20,  /* [2664] */
    (xdc_Char)0x74,  /* [2665] */
    (xdc_Char)0x6f,  /* [2666] */
    (xdc_Char)0x20,  /* [2667] */
    (xdc_Char)0x68,  /* [2668] */
    (xdc_Char)0x65,  /* [2669] */
    (xdc_Char)0x61,  /* [2670] */
    (xdc_Char)0x70,  /* [2671] */
    (xdc_Char)0x2e,  /* [2672] */
    (xdc_Char)0x0,  /* [2673] */
    (xdc_Char)0x41,  /* [2674] */
    (xdc_Char)0x5f,  /* [2675] */
    (xdc_Char)0x64,  /* [2676] */
    (xdc_Char)0x6f,  /* [2677] */
    (xdc_Char)0x75,  /* [2678] */
    (xdc_Char)0x62,  /* [2679] */
    (xdc_Char)0x6c,  /* [2680] */
    (xdc_Char)0x65,  /* [2681] */
    (xdc_Char)0x46,  /* [2682] */
    (xdc_Char)0x72,  /* [2683] */
    (xdc_Char)0x65,  /* [2684] */
    (xdc_Char)0x65,  /* [2685] */
    (xdc_Char)0x3a,  /* [2686] */
    (xdc_Char)0x20,  /* [2687] */
    (xdc_Char)0x42,  /* [2688] */
    (xdc_Char)0x75,  /* [2689] */
    (xdc_Char)0x66,  /* [2690] */
    (xdc_Char)0x66,  /* [2691] */
    (xdc_Char)0x65,  /* [2692] */
    (xdc_Char)0x72,  /* [2693] */
    (xdc_Char)0x20,  /* [2694] */
    (xdc_Char)0x61,  /* [2695] */
    (xdc_Char)0x6c,  /* [2696] */
    (xdc_Char)0x72,  /* [2697] */
    (xdc_Char)0x65,  /* [2698] */
    (xdc_Char)0x61,  /* [2699] */
    (xdc_Char)0x64,  /* [2700] */
    (xdc_Char)0x79,  /* [2701] */
    (xdc_Char)0x20,  /* [2702] */
    (xdc_Char)0x66,  /* [2703] */
    (xdc_Char)0x72,  /* [2704] */
    (xdc_Char)0x65,  /* [2705] */
    (xdc_Char)0x65,  /* [2706] */
    (xdc_Char)0x0,  /* [2707] */
    (xdc_Char)0x41,  /* [2708] */
    (xdc_Char)0x5f,  /* [2709] */
    (xdc_Char)0x62,  /* [2710] */
    (xdc_Char)0x75,  /* [2711] */
    (xdc_Char)0x66,  /* [2712] */
    (xdc_Char)0x4f,  /* [2713] */
    (xdc_Char)0x76,  /* [2714] */
    (xdc_Char)0x65,  /* [2715] */
    (xdc_Char)0x72,  /* [2716] */
    (xdc_Char)0x66,  /* [2717] */
    (xdc_Char)0x6c,  /* [2718] */
    (xdc_Char)0x6f,  /* [2719] */
    (xdc_Char)0x77,  /* [2720] */
    (xdc_Char)0x3a,  /* [2721] */
    (xdc_Char)0x20,  /* [2722] */
    (xdc_Char)0x42,  /* [2723] */
    (xdc_Char)0x75,  /* [2724] */
    (xdc_Char)0x66,  /* [2725] */
    (xdc_Char)0x66,  /* [2726] */
    (xdc_Char)0x65,  /* [2727] */
    (xdc_Char)0x72,  /* [2728] */
    (xdc_Char)0x20,  /* [2729] */
    (xdc_Char)0x6f,  /* [2730] */
    (xdc_Char)0x76,  /* [2731] */
    (xdc_Char)0x65,  /* [2732] */
    (xdc_Char)0x72,  /* [2733] */
    (xdc_Char)0x66,  /* [2734] */
    (xdc_Char)0x6c,  /* [2735] */
    (xdc_Char)0x6f,  /* [2736] */
    (xdc_Char)0x77,  /* [2737] */
    (xdc_Char)0x0,  /* [2738] */
    (xdc_Char)0x41,  /* [2739] */
    (xdc_Char)0x5f,  /* [2740] */
    (xdc_Char)0x6e,  /* [2741] */
    (xdc_Char)0x6f,  /* [2742] */
    (xdc_Char)0x74,  /* [2743] */
    (xdc_Char)0x45,  /* [2744] */
    (xdc_Char)0x6d,  /* [2745] */
    (xdc_Char)0x70,  /* [2746] */
    (xdc_Char)0x74,  /* [2747] */
    (xdc_Char)0x79,  /* [2748] */
    (xdc_Char)0x3a,  /* [2749] */
    (xdc_Char)0x20,  /* [2750] */
    (xdc_Char)0x48,  /* [2751] */
    (xdc_Char)0x65,  /* [2752] */
    (xdc_Char)0x61,  /* [2753] */
    (xdc_Char)0x70,  /* [2754] */
    (xdc_Char)0x20,  /* [2755] */
    (xdc_Char)0x6e,  /* [2756] */
    (xdc_Char)0x6f,  /* [2757] */
    (xdc_Char)0x74,  /* [2758] */
    (xdc_Char)0x20,  /* [2759] */
    (xdc_Char)0x65,  /* [2760] */
    (xdc_Char)0x6d,  /* [2761] */
    (xdc_Char)0x70,  /* [2762] */
    (xdc_Char)0x74,  /* [2763] */
    (xdc_Char)0x79,  /* [2764] */
    (xdc_Char)0x0,  /* [2765] */
    (xdc_Char)0x41,  /* [2766] */
    (xdc_Char)0x5f,  /* [2767] */
    (xdc_Char)0x6e,  /* [2768] */
    (xdc_Char)0x75,  /* [2769] */
    (xdc_Char)0x6c,  /* [2770] */
    (xdc_Char)0x6c,  /* [2771] */
    (xdc_Char)0x4f,  /* [2772] */
    (xdc_Char)0x62,  /* [2773] */
    (xdc_Char)0x6a,  /* [2774] */
    (xdc_Char)0x65,  /* [2775] */
    (xdc_Char)0x63,  /* [2776] */
    (xdc_Char)0x74,  /* [2777] */
    (xdc_Char)0x3a,  /* [2778] */
    (xdc_Char)0x20,  /* [2779] */
    (xdc_Char)0x48,  /* [2780] */
    (xdc_Char)0x65,  /* [2781] */
    (xdc_Char)0x61,  /* [2782] */
    (xdc_Char)0x70,  /* [2783] */
    (xdc_Char)0x54,  /* [2784] */
    (xdc_Char)0x72,  /* [2785] */
    (xdc_Char)0x61,  /* [2786] */
    (xdc_Char)0x63,  /* [2787] */
    (xdc_Char)0x6b,  /* [2788] */
    (xdc_Char)0x5f,  /* [2789] */
    (xdc_Char)0x70,  /* [2790] */
    (xdc_Char)0x72,  /* [2791] */
    (xdc_Char)0x69,  /* [2792] */
    (xdc_Char)0x6e,  /* [2793] */
    (xdc_Char)0x74,  /* [2794] */
    (xdc_Char)0x48,  /* [2795] */
    (xdc_Char)0x65,  /* [2796] */
    (xdc_Char)0x61,  /* [2797] */
    (xdc_Char)0x70,  /* [2798] */
    (xdc_Char)0x20,  /* [2799] */
    (xdc_Char)0x63,  /* [2800] */
    (xdc_Char)0x61,  /* [2801] */
    (xdc_Char)0x6c,  /* [2802] */
    (xdc_Char)0x6c,  /* [2803] */
    (xdc_Char)0x65,  /* [2804] */
    (xdc_Char)0x64,  /* [2805] */
    (xdc_Char)0x20,  /* [2806] */
    (xdc_Char)0x77,  /* [2807] */
    (xdc_Char)0x69,  /* [2808] */
    (xdc_Char)0x74,  /* [2809] */
    (xdc_Char)0x68,  /* [2810] */
    (xdc_Char)0x20,  /* [2811] */
    (xdc_Char)0x6e,  /* [2812] */
    (xdc_Char)0x75,  /* [2813] */
    (xdc_Char)0x6c,  /* [2814] */
    (xdc_Char)0x6c,  /* [2815] */
    (xdc_Char)0x20,  /* [2816] */
    (xdc_Char)0x6f,  /* [2817] */
    (xdc_Char)0x62,  /* [2818] */
    (xdc_Char)0x6a,  /* [2819] */
    (xdc_Char)0x0,  /* [2820] */
    (xdc_Char)0x41,  /* [2821] */
    (xdc_Char)0x5f,  /* [2822] */
    (xdc_Char)0x69,  /* [2823] */
    (xdc_Char)0x70,  /* [2824] */
    (xdc_Char)0x63,  /* [2825] */
    (xdc_Char)0x46,  /* [2826] */
    (xdc_Char)0x61,  /* [2827] */
    (xdc_Char)0x69,  /* [2828] */
    (xdc_Char)0x6c,  /* [2829] */
    (xdc_Char)0x65,  /* [2830] */
    (xdc_Char)0x64,  /* [2831] */
    (xdc_Char)0x3a,  /* [2832] */
    (xdc_Char)0x20,  /* [2833] */
    (xdc_Char)0x55,  /* [2834] */
    (xdc_Char)0x6e,  /* [2835] */
    (xdc_Char)0x65,  /* [2836] */
    (xdc_Char)0x78,  /* [2837] */
    (xdc_Char)0x70,  /* [2838] */
    (xdc_Char)0x65,  /* [2839] */
    (xdc_Char)0x63,  /* [2840] */
    (xdc_Char)0x74,  /* [2841] */
    (xdc_Char)0x65,  /* [2842] */
    (xdc_Char)0x64,  /* [2843] */
    (xdc_Char)0x20,  /* [2844] */
    (xdc_Char)0x4d,  /* [2845] */
    (xdc_Char)0x65,  /* [2846] */
    (xdc_Char)0x73,  /* [2847] */
    (xdc_Char)0x73,  /* [2848] */
    (xdc_Char)0x61,  /* [2849] */
    (xdc_Char)0x67,  /* [2850] */
    (xdc_Char)0x65,  /* [2851] */
    (xdc_Char)0x51,  /* [2852] */
    (xdc_Char)0x20,  /* [2853] */
    (xdc_Char)0x66,  /* [2854] */
    (xdc_Char)0x61,  /* [2855] */
    (xdc_Char)0x69,  /* [2856] */
    (xdc_Char)0x6c,  /* [2857] */
    (xdc_Char)0x65,  /* [2858] */
    (xdc_Char)0x64,  /* [2859] */
    (xdc_Char)0x0,  /* [2860] */
    (xdc_Char)0x41,  /* [2861] */
    (xdc_Char)0x5f,  /* [2862] */
    (xdc_Char)0x69,  /* [2863] */
    (xdc_Char)0x6e,  /* [2864] */
    (xdc_Char)0x76,  /* [2865] */
    (xdc_Char)0x61,  /* [2866] */
    (xdc_Char)0x6c,  /* [2867] */
    (xdc_Char)0x69,  /* [2868] */
    (xdc_Char)0x64,  /* [2869] */
    (xdc_Char)0x48,  /* [2870] */
    (xdc_Char)0x64,  /* [2871] */
    (xdc_Char)0x72,  /* [2872] */
    (xdc_Char)0x54,  /* [2873] */
    (xdc_Char)0x79,  /* [2874] */
    (xdc_Char)0x70,  /* [2875] */
    (xdc_Char)0x65,  /* [2876] */
    (xdc_Char)0x3a,  /* [2877] */
    (xdc_Char)0x20,  /* [2878] */
    (xdc_Char)0x49,  /* [2879] */
    (xdc_Char)0x6e,  /* [2880] */
    (xdc_Char)0x76,  /* [2881] */
    (xdc_Char)0x61,  /* [2882] */
    (xdc_Char)0x6c,  /* [2883] */
    (xdc_Char)0x69,  /* [2884] */
    (xdc_Char)0x64,  /* [2885] */
    (xdc_Char)0x20,  /* [2886] */
    (xdc_Char)0x48,  /* [2887] */
    (xdc_Char)0x64,  /* [2888] */
    (xdc_Char)0x72,  /* [2889] */
    (xdc_Char)0x54,  /* [2890] */
    (xdc_Char)0x79,  /* [2891] */
    (xdc_Char)0x70,  /* [2892] */
    (xdc_Char)0x65,  /* [2893] */
    (xdc_Char)0x20,  /* [2894] */
    (xdc_Char)0x73,  /* [2895] */
    (xdc_Char)0x70,  /* [2896] */
    (xdc_Char)0x65,  /* [2897] */
    (xdc_Char)0x63,  /* [2898] */
    (xdc_Char)0x69,  /* [2899] */
    (xdc_Char)0x66,  /* [2900] */
    (xdc_Char)0x69,  /* [2901] */
    (xdc_Char)0x65,  /* [2902] */
    (xdc_Char)0x64,  /* [2903] */
    (xdc_Char)0x0,  /* [2904] */
    (xdc_Char)0x41,  /* [2905] */
    (xdc_Char)0x5f,  /* [2906] */
    (xdc_Char)0x69,  /* [2907] */
    (xdc_Char)0x6e,  /* [2908] */
    (xdc_Char)0x76,  /* [2909] */
    (xdc_Char)0x61,  /* [2910] */
    (xdc_Char)0x6c,  /* [2911] */
    (xdc_Char)0x69,  /* [2912] */
    (xdc_Char)0x64,  /* [2913] */
    (xdc_Char)0x53,  /* [2914] */
    (xdc_Char)0x65,  /* [2915] */
    (xdc_Char)0x72,  /* [2916] */
    (xdc_Char)0x76,  /* [2917] */
    (xdc_Char)0x69,  /* [2918] */
    (xdc_Char)0x63,  /* [2919] */
    (xdc_Char)0x65,  /* [2920] */
    (xdc_Char)0x49,  /* [2921] */
    (xdc_Char)0x64,  /* [2922] */
    (xdc_Char)0x3a,  /* [2923] */
    (xdc_Char)0x20,  /* [2924] */
    (xdc_Char)0x53,  /* [2925] */
    (xdc_Char)0x65,  /* [2926] */
    (xdc_Char)0x72,  /* [2927] */
    (xdc_Char)0x76,  /* [2928] */
    (xdc_Char)0x69,  /* [2929] */
    (xdc_Char)0x63,  /* [2930] */
    (xdc_Char)0x65,  /* [2931] */
    (xdc_Char)0x49,  /* [2932] */
    (xdc_Char)0x64,  /* [2933] */
    (xdc_Char)0x20,  /* [2934] */
    (xdc_Char)0x6f,  /* [2935] */
    (xdc_Char)0x75,  /* [2936] */
    (xdc_Char)0x74,  /* [2937] */
    (xdc_Char)0x20,  /* [2938] */
    (xdc_Char)0x6f,  /* [2939] */
    (xdc_Char)0x66,  /* [2940] */
    (xdc_Char)0x20,  /* [2941] */
    (xdc_Char)0x72,  /* [2942] */
    (xdc_Char)0x61,  /* [2943] */
    (xdc_Char)0x6e,  /* [2944] */
    (xdc_Char)0x67,  /* [2945] */
    (xdc_Char)0x65,  /* [2946] */
    (xdc_Char)0x0,  /* [2947] */
    (xdc_Char)0x41,  /* [2948] */
    (xdc_Char)0x5f,  /* [2949] */
    (xdc_Char)0x69,  /* [2950] */
    (xdc_Char)0x6e,  /* [2951] */
    (xdc_Char)0x76,  /* [2952] */
    (xdc_Char)0x61,  /* [2953] */
    (xdc_Char)0x6c,  /* [2954] */
    (xdc_Char)0x69,  /* [2955] */
    (xdc_Char)0x64,  /* [2956] */
    (xdc_Char)0x50,  /* [2957] */
    (xdc_Char)0x72,  /* [2958] */
    (xdc_Char)0x6f,  /* [2959] */
    (xdc_Char)0x63,  /* [2960] */
    (xdc_Char)0x65,  /* [2961] */
    (xdc_Char)0x73,  /* [2962] */
    (xdc_Char)0x73,  /* [2963] */
    (xdc_Char)0x43,  /* [2964] */
    (xdc_Char)0x61,  /* [2965] */
    (xdc_Char)0x6c,  /* [2966] */
    (xdc_Char)0x6c,  /* [2967] */
    (xdc_Char)0x62,  /* [2968] */
    (xdc_Char)0x61,  /* [2969] */
    (xdc_Char)0x63,  /* [2970] */
    (xdc_Char)0x6b,  /* [2971] */
    (xdc_Char)0x46,  /* [2972] */
    (xdc_Char)0x78,  /* [2973] */
    (xdc_Char)0x6e,  /* [2974] */
    (xdc_Char)0x3a,  /* [2975] */
    (xdc_Char)0x20,  /* [2976] */
    (xdc_Char)0x43,  /* [2977] */
    (xdc_Char)0x61,  /* [2978] */
    (xdc_Char)0x6c,  /* [2979] */
    (xdc_Char)0x6c,  /* [2980] */
    (xdc_Char)0x62,  /* [2981] */
    (xdc_Char)0x61,  /* [2982] */
    (xdc_Char)0x63,  /* [2983] */
    (xdc_Char)0x6b,  /* [2984] */
    (xdc_Char)0x20,  /* [2985] */
    (xdc_Char)0x63,  /* [2986] */
    (xdc_Char)0x61,  /* [2987] */
    (xdc_Char)0x6e,  /* [2988] */
    (xdc_Char)0x6e,  /* [2989] */
    (xdc_Char)0x6f,  /* [2990] */
    (xdc_Char)0x74,  /* [2991] */
    (xdc_Char)0x20,  /* [2992] */
    (xdc_Char)0x62,  /* [2993] */
    (xdc_Char)0x65,  /* [2994] */
    (xdc_Char)0x20,  /* [2995] */
    (xdc_Char)0x4e,  /* [2996] */
    (xdc_Char)0x55,  /* [2997] */
    (xdc_Char)0x4c,  /* [2998] */
    (xdc_Char)0x4c,  /* [2999] */
    (xdc_Char)0x0,  /* [3000] */
    (xdc_Char)0x41,  /* [3001] */
    (xdc_Char)0x5f,  /* [3002] */
    (xdc_Char)0x7a,  /* [3003] */
    (xdc_Char)0x65,  /* [3004] */
    (xdc_Char)0x72,  /* [3005] */
    (xdc_Char)0x6f,  /* [3006] */
    (xdc_Char)0x54,  /* [3007] */
    (xdc_Char)0x69,  /* [3008] */
    (xdc_Char)0x6d,  /* [3009] */
    (xdc_Char)0x65,  /* [3010] */
    (xdc_Char)0x6f,  /* [3011] */
    (xdc_Char)0x75,  /* [3012] */
    (xdc_Char)0x74,  /* [3013] */
    (xdc_Char)0x3a,  /* [3014] */
    (xdc_Char)0x20,  /* [3015] */
    (xdc_Char)0x54,  /* [3016] */
    (xdc_Char)0x69,  /* [3017] */
    (xdc_Char)0x6d,  /* [3018] */
    (xdc_Char)0x65,  /* [3019] */
    (xdc_Char)0x6f,  /* [3020] */
    (xdc_Char)0x75,  /* [3021] */
    (xdc_Char)0x74,  /* [3022] */
    (xdc_Char)0x20,  /* [3023] */
    (xdc_Char)0x76,  /* [3024] */
    (xdc_Char)0x61,  /* [3025] */
    (xdc_Char)0x6c,  /* [3026] */
    (xdc_Char)0x75,  /* [3027] */
    (xdc_Char)0x65,  /* [3028] */
    (xdc_Char)0x20,  /* [3029] */
    (xdc_Char)0x61,  /* [3030] */
    (xdc_Char)0x6e,  /* [3031] */
    (xdc_Char)0x6e,  /* [3032] */
    (xdc_Char)0x6f,  /* [3033] */
    (xdc_Char)0x74,  /* [3034] */
    (xdc_Char)0x20,  /* [3035] */
    (xdc_Char)0x62,  /* [3036] */
    (xdc_Char)0x65,  /* [3037] */
    (xdc_Char)0x20,  /* [3038] */
    (xdc_Char)0x7a,  /* [3039] */
    (xdc_Char)0x65,  /* [3040] */
    (xdc_Char)0x72,  /* [3041] */
    (xdc_Char)0x6f,  /* [3042] */
    (xdc_Char)0x0,  /* [3043] */
    (xdc_Char)0x41,  /* [3044] */
    (xdc_Char)0x5f,  /* [3045] */
    (xdc_Char)0x69,  /* [3046] */
    (xdc_Char)0x6e,  /* [3047] */
    (xdc_Char)0x76,  /* [3048] */
    (xdc_Char)0x61,  /* [3049] */
    (xdc_Char)0x6c,  /* [3050] */
    (xdc_Char)0x69,  /* [3051] */
    (xdc_Char)0x64,  /* [3052] */
    (xdc_Char)0x4b,  /* [3053] */
    (xdc_Char)0x65,  /* [3054] */
    (xdc_Char)0x79,  /* [3055] */
    (xdc_Char)0x3a,  /* [3056] */
    (xdc_Char)0x20,  /* [3057] */
    (xdc_Char)0x74,  /* [3058] */
    (xdc_Char)0x68,  /* [3059] */
    (xdc_Char)0x65,  /* [3060] */
    (xdc_Char)0x20,  /* [3061] */
    (xdc_Char)0x6b,  /* [3062] */
    (xdc_Char)0x65,  /* [3063] */
    (xdc_Char)0x79,  /* [3064] */
    (xdc_Char)0x20,  /* [3065] */
    (xdc_Char)0x6d,  /* [3066] */
    (xdc_Char)0x75,  /* [3067] */
    (xdc_Char)0x73,  /* [3068] */
    (xdc_Char)0x74,  /* [3069] */
    (xdc_Char)0x20,  /* [3070] */
    (xdc_Char)0x62,  /* [3071] */
    (xdc_Char)0x65,  /* [3072] */
    (xdc_Char)0x20,  /* [3073] */
    (xdc_Char)0x73,  /* [3074] */
    (xdc_Char)0x65,  /* [3075] */
    (xdc_Char)0x74,  /* [3076] */
    (xdc_Char)0x20,  /* [3077] */
    (xdc_Char)0x74,  /* [3078] */
    (xdc_Char)0x6f,  /* [3079] */
    (xdc_Char)0x20,  /* [3080] */
    (xdc_Char)0x61,  /* [3081] */
    (xdc_Char)0x20,  /* [3082] */
    (xdc_Char)0x6e,  /* [3083] */
    (xdc_Char)0x6f,  /* [3084] */
    (xdc_Char)0x6e,  /* [3085] */
    (xdc_Char)0x2d,  /* [3086] */
    (xdc_Char)0x64,  /* [3087] */
    (xdc_Char)0x65,  /* [3088] */
    (xdc_Char)0x66,  /* [3089] */
    (xdc_Char)0x61,  /* [3090] */
    (xdc_Char)0x75,  /* [3091] */
    (xdc_Char)0x6c,  /* [3092] */
    (xdc_Char)0x74,  /* [3093] */
    (xdc_Char)0x20,  /* [3094] */
    (xdc_Char)0x76,  /* [3095] */
    (xdc_Char)0x61,  /* [3096] */
    (xdc_Char)0x6c,  /* [3097] */
    (xdc_Char)0x75,  /* [3098] */
    (xdc_Char)0x65,  /* [3099] */
    (xdc_Char)0x0,  /* [3100] */
    (xdc_Char)0x41,  /* [3101] */
    (xdc_Char)0x5f,  /* [3102] */
    (xdc_Char)0x6e,  /* [3103] */
    (xdc_Char)0x75,  /* [3104] */
    (xdc_Char)0x6c,  /* [3105] */
    (xdc_Char)0x6c,  /* [3106] */
    (xdc_Char)0x48,  /* [3107] */
    (xdc_Char)0x61,  /* [3108] */
    (xdc_Char)0x6e,  /* [3109] */
    (xdc_Char)0x64,  /* [3110] */
    (xdc_Char)0x6c,  /* [3111] */
    (xdc_Char)0x65,  /* [3112] */
    (xdc_Char)0x3a,  /* [3113] */
    (xdc_Char)0x20,  /* [3114] */
    (xdc_Char)0x4e,  /* [3115] */
    (xdc_Char)0x75,  /* [3116] */
    (xdc_Char)0x6c,  /* [3117] */
    (xdc_Char)0x6c,  /* [3118] */
    (xdc_Char)0x20,  /* [3119] */
    (xdc_Char)0x68,  /* [3120] */
    (xdc_Char)0x61,  /* [3121] */
    (xdc_Char)0x6e,  /* [3122] */
    (xdc_Char)0x64,  /* [3123] */
    (xdc_Char)0x6c,  /* [3124] */
    (xdc_Char)0x65,  /* [3125] */
    (xdc_Char)0x20,  /* [3126] */
    (xdc_Char)0x70,  /* [3127] */
    (xdc_Char)0x61,  /* [3128] */
    (xdc_Char)0x73,  /* [3129] */
    (xdc_Char)0x73,  /* [3130] */
    (xdc_Char)0x65,  /* [3131] */
    (xdc_Char)0x64,  /* [3132] */
    (xdc_Char)0x20,  /* [3133] */
    (xdc_Char)0x74,  /* [3134] */
    (xdc_Char)0x6f,  /* [3135] */
    (xdc_Char)0x20,  /* [3136] */
    (xdc_Char)0x63,  /* [3137] */
    (xdc_Char)0x72,  /* [3138] */
    (xdc_Char)0x65,  /* [3139] */
    (xdc_Char)0x61,  /* [3140] */
    (xdc_Char)0x74,  /* [3141] */
    (xdc_Char)0x65,  /* [3142] */
    (xdc_Char)0x0,  /* [3143] */
    (xdc_Char)0x41,  /* [3144] */
    (xdc_Char)0x5f,  /* [3145] */
    (xdc_Char)0x49,  /* [3146] */
    (xdc_Char)0x70,  /* [3147] */
    (xdc_Char)0x63,  /* [3148] */
    (xdc_Char)0x4d,  /* [3149] */
    (xdc_Char)0x50,  /* [3150] */
    (xdc_Char)0x46,  /* [3151] */
    (xdc_Char)0x61,  /* [3152] */
    (xdc_Char)0x69,  /* [3153] */
    (xdc_Char)0x6c,  /* [3154] */
    (xdc_Char)0x75,  /* [3155] */
    (xdc_Char)0x72,  /* [3156] */
    (xdc_Char)0x65,  /* [3157] */
    (xdc_Char)0x3a,  /* [3158] */
    (xdc_Char)0x20,  /* [3159] */
    (xdc_Char)0x55,  /* [3160] */
    (xdc_Char)0x6e,  /* [3161] */
    (xdc_Char)0x65,  /* [3162] */
    (xdc_Char)0x78,  /* [3163] */
    (xdc_Char)0x70,  /* [3164] */
    (xdc_Char)0x65,  /* [3165] */
    (xdc_Char)0x63,  /* [3166] */
    (xdc_Char)0x74,  /* [3167] */
    (xdc_Char)0x65,  /* [3168] */
    (xdc_Char)0x64,  /* [3169] */
    (xdc_Char)0x20,  /* [3170] */
    (xdc_Char)0x66,  /* [3171] */
    (xdc_Char)0x61,  /* [3172] */
    (xdc_Char)0x69,  /* [3173] */
    (xdc_Char)0x6c,  /* [3174] */
    (xdc_Char)0x75,  /* [3175] */
    (xdc_Char)0x72,  /* [3176] */
    (xdc_Char)0x65,  /* [3177] */
    (xdc_Char)0x20,  /* [3178] */
    (xdc_Char)0x77,  /* [3179] */
    (xdc_Char)0x69,  /* [3180] */
    (xdc_Char)0x74,  /* [3181] */
    (xdc_Char)0x68,  /* [3182] */
    (xdc_Char)0x20,  /* [3183] */
    (xdc_Char)0x74,  /* [3184] */
    (xdc_Char)0x68,  /* [3185] */
    (xdc_Char)0x65,  /* [3186] */
    (xdc_Char)0x20,  /* [3187] */
    (xdc_Char)0x49,  /* [3188] */
    (xdc_Char)0x70,  /* [3189] */
    (xdc_Char)0x63,  /* [3190] */
    (xdc_Char)0x4d,  /* [3191] */
    (xdc_Char)0x50,  /* [3192] */
    (xdc_Char)0x0,  /* [3193] */
    (xdc_Char)0x4c,  /* [3194] */
    (xdc_Char)0x6f,  /* [3195] */
    (xdc_Char)0x67,  /* [3196] */
    (xdc_Char)0x67,  /* [3197] */
    (xdc_Char)0x65,  /* [3198] */
    (xdc_Char)0x72,  /* [3199] */
    (xdc_Char)0x53,  /* [3200] */
    (xdc_Char)0x74,  /* [3201] */
    (xdc_Char)0x72,  /* [3202] */
    (xdc_Char)0x65,  /* [3203] */
    (xdc_Char)0x61,  /* [3204] */
    (xdc_Char)0x6d,  /* [3205] */
    (xdc_Char)0x65,  /* [3206] */
    (xdc_Char)0x72,  /* [3207] */
    (xdc_Char)0x32,  /* [3208] */
    (xdc_Char)0x5f,  /* [3209] */
    (xdc_Char)0x63,  /* [3210] */
    (xdc_Char)0x72,  /* [3211] */
    (xdc_Char)0x65,  /* [3212] */
    (xdc_Char)0x61,  /* [3213] */
    (xdc_Char)0x74,  /* [3214] */
    (xdc_Char)0x65,  /* [3215] */
    (xdc_Char)0x27,  /* [3216] */
    (xdc_Char)0x73,  /* [3217] */
    (xdc_Char)0x20,  /* [3218] */
    (xdc_Char)0x62,  /* [3219] */
    (xdc_Char)0x75,  /* [3220] */
    (xdc_Char)0x66,  /* [3221] */
    (xdc_Char)0x66,  /* [3222] */
    (xdc_Char)0x65,  /* [3223] */
    (xdc_Char)0x72,  /* [3224] */
    (xdc_Char)0x20,  /* [3225] */
    (xdc_Char)0x72,  /* [3226] */
    (xdc_Char)0x65,  /* [3227] */
    (xdc_Char)0x74,  /* [3228] */
    (xdc_Char)0x75,  /* [3229] */
    (xdc_Char)0x72,  /* [3230] */
    (xdc_Char)0x6e,  /* [3231] */
    (xdc_Char)0x65,  /* [3232] */
    (xdc_Char)0x64,  /* [3233] */
    (xdc_Char)0x20,  /* [3234] */
    (xdc_Char)0x62,  /* [3235] */
    (xdc_Char)0x79,  /* [3236] */
    (xdc_Char)0x20,  /* [3237] */
    (xdc_Char)0x70,  /* [3238] */
    (xdc_Char)0x72,  /* [3239] */
    (xdc_Char)0x69,  /* [3240] */
    (xdc_Char)0x6d,  /* [3241] */
    (xdc_Char)0x65,  /* [3242] */
    (xdc_Char)0x46,  /* [3243] */
    (xdc_Char)0x78,  /* [3244] */
    (xdc_Char)0x6e,  /* [3245] */
    (xdc_Char)0x20,  /* [3246] */
    (xdc_Char)0x69,  /* [3247] */
    (xdc_Char)0x73,  /* [3248] */
    (xdc_Char)0x20,  /* [3249] */
    (xdc_Char)0x4e,  /* [3250] */
    (xdc_Char)0x55,  /* [3251] */
    (xdc_Char)0x4c,  /* [3252] */
    (xdc_Char)0x4c,  /* [3253] */
    (xdc_Char)0x0,  /* [3254] */
    (xdc_Char)0x41,  /* [3255] */
    (xdc_Char)0x5f,  /* [3256] */
    (xdc_Char)0x62,  /* [3257] */
    (xdc_Char)0x61,  /* [3258] */
    (xdc_Char)0x64,  /* [3259] */
    (xdc_Char)0x43,  /* [3260] */
    (xdc_Char)0x6f,  /* [3261] */
    (xdc_Char)0x6e,  /* [3262] */
    (xdc_Char)0x74,  /* [3263] */
    (xdc_Char)0x65,  /* [3264] */
    (xdc_Char)0x78,  /* [3265] */
    (xdc_Char)0x74,  /* [3266] */
    (xdc_Char)0x3a,  /* [3267] */
    (xdc_Char)0x20,  /* [3268] */
    (xdc_Char)0x62,  /* [3269] */
    (xdc_Char)0x61,  /* [3270] */
    (xdc_Char)0x64,  /* [3271] */
    (xdc_Char)0x20,  /* [3272] */
    (xdc_Char)0x63,  /* [3273] */
    (xdc_Char)0x61,  /* [3274] */
    (xdc_Char)0x6c,  /* [3275] */
    (xdc_Char)0x6c,  /* [3276] */
    (xdc_Char)0x69,  /* [3277] */
    (xdc_Char)0x6e,  /* [3278] */
    (xdc_Char)0x67,  /* [3279] */
    (xdc_Char)0x20,  /* [3280] */
    (xdc_Char)0x63,  /* [3281] */
    (xdc_Char)0x6f,  /* [3282] */
    (xdc_Char)0x6e,  /* [3283] */
    (xdc_Char)0x74,  /* [3284] */
    (xdc_Char)0x65,  /* [3285] */
    (xdc_Char)0x78,  /* [3286] */
    (xdc_Char)0x74,  /* [3287] */
    (xdc_Char)0x2e,  /* [3288] */
    (xdc_Char)0x20,  /* [3289] */
    (xdc_Char)0x4d,  /* [3290] */
    (xdc_Char)0x61,  /* [3291] */
    (xdc_Char)0x79,  /* [3292] */
    (xdc_Char)0x20,  /* [3293] */
    (xdc_Char)0x6e,  /* [3294] */
    (xdc_Char)0x6f,  /* [3295] */
    (xdc_Char)0x74,  /* [3296] */
    (xdc_Char)0x20,  /* [3297] */
    (xdc_Char)0x62,  /* [3298] */
    (xdc_Char)0x65,  /* [3299] */
    (xdc_Char)0x20,  /* [3300] */
    (xdc_Char)0x65,  /* [3301] */
    (xdc_Char)0x6e,  /* [3302] */
    (xdc_Char)0x74,  /* [3303] */
    (xdc_Char)0x65,  /* [3304] */
    (xdc_Char)0x72,  /* [3305] */
    (xdc_Char)0x65,  /* [3306] */
    (xdc_Char)0x64,  /* [3307] */
    (xdc_Char)0x20,  /* [3308] */
    (xdc_Char)0x66,  /* [3309] */
    (xdc_Char)0x72,  /* [3310] */
    (xdc_Char)0x6f,  /* [3311] */
    (xdc_Char)0x6d,  /* [3312] */
    (xdc_Char)0x20,  /* [3313] */
    (xdc_Char)0x61,  /* [3314] */
    (xdc_Char)0x20,  /* [3315] */
    (xdc_Char)0x68,  /* [3316] */
    (xdc_Char)0x61,  /* [3317] */
    (xdc_Char)0x72,  /* [3318] */
    (xdc_Char)0x64,  /* [3319] */
    (xdc_Char)0x77,  /* [3320] */
    (xdc_Char)0x61,  /* [3321] */
    (xdc_Char)0x72,  /* [3322] */
    (xdc_Char)0x65,  /* [3323] */
    (xdc_Char)0x20,  /* [3324] */
    (xdc_Char)0x69,  /* [3325] */
    (xdc_Char)0x6e,  /* [3326] */
    (xdc_Char)0x74,  /* [3327] */
    (xdc_Char)0x65,  /* [3328] */
    (xdc_Char)0x72,  /* [3329] */
    (xdc_Char)0x72,  /* [3330] */
    (xdc_Char)0x75,  /* [3331] */
    (xdc_Char)0x70,  /* [3332] */
    (xdc_Char)0x74,  /* [3333] */
    (xdc_Char)0x20,  /* [3334] */
    (xdc_Char)0x74,  /* [3335] */
    (xdc_Char)0x68,  /* [3336] */
    (xdc_Char)0x72,  /* [3337] */
    (xdc_Char)0x65,  /* [3338] */
    (xdc_Char)0x61,  /* [3339] */
    (xdc_Char)0x64,  /* [3340] */
    (xdc_Char)0x2e,  /* [3341] */
    (xdc_Char)0x0,  /* [3342] */
    (xdc_Char)0x41,  /* [3343] */
    (xdc_Char)0x5f,  /* [3344] */
    (xdc_Char)0x62,  /* [3345] */
    (xdc_Char)0x61,  /* [3346] */
    (xdc_Char)0x64,  /* [3347] */
    (xdc_Char)0x43,  /* [3348] */
    (xdc_Char)0x6f,  /* [3349] */
    (xdc_Char)0x6e,  /* [3350] */
    (xdc_Char)0x74,  /* [3351] */
    (xdc_Char)0x65,  /* [3352] */
    (xdc_Char)0x78,  /* [3353] */
    (xdc_Char)0x74,  /* [3354] */
    (xdc_Char)0x3a,  /* [3355] */
    (xdc_Char)0x20,  /* [3356] */
    (xdc_Char)0x62,  /* [3357] */
    (xdc_Char)0x61,  /* [3358] */
    (xdc_Char)0x64,  /* [3359] */
    (xdc_Char)0x20,  /* [3360] */
    (xdc_Char)0x63,  /* [3361] */
    (xdc_Char)0x61,  /* [3362] */
    (xdc_Char)0x6c,  /* [3363] */
    (xdc_Char)0x6c,  /* [3364] */
    (xdc_Char)0x69,  /* [3365] */
    (xdc_Char)0x6e,  /* [3366] */
    (xdc_Char)0x67,  /* [3367] */
    (xdc_Char)0x20,  /* [3368] */
    (xdc_Char)0x63,  /* [3369] */
    (xdc_Char)0x6f,  /* [3370] */
    (xdc_Char)0x6e,  /* [3371] */
    (xdc_Char)0x74,  /* [3372] */
    (xdc_Char)0x65,  /* [3373] */
    (xdc_Char)0x78,  /* [3374] */
    (xdc_Char)0x74,  /* [3375] */
    (xdc_Char)0x2e,  /* [3376] */
    (xdc_Char)0x20,  /* [3377] */
    (xdc_Char)0x4d,  /* [3378] */
    (xdc_Char)0x61,  /* [3379] */
    (xdc_Char)0x79,  /* [3380] */
    (xdc_Char)0x20,  /* [3381] */
    (xdc_Char)0x6e,  /* [3382] */
    (xdc_Char)0x6f,  /* [3383] */
    (xdc_Char)0x74,  /* [3384] */
    (xdc_Char)0x20,  /* [3385] */
    (xdc_Char)0x62,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x20,  /* [3388] */
    (xdc_Char)0x65,  /* [3389] */
    (xdc_Char)0x6e,  /* [3390] */
    (xdc_Char)0x74,  /* [3391] */
    (xdc_Char)0x65,  /* [3392] */
    (xdc_Char)0x72,  /* [3393] */
    (xdc_Char)0x65,  /* [3394] */
    (xdc_Char)0x64,  /* [3395] */
    (xdc_Char)0x20,  /* [3396] */
    (xdc_Char)0x66,  /* [3397] */
    (xdc_Char)0x72,  /* [3398] */
    (xdc_Char)0x6f,  /* [3399] */
    (xdc_Char)0x6d,  /* [3400] */
    (xdc_Char)0x20,  /* [3401] */
    (xdc_Char)0x61,  /* [3402] */
    (xdc_Char)0x20,  /* [3403] */
    (xdc_Char)0x73,  /* [3404] */
    (xdc_Char)0x6f,  /* [3405] */
    (xdc_Char)0x66,  /* [3406] */
    (xdc_Char)0x74,  /* [3407] */
    (xdc_Char)0x77,  /* [3408] */
    (xdc_Char)0x61,  /* [3409] */
    (xdc_Char)0x72,  /* [3410] */
    (xdc_Char)0x65,  /* [3411] */
    (xdc_Char)0x20,  /* [3412] */
    (xdc_Char)0x6f,  /* [3413] */
    (xdc_Char)0x72,  /* [3414] */
    (xdc_Char)0x20,  /* [3415] */
    (xdc_Char)0x68,  /* [3416] */
    (xdc_Char)0x61,  /* [3417] */
    (xdc_Char)0x72,  /* [3418] */
    (xdc_Char)0x64,  /* [3419] */
    (xdc_Char)0x77,  /* [3420] */
    (xdc_Char)0x61,  /* [3421] */
    (xdc_Char)0x72,  /* [3422] */
    (xdc_Char)0x65,  /* [3423] */
    (xdc_Char)0x20,  /* [3424] */
    (xdc_Char)0x69,  /* [3425] */
    (xdc_Char)0x6e,  /* [3426] */
    (xdc_Char)0x74,  /* [3427] */
    (xdc_Char)0x65,  /* [3428] */
    (xdc_Char)0x72,  /* [3429] */
    (xdc_Char)0x72,  /* [3430] */
    (xdc_Char)0x75,  /* [3431] */
    (xdc_Char)0x70,  /* [3432] */
    (xdc_Char)0x74,  /* [3433] */
    (xdc_Char)0x20,  /* [3434] */
    (xdc_Char)0x74,  /* [3435] */
    (xdc_Char)0x68,  /* [3436] */
    (xdc_Char)0x72,  /* [3437] */
    (xdc_Char)0x65,  /* [3438] */
    (xdc_Char)0x61,  /* [3439] */
    (xdc_Char)0x64,  /* [3440] */
    (xdc_Char)0x2e,  /* [3441] */
    (xdc_Char)0x0,  /* [3442] */
    (xdc_Char)0x41,  /* [3443] */
    (xdc_Char)0x5f,  /* [3444] */
    (xdc_Char)0x62,  /* [3445] */
    (xdc_Char)0x61,  /* [3446] */
    (xdc_Char)0x64,  /* [3447] */
    (xdc_Char)0x43,  /* [3448] */
    (xdc_Char)0x6f,  /* [3449] */
    (xdc_Char)0x6e,  /* [3450] */
    (xdc_Char)0x74,  /* [3451] */
    (xdc_Char)0x65,  /* [3452] */
    (xdc_Char)0x78,  /* [3453] */
    (xdc_Char)0x74,  /* [3454] */
    (xdc_Char)0x3a,  /* [3455] */
    (xdc_Char)0x20,  /* [3456] */
    (xdc_Char)0x62,  /* [3457] */
    (xdc_Char)0x61,  /* [3458] */
    (xdc_Char)0x64,  /* [3459] */
    (xdc_Char)0x20,  /* [3460] */
    (xdc_Char)0x63,  /* [3461] */
    (xdc_Char)0x61,  /* [3462] */
    (xdc_Char)0x6c,  /* [3463] */
    (xdc_Char)0x6c,  /* [3464] */
    (xdc_Char)0x69,  /* [3465] */
    (xdc_Char)0x6e,  /* [3466] */
    (xdc_Char)0x67,  /* [3467] */
    (xdc_Char)0x20,  /* [3468] */
    (xdc_Char)0x63,  /* [3469] */
    (xdc_Char)0x6f,  /* [3470] */
    (xdc_Char)0x6e,  /* [3471] */
    (xdc_Char)0x74,  /* [3472] */
    (xdc_Char)0x65,  /* [3473] */
    (xdc_Char)0x78,  /* [3474] */
    (xdc_Char)0x74,  /* [3475] */
    (xdc_Char)0x2e,  /* [3476] */
    (xdc_Char)0x20,  /* [3477] */
    (xdc_Char)0x53,  /* [3478] */
    (xdc_Char)0x65,  /* [3479] */
    (xdc_Char)0x65,  /* [3480] */
    (xdc_Char)0x20,  /* [3481] */
    (xdc_Char)0x47,  /* [3482] */
    (xdc_Char)0x61,  /* [3483] */
    (xdc_Char)0x74,  /* [3484] */
    (xdc_Char)0x65,  /* [3485] */
    (xdc_Char)0x4d,  /* [3486] */
    (xdc_Char)0x75,  /* [3487] */
    (xdc_Char)0x74,  /* [3488] */
    (xdc_Char)0x65,  /* [3489] */
    (xdc_Char)0x78,  /* [3490] */
    (xdc_Char)0x50,  /* [3491] */
    (xdc_Char)0x72,  /* [3492] */
    (xdc_Char)0x69,  /* [3493] */
    (xdc_Char)0x20,  /* [3494] */
    (xdc_Char)0x41,  /* [3495] */
    (xdc_Char)0x50,  /* [3496] */
    (xdc_Char)0x49,  /* [3497] */
    (xdc_Char)0x20,  /* [3498] */
    (xdc_Char)0x64,  /* [3499] */
    (xdc_Char)0x6f,  /* [3500] */
    (xdc_Char)0x63,  /* [3501] */
    (xdc_Char)0x20,  /* [3502] */
    (xdc_Char)0x66,  /* [3503] */
    (xdc_Char)0x6f,  /* [3504] */
    (xdc_Char)0x72,  /* [3505] */
    (xdc_Char)0x20,  /* [3506] */
    (xdc_Char)0x64,  /* [3507] */
    (xdc_Char)0x65,  /* [3508] */
    (xdc_Char)0x74,  /* [3509] */
    (xdc_Char)0x61,  /* [3510] */
    (xdc_Char)0x69,  /* [3511] */
    (xdc_Char)0x6c,  /* [3512] */
    (xdc_Char)0x73,  /* [3513] */
    (xdc_Char)0x2e,  /* [3514] */
    (xdc_Char)0x0,  /* [3515] */
    (xdc_Char)0x41,  /* [3516] */
    (xdc_Char)0x5f,  /* [3517] */
    (xdc_Char)0x65,  /* [3518] */
    (xdc_Char)0x6e,  /* [3519] */
    (xdc_Char)0x74,  /* [3520] */
    (xdc_Char)0x65,  /* [3521] */
    (xdc_Char)0x72,  /* [3522] */
    (xdc_Char)0x54,  /* [3523] */
    (xdc_Char)0x61,  /* [3524] */
    (xdc_Char)0x73,  /* [3525] */
    (xdc_Char)0x6b,  /* [3526] */
    (xdc_Char)0x44,  /* [3527] */
    (xdc_Char)0x69,  /* [3528] */
    (xdc_Char)0x73,  /* [3529] */
    (xdc_Char)0x61,  /* [3530] */
    (xdc_Char)0x62,  /* [3531] */
    (xdc_Char)0x6c,  /* [3532] */
    (xdc_Char)0x65,  /* [3533] */
    (xdc_Char)0x64,  /* [3534] */
    (xdc_Char)0x3a,  /* [3535] */
    (xdc_Char)0x20,  /* [3536] */
    (xdc_Char)0x43,  /* [3537] */
    (xdc_Char)0x61,  /* [3538] */
    (xdc_Char)0x6e,  /* [3539] */
    (xdc_Char)0x6e,  /* [3540] */
    (xdc_Char)0x6f,  /* [3541] */
    (xdc_Char)0x74,  /* [3542] */
    (xdc_Char)0x20,  /* [3543] */
    (xdc_Char)0x63,  /* [3544] */
    (xdc_Char)0x61,  /* [3545] */
    (xdc_Char)0x6c,  /* [3546] */
    (xdc_Char)0x6c,  /* [3547] */
    (xdc_Char)0x20,  /* [3548] */
    (xdc_Char)0x47,  /* [3549] */
    (xdc_Char)0x61,  /* [3550] */
    (xdc_Char)0x74,  /* [3551] */
    (xdc_Char)0x65,  /* [3552] */
    (xdc_Char)0x4d,  /* [3553] */
    (xdc_Char)0x75,  /* [3554] */
    (xdc_Char)0x74,  /* [3555] */
    (xdc_Char)0x65,  /* [3556] */
    (xdc_Char)0x78,  /* [3557] */
    (xdc_Char)0x50,  /* [3558] */
    (xdc_Char)0x72,  /* [3559] */
    (xdc_Char)0x69,  /* [3560] */
    (xdc_Char)0x5f,  /* [3561] */
    (xdc_Char)0x65,  /* [3562] */
    (xdc_Char)0x6e,  /* [3563] */
    (xdc_Char)0x74,  /* [3564] */
    (xdc_Char)0x65,  /* [3565] */
    (xdc_Char)0x72,  /* [3566] */
    (xdc_Char)0x28,  /* [3567] */
    (xdc_Char)0x29,  /* [3568] */
    (xdc_Char)0x20,  /* [3569] */
    (xdc_Char)0x77,  /* [3570] */
    (xdc_Char)0x68,  /* [3571] */
    (xdc_Char)0x69,  /* [3572] */
    (xdc_Char)0x6c,  /* [3573] */
    (xdc_Char)0x65,  /* [3574] */
    (xdc_Char)0x20,  /* [3575] */
    (xdc_Char)0x74,  /* [3576] */
    (xdc_Char)0x68,  /* [3577] */
    (xdc_Char)0x65,  /* [3578] */
    (xdc_Char)0x20,  /* [3579] */
    (xdc_Char)0x54,  /* [3580] */
    (xdc_Char)0x61,  /* [3581] */
    (xdc_Char)0x73,  /* [3582] */
    (xdc_Char)0x6b,  /* [3583] */
    (xdc_Char)0x20,  /* [3584] */
    (xdc_Char)0x6f,  /* [3585] */
    (xdc_Char)0x72,  /* [3586] */
    (xdc_Char)0x20,  /* [3587] */
    (xdc_Char)0x53,  /* [3588] */
    (xdc_Char)0x77,  /* [3589] */
    (xdc_Char)0x69,  /* [3590] */
    (xdc_Char)0x20,  /* [3591] */
    (xdc_Char)0x73,  /* [3592] */
    (xdc_Char)0x63,  /* [3593] */
    (xdc_Char)0x68,  /* [3594] */
    (xdc_Char)0x65,  /* [3595] */
    (xdc_Char)0x64,  /* [3596] */
    (xdc_Char)0x75,  /* [3597] */
    (xdc_Char)0x6c,  /* [3598] */
    (xdc_Char)0x65,  /* [3599] */
    (xdc_Char)0x72,  /* [3600] */
    (xdc_Char)0x20,  /* [3601] */
    (xdc_Char)0x69,  /* [3602] */
    (xdc_Char)0x73,  /* [3603] */
    (xdc_Char)0x20,  /* [3604] */
    (xdc_Char)0x64,  /* [3605] */
    (xdc_Char)0x69,  /* [3606] */
    (xdc_Char)0x73,  /* [3607] */
    (xdc_Char)0x61,  /* [3608] */
    (xdc_Char)0x62,  /* [3609] */
    (xdc_Char)0x6c,  /* [3610] */
    (xdc_Char)0x65,  /* [3611] */
    (xdc_Char)0x64,  /* [3612] */
    (xdc_Char)0x2e,  /* [3613] */
    (xdc_Char)0x0,  /* [3614] */
    (xdc_Char)0x41,  /* [3615] */
    (xdc_Char)0x5f,  /* [3616] */
    (xdc_Char)0x62,  /* [3617] */
    (xdc_Char)0x61,  /* [3618] */
    (xdc_Char)0x64,  /* [3619] */
    (xdc_Char)0x43,  /* [3620] */
    (xdc_Char)0x6f,  /* [3621] */
    (xdc_Char)0x6e,  /* [3622] */
    (xdc_Char)0x74,  /* [3623] */
    (xdc_Char)0x65,  /* [3624] */
    (xdc_Char)0x78,  /* [3625] */
    (xdc_Char)0x74,  /* [3626] */
    (xdc_Char)0x3a,  /* [3627] */
    (xdc_Char)0x20,  /* [3628] */
    (xdc_Char)0x62,  /* [3629] */
    (xdc_Char)0x61,  /* [3630] */
    (xdc_Char)0x64,  /* [3631] */
    (xdc_Char)0x20,  /* [3632] */
    (xdc_Char)0x63,  /* [3633] */
    (xdc_Char)0x61,  /* [3634] */
    (xdc_Char)0x6c,  /* [3635] */
    (xdc_Char)0x6c,  /* [3636] */
    (xdc_Char)0x69,  /* [3637] */
    (xdc_Char)0x6e,  /* [3638] */
    (xdc_Char)0x67,  /* [3639] */
    (xdc_Char)0x20,  /* [3640] */
    (xdc_Char)0x63,  /* [3641] */
    (xdc_Char)0x6f,  /* [3642] */
    (xdc_Char)0x6e,  /* [3643] */
    (xdc_Char)0x74,  /* [3644] */
    (xdc_Char)0x65,  /* [3645] */
    (xdc_Char)0x78,  /* [3646] */
    (xdc_Char)0x74,  /* [3647] */
    (xdc_Char)0x2e,  /* [3648] */
    (xdc_Char)0x20,  /* [3649] */
    (xdc_Char)0x53,  /* [3650] */
    (xdc_Char)0x65,  /* [3651] */
    (xdc_Char)0x65,  /* [3652] */
    (xdc_Char)0x20,  /* [3653] */
    (xdc_Char)0x47,  /* [3654] */
    (xdc_Char)0x61,  /* [3655] */
    (xdc_Char)0x74,  /* [3656] */
    (xdc_Char)0x65,  /* [3657] */
    (xdc_Char)0x4d,  /* [3658] */
    (xdc_Char)0x75,  /* [3659] */
    (xdc_Char)0x74,  /* [3660] */
    (xdc_Char)0x65,  /* [3661] */
    (xdc_Char)0x78,  /* [3662] */
    (xdc_Char)0x20,  /* [3663] */
    (xdc_Char)0x41,  /* [3664] */
    (xdc_Char)0x50,  /* [3665] */
    (xdc_Char)0x49,  /* [3666] */
    (xdc_Char)0x20,  /* [3667] */
    (xdc_Char)0x64,  /* [3668] */
    (xdc_Char)0x6f,  /* [3669] */
    (xdc_Char)0x63,  /* [3670] */
    (xdc_Char)0x20,  /* [3671] */
    (xdc_Char)0x66,  /* [3672] */
    (xdc_Char)0x6f,  /* [3673] */
    (xdc_Char)0x72,  /* [3674] */
    (xdc_Char)0x20,  /* [3675] */
    (xdc_Char)0x64,  /* [3676] */
    (xdc_Char)0x65,  /* [3677] */
    (xdc_Char)0x74,  /* [3678] */
    (xdc_Char)0x61,  /* [3679] */
    (xdc_Char)0x69,  /* [3680] */
    (xdc_Char)0x6c,  /* [3681] */
    (xdc_Char)0x73,  /* [3682] */
    (xdc_Char)0x2e,  /* [3683] */
    (xdc_Char)0x0,  /* [3684] */
    (xdc_Char)0x41,  /* [3685] */
    (xdc_Char)0x5f,  /* [3686] */
    (xdc_Char)0x62,  /* [3687] */
    (xdc_Char)0x61,  /* [3688] */
    (xdc_Char)0x64,  /* [3689] */
    (xdc_Char)0x43,  /* [3690] */
    (xdc_Char)0x6f,  /* [3691] */
    (xdc_Char)0x6e,  /* [3692] */
    (xdc_Char)0x74,  /* [3693] */
    (xdc_Char)0x65,  /* [3694] */
    (xdc_Char)0x78,  /* [3695] */
    (xdc_Char)0x74,  /* [3696] */
    (xdc_Char)0x3a,  /* [3697] */
    (xdc_Char)0x20,  /* [3698] */
    (xdc_Char)0x62,  /* [3699] */
    (xdc_Char)0x61,  /* [3700] */
    (xdc_Char)0x64,  /* [3701] */
    (xdc_Char)0x20,  /* [3702] */
    (xdc_Char)0x63,  /* [3703] */
    (xdc_Char)0x61,  /* [3704] */
    (xdc_Char)0x6c,  /* [3705] */
    (xdc_Char)0x6c,  /* [3706] */
    (xdc_Char)0x69,  /* [3707] */
    (xdc_Char)0x6e,  /* [3708] */
    (xdc_Char)0x67,  /* [3709] */
    (xdc_Char)0x20,  /* [3710] */
    (xdc_Char)0x63,  /* [3711] */
    (xdc_Char)0x6f,  /* [3712] */
    (xdc_Char)0x6e,  /* [3713] */
    (xdc_Char)0x74,  /* [3714] */
    (xdc_Char)0x65,  /* [3715] */
    (xdc_Char)0x78,  /* [3716] */
    (xdc_Char)0x74,  /* [3717] */
    (xdc_Char)0x2e,  /* [3718] */
    (xdc_Char)0x20,  /* [3719] */
    (xdc_Char)0x53,  /* [3720] */
    (xdc_Char)0x65,  /* [3721] */
    (xdc_Char)0x65,  /* [3722] */
    (xdc_Char)0x20,  /* [3723] */
    (xdc_Char)0x47,  /* [3724] */
    (xdc_Char)0x61,  /* [3725] */
    (xdc_Char)0x74,  /* [3726] */
    (xdc_Char)0x65,  /* [3727] */
    (xdc_Char)0x53,  /* [3728] */
    (xdc_Char)0x70,  /* [3729] */
    (xdc_Char)0x69,  /* [3730] */
    (xdc_Char)0x6e,  /* [3731] */
    (xdc_Char)0x6c,  /* [3732] */
    (xdc_Char)0x6f,  /* [3733] */
    (xdc_Char)0x63,  /* [3734] */
    (xdc_Char)0x6b,  /* [3735] */
    (xdc_Char)0x20,  /* [3736] */
    (xdc_Char)0x41,  /* [3737] */
    (xdc_Char)0x50,  /* [3738] */
    (xdc_Char)0x49,  /* [3739] */
    (xdc_Char)0x20,  /* [3740] */
    (xdc_Char)0x64,  /* [3741] */
    (xdc_Char)0x6f,  /* [3742] */
    (xdc_Char)0x63,  /* [3743] */
    (xdc_Char)0x20,  /* [3744] */
    (xdc_Char)0x66,  /* [3745] */
    (xdc_Char)0x6f,  /* [3746] */
    (xdc_Char)0x72,  /* [3747] */
    (xdc_Char)0x20,  /* [3748] */
    (xdc_Char)0x64,  /* [3749] */
    (xdc_Char)0x65,  /* [3750] */
    (xdc_Char)0x74,  /* [3751] */
    (xdc_Char)0x61,  /* [3752] */
    (xdc_Char)0x69,  /* [3753] */
    (xdc_Char)0x6c,  /* [3754] */
    (xdc_Char)0x73,  /* [3755] */
    (xdc_Char)0x2e,  /* [3756] */
    (xdc_Char)0x0,  /* [3757] */
    (xdc_Char)0x41,  /* [3758] */
    (xdc_Char)0x5f,  /* [3759] */
    (xdc_Char)0x69,  /* [3760] */
    (xdc_Char)0x6e,  /* [3761] */
    (xdc_Char)0x76,  /* [3762] */
    (xdc_Char)0x61,  /* [3763] */
    (xdc_Char)0x6c,  /* [3764] */
    (xdc_Char)0x69,  /* [3765] */
    (xdc_Char)0x64,  /* [3766] */
    (xdc_Char)0x51,  /* [3767] */
    (xdc_Char)0x75,  /* [3768] */
    (xdc_Char)0x61,  /* [3769] */
    (xdc_Char)0x6c,  /* [3770] */
    (xdc_Char)0x69,  /* [3771] */
    (xdc_Char)0x74,  /* [3772] */
    (xdc_Char)0x79,  /* [3773] */
    (xdc_Char)0x3a,  /* [3774] */
    (xdc_Char)0x20,  /* [3775] */
    (xdc_Char)0x53,  /* [3776] */
    (xdc_Char)0x65,  /* [3777] */
    (xdc_Char)0x65,  /* [3778] */
    (xdc_Char)0x20,  /* [3779] */
    (xdc_Char)0x47,  /* [3780] */
    (xdc_Char)0x61,  /* [3781] */
    (xdc_Char)0x74,  /* [3782] */
    (xdc_Char)0x65,  /* [3783] */
    (xdc_Char)0x53,  /* [3784] */
    (xdc_Char)0x70,  /* [3785] */
    (xdc_Char)0x69,  /* [3786] */
    (xdc_Char)0x6e,  /* [3787] */
    (xdc_Char)0x6c,  /* [3788] */
    (xdc_Char)0x6f,  /* [3789] */
    (xdc_Char)0x63,  /* [3790] */
    (xdc_Char)0x6b,  /* [3791] */
    (xdc_Char)0x20,  /* [3792] */
    (xdc_Char)0x41,  /* [3793] */
    (xdc_Char)0x50,  /* [3794] */
    (xdc_Char)0x49,  /* [3795] */
    (xdc_Char)0x20,  /* [3796] */
    (xdc_Char)0x64,  /* [3797] */
    (xdc_Char)0x6f,  /* [3798] */
    (xdc_Char)0x63,  /* [3799] */
    (xdc_Char)0x20,  /* [3800] */
    (xdc_Char)0x66,  /* [3801] */
    (xdc_Char)0x6f,  /* [3802] */
    (xdc_Char)0x72,  /* [3803] */
    (xdc_Char)0x20,  /* [3804] */
    (xdc_Char)0x64,  /* [3805] */
    (xdc_Char)0x65,  /* [3806] */
    (xdc_Char)0x74,  /* [3807] */
    (xdc_Char)0x61,  /* [3808] */
    (xdc_Char)0x69,  /* [3809] */
    (xdc_Char)0x6c,  /* [3810] */
    (xdc_Char)0x73,  /* [3811] */
    (xdc_Char)0x2e,  /* [3812] */
    (xdc_Char)0x0,  /* [3813] */
    (xdc_Char)0x41,  /* [3814] */
    (xdc_Char)0x5f,  /* [3815] */
    (xdc_Char)0x75,  /* [3816] */
    (xdc_Char)0x6e,  /* [3817] */
    (xdc_Char)0x73,  /* [3818] */
    (xdc_Char)0x75,  /* [3819] */
    (xdc_Char)0x70,  /* [3820] */
    (xdc_Char)0x70,  /* [3821] */
    (xdc_Char)0x6f,  /* [3822] */
    (xdc_Char)0x72,  /* [3823] */
    (xdc_Char)0x74,  /* [3824] */
    (xdc_Char)0x65,  /* [3825] */
    (xdc_Char)0x64,  /* [3826] */
    (xdc_Char)0x4d,  /* [3827] */
    (xdc_Char)0x61,  /* [3828] */
    (xdc_Char)0x73,  /* [3829] */
    (xdc_Char)0x6b,  /* [3830] */
    (xdc_Char)0x69,  /* [3831] */
    (xdc_Char)0x6e,  /* [3832] */
    (xdc_Char)0x67,  /* [3833] */
    (xdc_Char)0x4f,  /* [3834] */
    (xdc_Char)0x70,  /* [3835] */
    (xdc_Char)0x74,  /* [3836] */
    (xdc_Char)0x69,  /* [3837] */
    (xdc_Char)0x6f,  /* [3838] */
    (xdc_Char)0x6e,  /* [3839] */
    (xdc_Char)0x3a,  /* [3840] */
    (xdc_Char)0x20,  /* [3841] */
    (xdc_Char)0x75,  /* [3842] */
    (xdc_Char)0x6e,  /* [3843] */
    (xdc_Char)0x73,  /* [3844] */
    (xdc_Char)0x75,  /* [3845] */
    (xdc_Char)0x70,  /* [3846] */
    (xdc_Char)0x70,  /* [3847] */
    (xdc_Char)0x6f,  /* [3848] */
    (xdc_Char)0x72,  /* [3849] */
    (xdc_Char)0x74,  /* [3850] */
    (xdc_Char)0x65,  /* [3851] */
    (xdc_Char)0x64,  /* [3852] */
    (xdc_Char)0x20,  /* [3853] */
    (xdc_Char)0x6d,  /* [3854] */
    (xdc_Char)0x61,  /* [3855] */
    (xdc_Char)0x73,  /* [3856] */
    (xdc_Char)0x6b,  /* [3857] */
    (xdc_Char)0x53,  /* [3858] */
    (xdc_Char)0x65,  /* [3859] */
    (xdc_Char)0x74,  /* [3860] */
    (xdc_Char)0x74,  /* [3861] */
    (xdc_Char)0x69,  /* [3862] */
    (xdc_Char)0x6e,  /* [3863] */
    (xdc_Char)0x67,  /* [3864] */
    (xdc_Char)0x2e,  /* [3865] */
    (xdc_Char)0x0,  /* [3866] */
    (xdc_Char)0x61,  /* [3867] */
    (xdc_Char)0x73,  /* [3868] */
    (xdc_Char)0x73,  /* [3869] */
    (xdc_Char)0x65,  /* [3870] */
    (xdc_Char)0x72,  /* [3871] */
    (xdc_Char)0x74,  /* [3872] */
    (xdc_Char)0x69,  /* [3873] */
    (xdc_Char)0x6f,  /* [3874] */
    (xdc_Char)0x6e,  /* [3875] */
    (xdc_Char)0x20,  /* [3876] */
    (xdc_Char)0x66,  /* [3877] */
    (xdc_Char)0x61,  /* [3878] */
    (xdc_Char)0x69,  /* [3879] */
    (xdc_Char)0x6c,  /* [3880] */
    (xdc_Char)0x75,  /* [3881] */
    (xdc_Char)0x72,  /* [3882] */
    (xdc_Char)0x65,  /* [3883] */
    (xdc_Char)0x25,  /* [3884] */
    (xdc_Char)0x73,  /* [3885] */
    (xdc_Char)0x25,  /* [3886] */
    (xdc_Char)0x73,  /* [3887] */
    (xdc_Char)0x0,  /* [3888] */
    (xdc_Char)0x25,  /* [3889] */
    (xdc_Char)0x24,  /* [3890] */
    (xdc_Char)0x53,  /* [3891] */
    (xdc_Char)0x0,  /* [3892] */
    (xdc_Char)0x6f,  /* [3893] */
    (xdc_Char)0x75,  /* [3894] */
    (xdc_Char)0x74,  /* [3895] */
    (xdc_Char)0x20,  /* [3896] */
    (xdc_Char)0x6f,  /* [3897] */
    (xdc_Char)0x66,  /* [3898] */
    (xdc_Char)0x20,  /* [3899] */
    (xdc_Char)0x6d,  /* [3900] */
    (xdc_Char)0x65,  /* [3901] */
    (xdc_Char)0x6d,  /* [3902] */
    (xdc_Char)0x6f,  /* [3903] */
    (xdc_Char)0x72,  /* [3904] */
    (xdc_Char)0x79,  /* [3905] */
    (xdc_Char)0x3a,  /* [3906] */
    (xdc_Char)0x20,  /* [3907] */
    (xdc_Char)0x68,  /* [3908] */
    (xdc_Char)0x65,  /* [3909] */
    (xdc_Char)0x61,  /* [3910] */
    (xdc_Char)0x70,  /* [3911] */
    (xdc_Char)0x3d,  /* [3912] */
    (xdc_Char)0x30,  /* [3913] */
    (xdc_Char)0x78,  /* [3914] */
    (xdc_Char)0x25,  /* [3915] */
    (xdc_Char)0x78,  /* [3916] */
    (xdc_Char)0x2c,  /* [3917] */
    (xdc_Char)0x20,  /* [3918] */
    (xdc_Char)0x73,  /* [3919] */
    (xdc_Char)0x69,  /* [3920] */
    (xdc_Char)0x7a,  /* [3921] */
    (xdc_Char)0x65,  /* [3922] */
    (xdc_Char)0x3d,  /* [3923] */
    (xdc_Char)0x25,  /* [3924] */
    (xdc_Char)0x75,  /* [3925] */
    (xdc_Char)0x0,  /* [3926] */
    (xdc_Char)0x25,  /* [3927] */
    (xdc_Char)0x73,  /* [3928] */
    (xdc_Char)0x20,  /* [3929] */
    (xdc_Char)0x30,  /* [3930] */
    (xdc_Char)0x78,  /* [3931] */
    (xdc_Char)0x25,  /* [3932] */
    (xdc_Char)0x78,  /* [3933] */
    (xdc_Char)0x0,  /* [3934] */
    (xdc_Char)0x45,  /* [3935] */
    (xdc_Char)0x5f,  /* [3936] */
    (xdc_Char)0x62,  /* [3937] */
    (xdc_Char)0x61,  /* [3938] */
    (xdc_Char)0x64,  /* [3939] */
    (xdc_Char)0x4c,  /* [3940] */
    (xdc_Char)0x65,  /* [3941] */
    (xdc_Char)0x76,  /* [3942] */
    (xdc_Char)0x65,  /* [3943] */
    (xdc_Char)0x6c,  /* [3944] */
    (xdc_Char)0x3a,  /* [3945] */
    (xdc_Char)0x20,  /* [3946] */
    (xdc_Char)0x42,  /* [3947] */
    (xdc_Char)0x61,  /* [3948] */
    (xdc_Char)0x64,  /* [3949] */
    (xdc_Char)0x20,  /* [3950] */
    (xdc_Char)0x66,  /* [3951] */
    (xdc_Char)0x69,  /* [3952] */
    (xdc_Char)0x6c,  /* [3953] */
    (xdc_Char)0x74,  /* [3954] */
    (xdc_Char)0x65,  /* [3955] */
    (xdc_Char)0x72,  /* [3956] */
    (xdc_Char)0x20,  /* [3957] */
    (xdc_Char)0x6c,  /* [3958] */
    (xdc_Char)0x65,  /* [3959] */
    (xdc_Char)0x76,  /* [3960] */
    (xdc_Char)0x65,  /* [3961] */
    (xdc_Char)0x6c,  /* [3962] */
    (xdc_Char)0x20,  /* [3963] */
    (xdc_Char)0x76,  /* [3964] */
    (xdc_Char)0x61,  /* [3965] */
    (xdc_Char)0x6c,  /* [3966] */
    (xdc_Char)0x75,  /* [3967] */
    (xdc_Char)0x65,  /* [3968] */
    (xdc_Char)0x3a,  /* [3969] */
    (xdc_Char)0x20,  /* [3970] */
    (xdc_Char)0x25,  /* [3971] */
    (xdc_Char)0x64,  /* [3972] */
    (xdc_Char)0x0,  /* [3973] */
    (xdc_Char)0x66,  /* [3974] */
    (xdc_Char)0x72,  /* [3975] */
    (xdc_Char)0x65,  /* [3976] */
    (xdc_Char)0x65,  /* [3977] */
    (xdc_Char)0x28,  /* [3978] */
    (xdc_Char)0x29,  /* [3979] */
    (xdc_Char)0x20,  /* [3980] */
    (xdc_Char)0x69,  /* [3981] */
    (xdc_Char)0x6e,  /* [3982] */
    (xdc_Char)0x76,  /* [3983] */
    (xdc_Char)0x61,  /* [3984] */
    (xdc_Char)0x6c,  /* [3985] */
    (xdc_Char)0x69,  /* [3986] */
    (xdc_Char)0x64,  /* [3987] */
    (xdc_Char)0x20,  /* [3988] */
    (xdc_Char)0x69,  /* [3989] */
    (xdc_Char)0x6e,  /* [3990] */
    (xdc_Char)0x20,  /* [3991] */
    (xdc_Char)0x67,  /* [3992] */
    (xdc_Char)0x72,  /* [3993] */
    (xdc_Char)0x6f,  /* [3994] */
    (xdc_Char)0x77,  /* [3995] */
    (xdc_Char)0x74,  /* [3996] */
    (xdc_Char)0x68,  /* [3997] */
    (xdc_Char)0x2d,  /* [3998] */
    (xdc_Char)0x6f,  /* [3999] */
    (xdc_Char)0x6e,  /* [4000] */
    (xdc_Char)0x6c,  /* [4001] */
    (xdc_Char)0x79,  /* [4002] */
    (xdc_Char)0x20,  /* [4003] */
    (xdc_Char)0x48,  /* [4004] */
    (xdc_Char)0x65,  /* [4005] */
    (xdc_Char)0x61,  /* [4006] */
    (xdc_Char)0x70,  /* [4007] */
    (xdc_Char)0x4d,  /* [4008] */
    (xdc_Char)0x69,  /* [4009] */
    (xdc_Char)0x6e,  /* [4010] */
    (xdc_Char)0x0,  /* [4011] */
    (xdc_Char)0x54,  /* [4012] */
    (xdc_Char)0x68,  /* [4013] */
    (xdc_Char)0x65,  /* [4014] */
    (xdc_Char)0x20,  /* [4015] */
    (xdc_Char)0x52,  /* [4016] */
    (xdc_Char)0x54,  /* [4017] */
    (xdc_Char)0x53,  /* [4018] */
    (xdc_Char)0x20,  /* [4019] */
    (xdc_Char)0x68,  /* [4020] */
    (xdc_Char)0x65,  /* [4021] */
    (xdc_Char)0x61,  /* [4022] */
    (xdc_Char)0x70,  /* [4023] */
    (xdc_Char)0x20,  /* [4024] */
    (xdc_Char)0x69,  /* [4025] */
    (xdc_Char)0x73,  /* [4026] */
    (xdc_Char)0x20,  /* [4027] */
    (xdc_Char)0x75,  /* [4028] */
    (xdc_Char)0x73,  /* [4029] */
    (xdc_Char)0x65,  /* [4030] */
    (xdc_Char)0x64,  /* [4031] */
    (xdc_Char)0x20,  /* [4032] */
    (xdc_Char)0x75,  /* [4033] */
    (xdc_Char)0x70,  /* [4034] */
    (xdc_Char)0x2e,  /* [4035] */
    (xdc_Char)0x20,  /* [4036] */
    (xdc_Char)0x45,  /* [4037] */
    (xdc_Char)0x78,  /* [4038] */
    (xdc_Char)0x61,  /* [4039] */
    (xdc_Char)0x6d,  /* [4040] */
    (xdc_Char)0x69,  /* [4041] */
    (xdc_Char)0x6e,  /* [4042] */
    (xdc_Char)0x65,  /* [4043] */
    (xdc_Char)0x20,  /* [4044] */
    (xdc_Char)0x50,  /* [4045] */
    (xdc_Char)0x72,  /* [4046] */
    (xdc_Char)0x6f,  /* [4047] */
    (xdc_Char)0x67,  /* [4048] */
    (xdc_Char)0x72,  /* [4049] */
    (xdc_Char)0x61,  /* [4050] */
    (xdc_Char)0x6d,  /* [4051] */
    (xdc_Char)0x2e,  /* [4052] */
    (xdc_Char)0x68,  /* [4053] */
    (xdc_Char)0x65,  /* [4054] */
    (xdc_Char)0x61,  /* [4055] */
    (xdc_Char)0x70,  /* [4056] */
    (xdc_Char)0x2e,  /* [4057] */
    (xdc_Char)0x0,  /* [4058] */
    (xdc_Char)0x45,  /* [4059] */
    (xdc_Char)0x5f,  /* [4060] */
    (xdc_Char)0x62,  /* [4061] */
    (xdc_Char)0x61,  /* [4062] */
    (xdc_Char)0x64,  /* [4063] */
    (xdc_Char)0x43,  /* [4064] */
    (xdc_Char)0x6f,  /* [4065] */
    (xdc_Char)0x6d,  /* [4066] */
    (xdc_Char)0x6d,  /* [4067] */
    (xdc_Char)0x61,  /* [4068] */
    (xdc_Char)0x6e,  /* [4069] */
    (xdc_Char)0x64,  /* [4070] */
    (xdc_Char)0x3a,  /* [4071] */
    (xdc_Char)0x20,  /* [4072] */
    (xdc_Char)0x52,  /* [4073] */
    (xdc_Char)0x65,  /* [4074] */
    (xdc_Char)0x63,  /* [4075] */
    (xdc_Char)0x65,  /* [4076] */
    (xdc_Char)0x69,  /* [4077] */
    (xdc_Char)0x76,  /* [4078] */
    (xdc_Char)0x65,  /* [4079] */
    (xdc_Char)0x64,  /* [4080] */
    (xdc_Char)0x20,  /* [4081] */
    (xdc_Char)0x69,  /* [4082] */
    (xdc_Char)0x6e,  /* [4083] */
    (xdc_Char)0x76,  /* [4084] */
    (xdc_Char)0x61,  /* [4085] */
    (xdc_Char)0x6c,  /* [4086] */
    (xdc_Char)0x69,  /* [4087] */
    (xdc_Char)0x64,  /* [4088] */
    (xdc_Char)0x20,  /* [4089] */
    (xdc_Char)0x63,  /* [4090] */
    (xdc_Char)0x6f,  /* [4091] */
    (xdc_Char)0x6d,  /* [4092] */
    (xdc_Char)0x6d,  /* [4093] */
    (xdc_Char)0x61,  /* [4094] */
    (xdc_Char)0x6e,  /* [4095] */
    (xdc_Char)0x64,  /* [4096] */
    (xdc_Char)0x2c,  /* [4097] */
    (xdc_Char)0x20,  /* [4098] */
    (xdc_Char)0x69,  /* [4099] */
    (xdc_Char)0x64,  /* [4100] */
    (xdc_Char)0x3a,  /* [4101] */
    (xdc_Char)0x20,  /* [4102] */
    (xdc_Char)0x25,  /* [4103] */
    (xdc_Char)0x64,  /* [4104] */
    (xdc_Char)0x2e,  /* [4105] */
    (xdc_Char)0x0,  /* [4106] */
    (xdc_Char)0x45,  /* [4107] */
    (xdc_Char)0x5f,  /* [4108] */
    (xdc_Char)0x73,  /* [4109] */
    (xdc_Char)0x74,  /* [4110] */
    (xdc_Char)0x61,  /* [4111] */
    (xdc_Char)0x63,  /* [4112] */
    (xdc_Char)0x6b,  /* [4113] */
    (xdc_Char)0x4f,  /* [4114] */
    (xdc_Char)0x76,  /* [4115] */
    (xdc_Char)0x65,  /* [4116] */
    (xdc_Char)0x72,  /* [4117] */
    (xdc_Char)0x66,  /* [4118] */
    (xdc_Char)0x6c,  /* [4119] */
    (xdc_Char)0x6f,  /* [4120] */
    (xdc_Char)0x77,  /* [4121] */
    (xdc_Char)0x3a,  /* [4122] */
    (xdc_Char)0x20,  /* [4123] */
    (xdc_Char)0x54,  /* [4124] */
    (xdc_Char)0x61,  /* [4125] */
    (xdc_Char)0x73,  /* [4126] */
    (xdc_Char)0x6b,  /* [4127] */
    (xdc_Char)0x20,  /* [4128] */
    (xdc_Char)0x30,  /* [4129] */
    (xdc_Char)0x78,  /* [4130] */
    (xdc_Char)0x25,  /* [4131] */
    (xdc_Char)0x78,  /* [4132] */
    (xdc_Char)0x20,  /* [4133] */
    (xdc_Char)0x73,  /* [4134] */
    (xdc_Char)0x74,  /* [4135] */
    (xdc_Char)0x61,  /* [4136] */
    (xdc_Char)0x63,  /* [4137] */
    (xdc_Char)0x6b,  /* [4138] */
    (xdc_Char)0x20,  /* [4139] */
    (xdc_Char)0x6f,  /* [4140] */
    (xdc_Char)0x76,  /* [4141] */
    (xdc_Char)0x65,  /* [4142] */
    (xdc_Char)0x72,  /* [4143] */
    (xdc_Char)0x66,  /* [4144] */
    (xdc_Char)0x6c,  /* [4145] */
    (xdc_Char)0x6f,  /* [4146] */
    (xdc_Char)0x77,  /* [4147] */
    (xdc_Char)0x2e,  /* [4148] */
    (xdc_Char)0x0,  /* [4149] */
    (xdc_Char)0x45,  /* [4150] */
    (xdc_Char)0x5f,  /* [4151] */
    (xdc_Char)0x73,  /* [4152] */
    (xdc_Char)0x70,  /* [4153] */
    (xdc_Char)0x4f,  /* [4154] */
    (xdc_Char)0x75,  /* [4155] */
    (xdc_Char)0x74,  /* [4156] */
    (xdc_Char)0x4f,  /* [4157] */
    (xdc_Char)0x66,  /* [4158] */
    (xdc_Char)0x42,  /* [4159] */
    (xdc_Char)0x6f,  /* [4160] */
    (xdc_Char)0x75,  /* [4161] */
    (xdc_Char)0x6e,  /* [4162] */
    (xdc_Char)0x64,  /* [4163] */
    (xdc_Char)0x73,  /* [4164] */
    (xdc_Char)0x3a,  /* [4165] */
    (xdc_Char)0x20,  /* [4166] */
    (xdc_Char)0x54,  /* [4167] */
    (xdc_Char)0x61,  /* [4168] */
    (xdc_Char)0x73,  /* [4169] */
    (xdc_Char)0x6b,  /* [4170] */
    (xdc_Char)0x20,  /* [4171] */
    (xdc_Char)0x30,  /* [4172] */
    (xdc_Char)0x78,  /* [4173] */
    (xdc_Char)0x25,  /* [4174] */
    (xdc_Char)0x78,  /* [4175] */
    (xdc_Char)0x20,  /* [4176] */
    (xdc_Char)0x73,  /* [4177] */
    (xdc_Char)0x74,  /* [4178] */
    (xdc_Char)0x61,  /* [4179] */
    (xdc_Char)0x63,  /* [4180] */
    (xdc_Char)0x6b,  /* [4181] */
    (xdc_Char)0x20,  /* [4182] */
    (xdc_Char)0x65,  /* [4183] */
    (xdc_Char)0x72,  /* [4184] */
    (xdc_Char)0x72,  /* [4185] */
    (xdc_Char)0x6f,  /* [4186] */
    (xdc_Char)0x72,  /* [4187] */
    (xdc_Char)0x2c,  /* [4188] */
    (xdc_Char)0x20,  /* [4189] */
    (xdc_Char)0x53,  /* [4190] */
    (xdc_Char)0x50,  /* [4191] */
    (xdc_Char)0x20,  /* [4192] */
    (xdc_Char)0x3d,  /* [4193] */
    (xdc_Char)0x20,  /* [4194] */
    (xdc_Char)0x30,  /* [4195] */
    (xdc_Char)0x78,  /* [4196] */
    (xdc_Char)0x25,  /* [4197] */
    (xdc_Char)0x78,  /* [4198] */
    (xdc_Char)0x2e,  /* [4199] */
    (xdc_Char)0x0,  /* [4200] */
    (xdc_Char)0x45,  /* [4201] */
    (xdc_Char)0x5f,  /* [4202] */
    (xdc_Char)0x64,  /* [4203] */
    (xdc_Char)0x65,  /* [4204] */
    (xdc_Char)0x6c,  /* [4205] */
    (xdc_Char)0x65,  /* [4206] */
    (xdc_Char)0x74,  /* [4207] */
    (xdc_Char)0x65,  /* [4208] */
    (xdc_Char)0x4e,  /* [4209] */
    (xdc_Char)0x6f,  /* [4210] */
    (xdc_Char)0x74,  /* [4211] */
    (xdc_Char)0x41,  /* [4212] */
    (xdc_Char)0x6c,  /* [4213] */
    (xdc_Char)0x6c,  /* [4214] */
    (xdc_Char)0x6f,  /* [4215] */
    (xdc_Char)0x77,  /* [4216] */
    (xdc_Char)0x65,  /* [4217] */
    (xdc_Char)0x64,  /* [4218] */
    (xdc_Char)0x3a,  /* [4219] */
    (xdc_Char)0x20,  /* [4220] */
    (xdc_Char)0x54,  /* [4221] */
    (xdc_Char)0x61,  /* [4222] */
    (xdc_Char)0x73,  /* [4223] */
    (xdc_Char)0x6b,  /* [4224] */
    (xdc_Char)0x20,  /* [4225] */
    (xdc_Char)0x30,  /* [4226] */
    (xdc_Char)0x78,  /* [4227] */
    (xdc_Char)0x25,  /* [4228] */
    (xdc_Char)0x78,  /* [4229] */
    (xdc_Char)0x2e,  /* [4230] */
    (xdc_Char)0x0,  /* [4231] */
    (xdc_Char)0x45,  /* [4232] */
    (xdc_Char)0x5f,  /* [4233] */
    (xdc_Char)0x73,  /* [4234] */
    (xdc_Char)0x74,  /* [4235] */
    (xdc_Char)0x61,  /* [4236] */
    (xdc_Char)0x63,  /* [4237] */
    (xdc_Char)0x6b,  /* [4238] */
    (xdc_Char)0x4f,  /* [4239] */
    (xdc_Char)0x76,  /* [4240] */
    (xdc_Char)0x65,  /* [4241] */
    (xdc_Char)0x72,  /* [4242] */
    (xdc_Char)0x66,  /* [4243] */
    (xdc_Char)0x6c,  /* [4244] */
    (xdc_Char)0x6f,  /* [4245] */
    (xdc_Char)0x77,  /* [4246] */
    (xdc_Char)0x3a,  /* [4247] */
    (xdc_Char)0x20,  /* [4248] */
    (xdc_Char)0x49,  /* [4249] */
    (xdc_Char)0x53,  /* [4250] */
    (xdc_Char)0x52,  /* [4251] */
    (xdc_Char)0x20,  /* [4252] */
    (xdc_Char)0x73,  /* [4253] */
    (xdc_Char)0x74,  /* [4254] */
    (xdc_Char)0x61,  /* [4255] */
    (xdc_Char)0x63,  /* [4256] */
    (xdc_Char)0x6b,  /* [4257] */
    (xdc_Char)0x20,  /* [4258] */
    (xdc_Char)0x6f,  /* [4259] */
    (xdc_Char)0x76,  /* [4260] */
    (xdc_Char)0x65,  /* [4261] */
    (xdc_Char)0x72,  /* [4262] */
    (xdc_Char)0x66,  /* [4263] */
    (xdc_Char)0x6c,  /* [4264] */
    (xdc_Char)0x6f,  /* [4265] */
    (xdc_Char)0x77,  /* [4266] */
    (xdc_Char)0x2e,  /* [4267] */
    (xdc_Char)0x0,  /* [4268] */
    (xdc_Char)0x72,  /* [4269] */
    (xdc_Char)0x65,  /* [4270] */
    (xdc_Char)0x71,  /* [4271] */
    (xdc_Char)0x75,  /* [4272] */
    (xdc_Char)0x65,  /* [4273] */
    (xdc_Char)0x73,  /* [4274] */
    (xdc_Char)0x74,  /* [4275] */
    (xdc_Char)0x65,  /* [4276] */
    (xdc_Char)0x64,  /* [4277] */
    (xdc_Char)0x20,  /* [4278] */
    (xdc_Char)0x73,  /* [4279] */
    (xdc_Char)0x69,  /* [4280] */
    (xdc_Char)0x7a,  /* [4281] */
    (xdc_Char)0x65,  /* [4282] */
    (xdc_Char)0x20,  /* [4283] */
    (xdc_Char)0x69,  /* [4284] */
    (xdc_Char)0x73,  /* [4285] */
    (xdc_Char)0x20,  /* [4286] */
    (xdc_Char)0x74,  /* [4287] */
    (xdc_Char)0x6f,  /* [4288] */
    (xdc_Char)0x6f,  /* [4289] */
    (xdc_Char)0x20,  /* [4290] */
    (xdc_Char)0x62,  /* [4291] */
    (xdc_Char)0x69,  /* [4292] */
    (xdc_Char)0x67,  /* [4293] */
    (xdc_Char)0x3a,  /* [4294] */
    (xdc_Char)0x20,  /* [4295] */
    (xdc_Char)0x68,  /* [4296] */
    (xdc_Char)0x61,  /* [4297] */
    (xdc_Char)0x6e,  /* [4298] */
    (xdc_Char)0x64,  /* [4299] */
    (xdc_Char)0x6c,  /* [4300] */
    (xdc_Char)0x65,  /* [4301] */
    (xdc_Char)0x3d,  /* [4302] */
    (xdc_Char)0x30,  /* [4303] */
    (xdc_Char)0x78,  /* [4304] */
    (xdc_Char)0x25,  /* [4305] */
    (xdc_Char)0x78,  /* [4306] */
    (xdc_Char)0x2c,  /* [4307] */
    (xdc_Char)0x20,  /* [4308] */
    (xdc_Char)0x73,  /* [4309] */
    (xdc_Char)0x69,  /* [4310] */
    (xdc_Char)0x7a,  /* [4311] */
    (xdc_Char)0x65,  /* [4312] */
    (xdc_Char)0x3d,  /* [4313] */
    (xdc_Char)0x25,  /* [4314] */
    (xdc_Char)0x75,  /* [4315] */
    (xdc_Char)0x0,  /* [4316] */
    (xdc_Char)0x6f,  /* [4317] */
    (xdc_Char)0x75,  /* [4318] */
    (xdc_Char)0x74,  /* [4319] */
    (xdc_Char)0x20,  /* [4320] */
    (xdc_Char)0x6f,  /* [4321] */
    (xdc_Char)0x66,  /* [4322] */
    (xdc_Char)0x20,  /* [4323] */
    (xdc_Char)0x6d,  /* [4324] */
    (xdc_Char)0x65,  /* [4325] */
    (xdc_Char)0x6d,  /* [4326] */
    (xdc_Char)0x6f,  /* [4327] */
    (xdc_Char)0x72,  /* [4328] */
    (xdc_Char)0x79,  /* [4329] */
    (xdc_Char)0x3a,  /* [4330] */
    (xdc_Char)0x20,  /* [4331] */
    (xdc_Char)0x68,  /* [4332] */
    (xdc_Char)0x61,  /* [4333] */
    (xdc_Char)0x6e,  /* [4334] */
    (xdc_Char)0x64,  /* [4335] */
    (xdc_Char)0x6c,  /* [4336] */
    (xdc_Char)0x65,  /* [4337] */
    (xdc_Char)0x3d,  /* [4338] */
    (xdc_Char)0x30,  /* [4339] */
    (xdc_Char)0x78,  /* [4340] */
    (xdc_Char)0x25,  /* [4341] */
    (xdc_Char)0x78,  /* [4342] */
    (xdc_Char)0x2c,  /* [4343] */
    (xdc_Char)0x20,  /* [4344] */
    (xdc_Char)0x73,  /* [4345] */
    (xdc_Char)0x69,  /* [4346] */
    (xdc_Char)0x7a,  /* [4347] */
    (xdc_Char)0x65,  /* [4348] */
    (xdc_Char)0x3d,  /* [4349] */
    (xdc_Char)0x25,  /* [4350] */
    (xdc_Char)0x75,  /* [4351] */
    (xdc_Char)0x0,  /* [4352] */
    (xdc_Char)0x45,  /* [4353] */
    (xdc_Char)0x5f,  /* [4354] */
    (xdc_Char)0x70,  /* [4355] */
    (xdc_Char)0x72,  /* [4356] */
    (xdc_Char)0x69,  /* [4357] */
    (xdc_Char)0x6f,  /* [4358] */
    (xdc_Char)0x72,  /* [4359] */
    (xdc_Char)0x69,  /* [4360] */
    (xdc_Char)0x74,  /* [4361] */
    (xdc_Char)0x79,  /* [4362] */
    (xdc_Char)0x3a,  /* [4363] */
    (xdc_Char)0x20,  /* [4364] */
    (xdc_Char)0x54,  /* [4365] */
    (xdc_Char)0x68,  /* [4366] */
    (xdc_Char)0x72,  /* [4367] */
    (xdc_Char)0x65,  /* [4368] */
    (xdc_Char)0x61,  /* [4369] */
    (xdc_Char)0x64,  /* [4370] */
    (xdc_Char)0x20,  /* [4371] */
    (xdc_Char)0x70,  /* [4372] */
    (xdc_Char)0x72,  /* [4373] */
    (xdc_Char)0x69,  /* [4374] */
    (xdc_Char)0x6f,  /* [4375] */
    (xdc_Char)0x72,  /* [4376] */
    (xdc_Char)0x69,  /* [4377] */
    (xdc_Char)0x74,  /* [4378] */
    (xdc_Char)0x79,  /* [4379] */
    (xdc_Char)0x20,  /* [4380] */
    (xdc_Char)0x69,  /* [4381] */
    (xdc_Char)0x73,  /* [4382] */
    (xdc_Char)0x20,  /* [4383] */
    (xdc_Char)0x69,  /* [4384] */
    (xdc_Char)0x6e,  /* [4385] */
    (xdc_Char)0x76,  /* [4386] */
    (xdc_Char)0x61,  /* [4387] */
    (xdc_Char)0x6c,  /* [4388] */
    (xdc_Char)0x69,  /* [4389] */
    (xdc_Char)0x64,  /* [4390] */
    (xdc_Char)0x20,  /* [4391] */
    (xdc_Char)0x25,  /* [4392] */
    (xdc_Char)0x64,  /* [4393] */
    (xdc_Char)0x0,  /* [4394] */
    (xdc_Char)0x45,  /* [4395] */
    (xdc_Char)0x5f,  /* [4396] */
    (xdc_Char)0x61,  /* [4397] */
    (xdc_Char)0x6c,  /* [4398] */
    (xdc_Char)0x72,  /* [4399] */
    (xdc_Char)0x65,  /* [4400] */
    (xdc_Char)0x61,  /* [4401] */
    (xdc_Char)0x64,  /* [4402] */
    (xdc_Char)0x79,  /* [4403] */
    (xdc_Char)0x44,  /* [4404] */
    (xdc_Char)0x65,  /* [4405] */
    (xdc_Char)0x66,  /* [4406] */
    (xdc_Char)0x69,  /* [4407] */
    (xdc_Char)0x6e,  /* [4408] */
    (xdc_Char)0x65,  /* [4409] */
    (xdc_Char)0x64,  /* [4410] */
    (xdc_Char)0x3a,  /* [4411] */
    (xdc_Char)0x20,  /* [4412] */
    (xdc_Char)0x48,  /* [4413] */
    (xdc_Char)0x77,  /* [4414] */
    (xdc_Char)0x69,  /* [4415] */
    (xdc_Char)0x20,  /* [4416] */
    (xdc_Char)0x61,  /* [4417] */
    (xdc_Char)0x6c,  /* [4418] */
    (xdc_Char)0x72,  /* [4419] */
    (xdc_Char)0x65,  /* [4420] */
    (xdc_Char)0x61,  /* [4421] */
    (xdc_Char)0x64,  /* [4422] */
    (xdc_Char)0x79,  /* [4423] */
    (xdc_Char)0x20,  /* [4424] */
    (xdc_Char)0x64,  /* [4425] */
    (xdc_Char)0x65,  /* [4426] */
    (xdc_Char)0x66,  /* [4427] */
    (xdc_Char)0x69,  /* [4428] */
    (xdc_Char)0x6e,  /* [4429] */
    (xdc_Char)0x65,  /* [4430] */
    (xdc_Char)0x64,  /* [4431] */
    (xdc_Char)0x3a,  /* [4432] */
    (xdc_Char)0x20,  /* [4433] */
    (xdc_Char)0x69,  /* [4434] */
    (xdc_Char)0x6e,  /* [4435] */
    (xdc_Char)0x74,  /* [4436] */
    (xdc_Char)0x72,  /* [4437] */
    (xdc_Char)0x23,  /* [4438] */
    (xdc_Char)0x20,  /* [4439] */
    (xdc_Char)0x25,  /* [4440] */
    (xdc_Char)0x64,  /* [4441] */
    (xdc_Char)0x0,  /* [4442] */
    (xdc_Char)0x45,  /* [4443] */
    (xdc_Char)0x5f,  /* [4444] */
    (xdc_Char)0x68,  /* [4445] */
    (xdc_Char)0x77,  /* [4446] */
    (xdc_Char)0x69,  /* [4447] */
    (xdc_Char)0x4c,  /* [4448] */
    (xdc_Char)0x69,  /* [4449] */
    (xdc_Char)0x6d,  /* [4450] */
    (xdc_Char)0x69,  /* [4451] */
    (xdc_Char)0x74,  /* [4452] */
    (xdc_Char)0x45,  /* [4453] */
    (xdc_Char)0x78,  /* [4454] */
    (xdc_Char)0x63,  /* [4455] */
    (xdc_Char)0x65,  /* [4456] */
    (xdc_Char)0x65,  /* [4457] */
    (xdc_Char)0x64,  /* [4458] */
    (xdc_Char)0x65,  /* [4459] */
    (xdc_Char)0x64,  /* [4460] */
    (xdc_Char)0x3a,  /* [4461] */
    (xdc_Char)0x20,  /* [4462] */
    (xdc_Char)0x54,  /* [4463] */
    (xdc_Char)0x6f,  /* [4464] */
    (xdc_Char)0x6f,  /* [4465] */
    (xdc_Char)0x20,  /* [4466] */
    (xdc_Char)0x6d,  /* [4467] */
    (xdc_Char)0x61,  /* [4468] */
    (xdc_Char)0x6e,  /* [4469] */
    (xdc_Char)0x79,  /* [4470] */
    (xdc_Char)0x20,  /* [4471] */
    (xdc_Char)0x69,  /* [4472] */
    (xdc_Char)0x6e,  /* [4473] */
    (xdc_Char)0x74,  /* [4474] */
    (xdc_Char)0x65,  /* [4475] */
    (xdc_Char)0x72,  /* [4476] */
    (xdc_Char)0x72,  /* [4477] */
    (xdc_Char)0x75,  /* [4478] */
    (xdc_Char)0x70,  /* [4479] */
    (xdc_Char)0x74,  /* [4480] */
    (xdc_Char)0x73,  /* [4481] */
    (xdc_Char)0x20,  /* [4482] */
    (xdc_Char)0x64,  /* [4483] */
    (xdc_Char)0x65,  /* [4484] */
    (xdc_Char)0x66,  /* [4485] */
    (xdc_Char)0x69,  /* [4486] */
    (xdc_Char)0x6e,  /* [4487] */
    (xdc_Char)0x65,  /* [4488] */
    (xdc_Char)0x64,  /* [4489] */
    (xdc_Char)0x0,  /* [4490] */
    (xdc_Char)0x45,  /* [4491] */
    (xdc_Char)0x5f,  /* [4492] */
    (xdc_Char)0x65,  /* [4493] */
    (xdc_Char)0x78,  /* [4494] */
    (xdc_Char)0x63,  /* [4495] */
    (xdc_Char)0x65,  /* [4496] */
    (xdc_Char)0x70,  /* [4497] */
    (xdc_Char)0x74,  /* [4498] */
    (xdc_Char)0x69,  /* [4499] */
    (xdc_Char)0x6f,  /* [4500] */
    (xdc_Char)0x6e,  /* [4501] */
    (xdc_Char)0x3a,  /* [4502] */
    (xdc_Char)0x20,  /* [4503] */
    (xdc_Char)0x69,  /* [4504] */
    (xdc_Char)0x64,  /* [4505] */
    (xdc_Char)0x20,  /* [4506] */
    (xdc_Char)0x3d,  /* [4507] */
    (xdc_Char)0x20,  /* [4508] */
    (xdc_Char)0x25,  /* [4509] */
    (xdc_Char)0x64,  /* [4510] */
    (xdc_Char)0x2c,  /* [4511] */
    (xdc_Char)0x20,  /* [4512] */
    (xdc_Char)0x70,  /* [4513] */
    (xdc_Char)0x63,  /* [4514] */
    (xdc_Char)0x20,  /* [4515] */
    (xdc_Char)0x3d,  /* [4516] */
    (xdc_Char)0x20,  /* [4517] */
    (xdc_Char)0x25,  /* [4518] */
    (xdc_Char)0x30,  /* [4519] */
    (xdc_Char)0x38,  /* [4520] */
    (xdc_Char)0x78,  /* [4521] */
    (xdc_Char)0x2e,  /* [4522] */
    (xdc_Char)0xa,  /* [4523] */
    (xdc_Char)0x54,  /* [4524] */
    (xdc_Char)0x6f,  /* [4525] */
    (xdc_Char)0x20,  /* [4526] */
    (xdc_Char)0x73,  /* [4527] */
    (xdc_Char)0x65,  /* [4528] */
    (xdc_Char)0x65,  /* [4529] */
    (xdc_Char)0x20,  /* [4530] */
    (xdc_Char)0x6d,  /* [4531] */
    (xdc_Char)0x6f,  /* [4532] */
    (xdc_Char)0x72,  /* [4533] */
    (xdc_Char)0x65,  /* [4534] */
    (xdc_Char)0x20,  /* [4535] */
    (xdc_Char)0x65,  /* [4536] */
    (xdc_Char)0x78,  /* [4537] */
    (xdc_Char)0x63,  /* [4538] */
    (xdc_Char)0x65,  /* [4539] */
    (xdc_Char)0x70,  /* [4540] */
    (xdc_Char)0x74,  /* [4541] */
    (xdc_Char)0x69,  /* [4542] */
    (xdc_Char)0x6f,  /* [4543] */
    (xdc_Char)0x6e,  /* [4544] */
    (xdc_Char)0x20,  /* [4545] */
    (xdc_Char)0x64,  /* [4546] */
    (xdc_Char)0x65,  /* [4547] */
    (xdc_Char)0x74,  /* [4548] */
    (xdc_Char)0x61,  /* [4549] */
    (xdc_Char)0x69,  /* [4550] */
    (xdc_Char)0x6c,  /* [4551] */
    (xdc_Char)0x2c,  /* [4552] */
    (xdc_Char)0x20,  /* [4553] */
    (xdc_Char)0x73,  /* [4554] */
    (xdc_Char)0x65,  /* [4555] */
    (xdc_Char)0x74,  /* [4556] */
    (xdc_Char)0x20,  /* [4557] */
    (xdc_Char)0x74,  /* [4558] */
    (xdc_Char)0x69,  /* [4559] */
    (xdc_Char)0x2e,  /* [4560] */
    (xdc_Char)0x73,  /* [4561] */
    (xdc_Char)0x79,  /* [4562] */
    (xdc_Char)0x73,  /* [4563] */
    (xdc_Char)0x62,  /* [4564] */
    (xdc_Char)0x69,  /* [4565] */
    (xdc_Char)0x6f,  /* [4566] */
    (xdc_Char)0x73,  /* [4567] */
    (xdc_Char)0x2e,  /* [4568] */
    (xdc_Char)0x66,  /* [4569] */
    (xdc_Char)0x61,  /* [4570] */
    (xdc_Char)0x6d,  /* [4571] */
    (xdc_Char)0x69,  /* [4572] */
    (xdc_Char)0x6c,  /* [4573] */
    (xdc_Char)0x79,  /* [4574] */
    (xdc_Char)0x2e,  /* [4575] */
    (xdc_Char)0x61,  /* [4576] */
    (xdc_Char)0x72,  /* [4577] */
    (xdc_Char)0x6d,  /* [4578] */
    (xdc_Char)0x2e,  /* [4579] */
    (xdc_Char)0x6d,  /* [4580] */
    (xdc_Char)0x33,  /* [4581] */
    (xdc_Char)0x2e,  /* [4582] */
    (xdc_Char)0x48,  /* [4583] */
    (xdc_Char)0x77,  /* [4584] */
    (xdc_Char)0x69,  /* [4585] */
    (xdc_Char)0x2e,  /* [4586] */
    (xdc_Char)0x65,  /* [4587] */
    (xdc_Char)0x6e,  /* [4588] */
    (xdc_Char)0x61,  /* [4589] */
    (xdc_Char)0x62,  /* [4590] */
    (xdc_Char)0x6c,  /* [4591] */
    (xdc_Char)0x65,  /* [4592] */
    (xdc_Char)0x45,  /* [4593] */
    (xdc_Char)0x78,  /* [4594] */
    (xdc_Char)0x63,  /* [4595] */
    (xdc_Char)0x65,  /* [4596] */
    (xdc_Char)0x70,  /* [4597] */
    (xdc_Char)0x74,  /* [4598] */
    (xdc_Char)0x69,  /* [4599] */
    (xdc_Char)0x6f,  /* [4600] */
    (xdc_Char)0x6e,  /* [4601] */
    (xdc_Char)0x20,  /* [4602] */
    (xdc_Char)0x3d,  /* [4603] */
    (xdc_Char)0x20,  /* [4604] */
    (xdc_Char)0x74,  /* [4605] */
    (xdc_Char)0x72,  /* [4606] */
    (xdc_Char)0x75,  /* [4607] */
    (xdc_Char)0x65,  /* [4608] */
    (xdc_Char)0x20,  /* [4609] */
    (xdc_Char)0x6f,  /* [4610] */
    (xdc_Char)0x72,  /* [4611] */
    (xdc_Char)0x2c,  /* [4612] */
    (xdc_Char)0xa,  /* [4613] */
    (xdc_Char)0x65,  /* [4614] */
    (xdc_Char)0x78,  /* [4615] */
    (xdc_Char)0x61,  /* [4616] */
    (xdc_Char)0x6d,  /* [4617] */
    (xdc_Char)0x69,  /* [4618] */
    (xdc_Char)0x6e,  /* [4619] */
    (xdc_Char)0x65,  /* [4620] */
    (xdc_Char)0x20,  /* [4621] */
    (xdc_Char)0x74,  /* [4622] */
    (xdc_Char)0x68,  /* [4623] */
    (xdc_Char)0x65,  /* [4624] */
    (xdc_Char)0x20,  /* [4625] */
    (xdc_Char)0x45,  /* [4626] */
    (xdc_Char)0x78,  /* [4627] */
    (xdc_Char)0x63,  /* [4628] */
    (xdc_Char)0x65,  /* [4629] */
    (xdc_Char)0x70,  /* [4630] */
    (xdc_Char)0x74,  /* [4631] */
    (xdc_Char)0x69,  /* [4632] */
    (xdc_Char)0x6f,  /* [4633] */
    (xdc_Char)0x6e,  /* [4634] */
    (xdc_Char)0x20,  /* [4635] */
    (xdc_Char)0x76,  /* [4636] */
    (xdc_Char)0x69,  /* [4637] */
    (xdc_Char)0x65,  /* [4638] */
    (xdc_Char)0x77,  /* [4639] */
    (xdc_Char)0x20,  /* [4640] */
    (xdc_Char)0x66,  /* [4641] */
    (xdc_Char)0x6f,  /* [4642] */
    (xdc_Char)0x72,  /* [4643] */
    (xdc_Char)0x20,  /* [4644] */
    (xdc_Char)0x74,  /* [4645] */
    (xdc_Char)0x68,  /* [4646] */
    (xdc_Char)0x65,  /* [4647] */
    (xdc_Char)0x20,  /* [4648] */
    (xdc_Char)0x74,  /* [4649] */
    (xdc_Char)0x69,  /* [4650] */
    (xdc_Char)0x2e,  /* [4651] */
    (xdc_Char)0x73,  /* [4652] */
    (xdc_Char)0x79,  /* [4653] */
    (xdc_Char)0x73,  /* [4654] */
    (xdc_Char)0x62,  /* [4655] */
    (xdc_Char)0x69,  /* [4656] */
    (xdc_Char)0x6f,  /* [4657] */
    (xdc_Char)0x73,  /* [4658] */
    (xdc_Char)0x2e,  /* [4659] */
    (xdc_Char)0x66,  /* [4660] */
    (xdc_Char)0x61,  /* [4661] */
    (xdc_Char)0x6d,  /* [4662] */
    (xdc_Char)0x69,  /* [4663] */
    (xdc_Char)0x6c,  /* [4664] */
    (xdc_Char)0x79,  /* [4665] */
    (xdc_Char)0x2e,  /* [4666] */
    (xdc_Char)0x61,  /* [4667] */
    (xdc_Char)0x72,  /* [4668] */
    (xdc_Char)0x6d,  /* [4669] */
    (xdc_Char)0x2e,  /* [4670] */
    (xdc_Char)0x6d,  /* [4671] */
    (xdc_Char)0x33,  /* [4672] */
    (xdc_Char)0x2e,  /* [4673] */
    (xdc_Char)0x48,  /* [4674] */
    (xdc_Char)0x77,  /* [4675] */
    (xdc_Char)0x69,  /* [4676] */
    (xdc_Char)0x20,  /* [4677] */
    (xdc_Char)0x6d,  /* [4678] */
    (xdc_Char)0x6f,  /* [4679] */
    (xdc_Char)0x64,  /* [4680] */
    (xdc_Char)0x75,  /* [4681] */
    (xdc_Char)0x6c,  /* [4682] */
    (xdc_Char)0x65,  /* [4683] */
    (xdc_Char)0x20,  /* [4684] */
    (xdc_Char)0x75,  /* [4685] */
    (xdc_Char)0x73,  /* [4686] */
    (xdc_Char)0x69,  /* [4687] */
    (xdc_Char)0x6e,  /* [4688] */
    (xdc_Char)0x67,  /* [4689] */
    (xdc_Char)0x20,  /* [4690] */
    (xdc_Char)0x52,  /* [4691] */
    (xdc_Char)0x4f,  /* [4692] */
    (xdc_Char)0x56,  /* [4693] */
    (xdc_Char)0x2e,  /* [4694] */
    (xdc_Char)0x0,  /* [4695] */
    (xdc_Char)0x45,  /* [4696] */
    (xdc_Char)0x5f,  /* [4697] */
    (xdc_Char)0x6e,  /* [4698] */
    (xdc_Char)0x6f,  /* [4699] */
    (xdc_Char)0x49,  /* [4700] */
    (xdc_Char)0x73,  /* [4701] */
    (xdc_Char)0x72,  /* [4702] */
    (xdc_Char)0x3a,  /* [4703] */
    (xdc_Char)0x20,  /* [4704] */
    (xdc_Char)0x69,  /* [4705] */
    (xdc_Char)0x64,  /* [4706] */
    (xdc_Char)0x20,  /* [4707] */
    (xdc_Char)0x3d,  /* [4708] */
    (xdc_Char)0x20,  /* [4709] */
    (xdc_Char)0x25,  /* [4710] */
    (xdc_Char)0x64,  /* [4711] */
    (xdc_Char)0x2c,  /* [4712] */
    (xdc_Char)0x20,  /* [4713] */
    (xdc_Char)0x70,  /* [4714] */
    (xdc_Char)0x63,  /* [4715] */
    (xdc_Char)0x20,  /* [4716] */
    (xdc_Char)0x3d,  /* [4717] */
    (xdc_Char)0x20,  /* [4718] */
    (xdc_Char)0x25,  /* [4719] */
    (xdc_Char)0x30,  /* [4720] */
    (xdc_Char)0x38,  /* [4721] */
    (xdc_Char)0x78,  /* [4722] */
    (xdc_Char)0x0,  /* [4723] */
    (xdc_Char)0x45,  /* [4724] */
    (xdc_Char)0x5f,  /* [4725] */
    (xdc_Char)0x4e,  /* [4726] */
    (xdc_Char)0x4d,  /* [4727] */
    (xdc_Char)0x49,  /* [4728] */
    (xdc_Char)0x3a,  /* [4729] */
    (xdc_Char)0x20,  /* [4730] */
    (xdc_Char)0x25,  /* [4731] */
    (xdc_Char)0x73,  /* [4732] */
    (xdc_Char)0x0,  /* [4733] */
    (xdc_Char)0x45,  /* [4734] */
    (xdc_Char)0x5f,  /* [4735] */
    (xdc_Char)0x68,  /* [4736] */
    (xdc_Char)0x61,  /* [4737] */
    (xdc_Char)0x72,  /* [4738] */
    (xdc_Char)0x64,  /* [4739] */
    (xdc_Char)0x46,  /* [4740] */
    (xdc_Char)0x61,  /* [4741] */
    (xdc_Char)0x75,  /* [4742] */
    (xdc_Char)0x6c,  /* [4743] */
    (xdc_Char)0x74,  /* [4744] */
    (xdc_Char)0x3a,  /* [4745] */
    (xdc_Char)0x20,  /* [4746] */
    (xdc_Char)0x25,  /* [4747] */
    (xdc_Char)0x73,  /* [4748] */
    (xdc_Char)0x0,  /* [4749] */
    (xdc_Char)0x45,  /* [4750] */
    (xdc_Char)0x5f,  /* [4751] */
    (xdc_Char)0x6d,  /* [4752] */
    (xdc_Char)0x65,  /* [4753] */
    (xdc_Char)0x6d,  /* [4754] */
    (xdc_Char)0x46,  /* [4755] */
    (xdc_Char)0x61,  /* [4756] */
    (xdc_Char)0x75,  /* [4757] */
    (xdc_Char)0x6c,  /* [4758] */
    (xdc_Char)0x74,  /* [4759] */
    (xdc_Char)0x3a,  /* [4760] */
    (xdc_Char)0x20,  /* [4761] */
    (xdc_Char)0x25,  /* [4762] */
    (xdc_Char)0x73,  /* [4763] */
    (xdc_Char)0x2c,  /* [4764] */
    (xdc_Char)0x20,  /* [4765] */
    (xdc_Char)0x61,  /* [4766] */
    (xdc_Char)0x64,  /* [4767] */
    (xdc_Char)0x64,  /* [4768] */
    (xdc_Char)0x72,  /* [4769] */
    (xdc_Char)0x65,  /* [4770] */
    (xdc_Char)0x73,  /* [4771] */
    (xdc_Char)0x73,  /* [4772] */
    (xdc_Char)0x3a,  /* [4773] */
    (xdc_Char)0x20,  /* [4774] */
    (xdc_Char)0x25,  /* [4775] */
    (xdc_Char)0x30,  /* [4776] */
    (xdc_Char)0x38,  /* [4777] */
    (xdc_Char)0x78,  /* [4778] */
    (xdc_Char)0x0,  /* [4779] */
    (xdc_Char)0x45,  /* [4780] */
    (xdc_Char)0x5f,  /* [4781] */
    (xdc_Char)0x62,  /* [4782] */
    (xdc_Char)0x75,  /* [4783] */
    (xdc_Char)0x73,  /* [4784] */
    (xdc_Char)0x46,  /* [4785] */
    (xdc_Char)0x61,  /* [4786] */
    (xdc_Char)0x75,  /* [4787] */
    (xdc_Char)0x6c,  /* [4788] */
    (xdc_Char)0x74,  /* [4789] */
    (xdc_Char)0x3a,  /* [4790] */
    (xdc_Char)0x20,  /* [4791] */
    (xdc_Char)0x25,  /* [4792] */
    (xdc_Char)0x73,  /* [4793] */
    (xdc_Char)0x2c,  /* [4794] */
    (xdc_Char)0x20,  /* [4795] */
    (xdc_Char)0x61,  /* [4796] */
    (xdc_Char)0x64,  /* [4797] */
    (xdc_Char)0x64,  /* [4798] */
    (xdc_Char)0x72,  /* [4799] */
    (xdc_Char)0x65,  /* [4800] */
    (xdc_Char)0x73,  /* [4801] */
    (xdc_Char)0x73,  /* [4802] */
    (xdc_Char)0x3a,  /* [4803] */
    (xdc_Char)0x20,  /* [4804] */
    (xdc_Char)0x25,  /* [4805] */
    (xdc_Char)0x30,  /* [4806] */
    (xdc_Char)0x38,  /* [4807] */
    (xdc_Char)0x78,  /* [4808] */
    (xdc_Char)0x0,  /* [4809] */
    (xdc_Char)0x45,  /* [4810] */
    (xdc_Char)0x5f,  /* [4811] */
    (xdc_Char)0x75,  /* [4812] */
    (xdc_Char)0x73,  /* [4813] */
    (xdc_Char)0x61,  /* [4814] */
    (xdc_Char)0x67,  /* [4815] */
    (xdc_Char)0x65,  /* [4816] */
    (xdc_Char)0x46,  /* [4817] */
    (xdc_Char)0x61,  /* [4818] */
    (xdc_Char)0x75,  /* [4819] */
    (xdc_Char)0x6c,  /* [4820] */
    (xdc_Char)0x74,  /* [4821] */
    (xdc_Char)0x3a,  /* [4822] */
    (xdc_Char)0x20,  /* [4823] */
    (xdc_Char)0x25,  /* [4824] */
    (xdc_Char)0x73,  /* [4825] */
    (xdc_Char)0x0,  /* [4826] */
    (xdc_Char)0x45,  /* [4827] */
    (xdc_Char)0x5f,  /* [4828] */
    (xdc_Char)0x73,  /* [4829] */
    (xdc_Char)0x76,  /* [4830] */
    (xdc_Char)0x43,  /* [4831] */
    (xdc_Char)0x61,  /* [4832] */
    (xdc_Char)0x6c,  /* [4833] */
    (xdc_Char)0x6c,  /* [4834] */
    (xdc_Char)0x3a,  /* [4835] */
    (xdc_Char)0x20,  /* [4836] */
    (xdc_Char)0x73,  /* [4837] */
    (xdc_Char)0x76,  /* [4838] */
    (xdc_Char)0x4e,  /* [4839] */
    (xdc_Char)0x75,  /* [4840] */
    (xdc_Char)0x6d,  /* [4841] */
    (xdc_Char)0x20,  /* [4842] */
    (xdc_Char)0x3d,  /* [4843] */
    (xdc_Char)0x20,  /* [4844] */
    (xdc_Char)0x25,  /* [4845] */
    (xdc_Char)0x64,  /* [4846] */
    (xdc_Char)0x0,  /* [4847] */
    (xdc_Char)0x45,  /* [4848] */
    (xdc_Char)0x5f,  /* [4849] */
    (xdc_Char)0x64,  /* [4850] */
    (xdc_Char)0x65,  /* [4851] */
    (xdc_Char)0x62,  /* [4852] */
    (xdc_Char)0x75,  /* [4853] */
    (xdc_Char)0x67,  /* [4854] */
    (xdc_Char)0x4d,  /* [4855] */
    (xdc_Char)0x6f,  /* [4856] */
    (xdc_Char)0x6e,  /* [4857] */
    (xdc_Char)0x3a,  /* [4858] */
    (xdc_Char)0x20,  /* [4859] */
    (xdc_Char)0x25,  /* [4860] */
    (xdc_Char)0x73,  /* [4861] */
    (xdc_Char)0x0,  /* [4862] */
    (xdc_Char)0x45,  /* [4863] */
    (xdc_Char)0x5f,  /* [4864] */
    (xdc_Char)0x72,  /* [4865] */
    (xdc_Char)0x65,  /* [4866] */
    (xdc_Char)0x73,  /* [4867] */
    (xdc_Char)0x65,  /* [4868] */
    (xdc_Char)0x72,  /* [4869] */
    (xdc_Char)0x76,  /* [4870] */
    (xdc_Char)0x65,  /* [4871] */
    (xdc_Char)0x64,  /* [4872] */
    (xdc_Char)0x3a,  /* [4873] */
    (xdc_Char)0x20,  /* [4874] */
    (xdc_Char)0x25,  /* [4875] */
    (xdc_Char)0x73,  /* [4876] */
    (xdc_Char)0x20,  /* [4877] */
    (xdc_Char)0x25,  /* [4878] */
    (xdc_Char)0x64,  /* [4879] */
    (xdc_Char)0x0,  /* [4880] */
    (xdc_Char)0x45,  /* [4881] */
    (xdc_Char)0x5f,  /* [4882] */
    (xdc_Char)0x69,  /* [4883] */
    (xdc_Char)0x6e,  /* [4884] */
    (xdc_Char)0x76,  /* [4885] */
    (xdc_Char)0x61,  /* [4886] */
    (xdc_Char)0x6c,  /* [4887] */
    (xdc_Char)0x69,  /* [4888] */
    (xdc_Char)0x64,  /* [4889] */
    (xdc_Char)0x54,  /* [4890] */
    (xdc_Char)0x69,  /* [4891] */
    (xdc_Char)0x6d,  /* [4892] */
    (xdc_Char)0x65,  /* [4893] */
    (xdc_Char)0x72,  /* [4894] */
    (xdc_Char)0x3a,  /* [4895] */
    (xdc_Char)0x20,  /* [4896] */
    (xdc_Char)0x49,  /* [4897] */
    (xdc_Char)0x6e,  /* [4898] */
    (xdc_Char)0x76,  /* [4899] */
    (xdc_Char)0x61,  /* [4900] */
    (xdc_Char)0x6c,  /* [4901] */
    (xdc_Char)0x69,  /* [4902] */
    (xdc_Char)0x64,  /* [4903] */
    (xdc_Char)0x20,  /* [4904] */
    (xdc_Char)0x54,  /* [4905] */
    (xdc_Char)0x69,  /* [4906] */
    (xdc_Char)0x6d,  /* [4907] */
    (xdc_Char)0x65,  /* [4908] */
    (xdc_Char)0x72,  /* [4909] */
    (xdc_Char)0x20,  /* [4910] */
    (xdc_Char)0x49,  /* [4911] */
    (xdc_Char)0x64,  /* [4912] */
    (xdc_Char)0x20,  /* [4913] */
    (xdc_Char)0x25,  /* [4914] */
    (xdc_Char)0x64,  /* [4915] */
    (xdc_Char)0x0,  /* [4916] */
    (xdc_Char)0x45,  /* [4917] */
    (xdc_Char)0x5f,  /* [4918] */
    (xdc_Char)0x6e,  /* [4919] */
    (xdc_Char)0x6f,  /* [4920] */
    (xdc_Char)0x74,  /* [4921] */
    (xdc_Char)0x41,  /* [4922] */
    (xdc_Char)0x76,  /* [4923] */
    (xdc_Char)0x61,  /* [4924] */
    (xdc_Char)0x69,  /* [4925] */
    (xdc_Char)0x6c,  /* [4926] */
    (xdc_Char)0x61,  /* [4927] */
    (xdc_Char)0x62,  /* [4928] */
    (xdc_Char)0x6c,  /* [4929] */
    (xdc_Char)0x65,  /* [4930] */
    (xdc_Char)0x3a,  /* [4931] */
    (xdc_Char)0x20,  /* [4932] */
    (xdc_Char)0x54,  /* [4933] */
    (xdc_Char)0x69,  /* [4934] */
    (xdc_Char)0x6d,  /* [4935] */
    (xdc_Char)0x65,  /* [4936] */
    (xdc_Char)0x72,  /* [4937] */
    (xdc_Char)0x20,  /* [4938] */
    (xdc_Char)0x6e,  /* [4939] */
    (xdc_Char)0x6f,  /* [4940] */
    (xdc_Char)0x74,  /* [4941] */
    (xdc_Char)0x20,  /* [4942] */
    (xdc_Char)0x61,  /* [4943] */
    (xdc_Char)0x76,  /* [4944] */
    (xdc_Char)0x61,  /* [4945] */
    (xdc_Char)0x69,  /* [4946] */
    (xdc_Char)0x6c,  /* [4947] */
    (xdc_Char)0x61,  /* [4948] */
    (xdc_Char)0x62,  /* [4949] */
    (xdc_Char)0x6c,  /* [4950] */
    (xdc_Char)0x65,  /* [4951] */
    (xdc_Char)0x20,  /* [4952] */
    (xdc_Char)0x25,  /* [4953] */
    (xdc_Char)0x64,  /* [4954] */
    (xdc_Char)0x0,  /* [4955] */
    (xdc_Char)0x45,  /* [4956] */
    (xdc_Char)0x5f,  /* [4957] */
    (xdc_Char)0x63,  /* [4958] */
    (xdc_Char)0x61,  /* [4959] */
    (xdc_Char)0x6e,  /* [4960] */
    (xdc_Char)0x6e,  /* [4961] */
    (xdc_Char)0x6f,  /* [4962] */
    (xdc_Char)0x74,  /* [4963] */
    (xdc_Char)0x53,  /* [4964] */
    (xdc_Char)0x75,  /* [4965] */
    (xdc_Char)0x70,  /* [4966] */
    (xdc_Char)0x70,  /* [4967] */
    (xdc_Char)0x6f,  /* [4968] */
    (xdc_Char)0x72,  /* [4969] */
    (xdc_Char)0x74,  /* [4970] */
    (xdc_Char)0x3a,  /* [4971] */
    (xdc_Char)0x20,  /* [4972] */
    (xdc_Char)0x54,  /* [4973] */
    (xdc_Char)0x69,  /* [4974] */
    (xdc_Char)0x6d,  /* [4975] */
    (xdc_Char)0x65,  /* [4976] */
    (xdc_Char)0x72,  /* [4977] */
    (xdc_Char)0x20,  /* [4978] */
    (xdc_Char)0x63,  /* [4979] */
    (xdc_Char)0x61,  /* [4980] */
    (xdc_Char)0x6e,  /* [4981] */
    (xdc_Char)0x6e,  /* [4982] */
    (xdc_Char)0x6f,  /* [4983] */
    (xdc_Char)0x74,  /* [4984] */
    (xdc_Char)0x20,  /* [4985] */
    (xdc_Char)0x73,  /* [4986] */
    (xdc_Char)0x75,  /* [4987] */
    (xdc_Char)0x70,  /* [4988] */
    (xdc_Char)0x70,  /* [4989] */
    (xdc_Char)0x6f,  /* [4990] */
    (xdc_Char)0x72,  /* [4991] */
    (xdc_Char)0x74,  /* [4992] */
    (xdc_Char)0x20,  /* [4993] */
    (xdc_Char)0x72,  /* [4994] */
    (xdc_Char)0x65,  /* [4995] */
    (xdc_Char)0x71,  /* [4996] */
    (xdc_Char)0x75,  /* [4997] */
    (xdc_Char)0x65,  /* [4998] */
    (xdc_Char)0x73,  /* [4999] */
    (xdc_Char)0x74,  /* [5000] */
    (xdc_Char)0x65,  /* [5001] */
    (xdc_Char)0x64,  /* [5002] */
    (xdc_Char)0x20,  /* [5003] */
    (xdc_Char)0x70,  /* [5004] */
    (xdc_Char)0x65,  /* [5005] */
    (xdc_Char)0x72,  /* [5006] */
    (xdc_Char)0x69,  /* [5007] */
    (xdc_Char)0x6f,  /* [5008] */
    (xdc_Char)0x64,  /* [5009] */
    (xdc_Char)0x20,  /* [5010] */
    (xdc_Char)0x25,  /* [5011] */
    (xdc_Char)0x64,  /* [5012] */
    (xdc_Char)0x0,  /* [5013] */
    (xdc_Char)0x45,  /* [5014] */
    (xdc_Char)0x5f,  /* [5015] */
    (xdc_Char)0x6e,  /* [5016] */
    (xdc_Char)0x6f,  /* [5017] */
    (xdc_Char)0x61,  /* [5018] */
    (xdc_Char)0x6c,  /* [5019] */
    (xdc_Char)0x74,  /* [5020] */
    (xdc_Char)0x63,  /* [5021] */
    (xdc_Char)0x6c,  /* [5022] */
    (xdc_Char)0x6b,  /* [5023] */
    (xdc_Char)0x3a,  /* [5024] */
    (xdc_Char)0x20,  /* [5025] */
    (xdc_Char)0x54,  /* [5026] */
    (xdc_Char)0x69,  /* [5027] */
    (xdc_Char)0x6d,  /* [5028] */
    (xdc_Char)0x65,  /* [5029] */
    (xdc_Char)0x72,  /* [5030] */
    (xdc_Char)0x20,  /* [5031] */
    (xdc_Char)0x64,  /* [5032] */
    (xdc_Char)0x6f,  /* [5033] */
    (xdc_Char)0x65,  /* [5034] */
    (xdc_Char)0x73,  /* [5035] */
    (xdc_Char)0x20,  /* [5036] */
    (xdc_Char)0x6e,  /* [5037] */
    (xdc_Char)0x6f,  /* [5038] */
    (xdc_Char)0x74,  /* [5039] */
    (xdc_Char)0x20,  /* [5040] */
    (xdc_Char)0x73,  /* [5041] */
    (xdc_Char)0x75,  /* [5042] */
    (xdc_Char)0x70,  /* [5043] */
    (xdc_Char)0x70,  /* [5044] */
    (xdc_Char)0x6f,  /* [5045] */
    (xdc_Char)0x72,  /* [5046] */
    (xdc_Char)0x74,  /* [5047] */
    (xdc_Char)0x20,  /* [5048] */
    (xdc_Char)0x61,  /* [5049] */
    (xdc_Char)0x6c,  /* [5050] */
    (xdc_Char)0x74,  /* [5051] */
    (xdc_Char)0x63,  /* [5052] */
    (xdc_Char)0x6c,  /* [5053] */
    (xdc_Char)0x6b,  /* [5054] */
    (xdc_Char)0x0,  /* [5055] */
    (xdc_Char)0x3c,  /* [5056] */
    (xdc_Char)0x2d,  /* [5057] */
    (xdc_Char)0x2d,  /* [5058] */
    (xdc_Char)0x20,  /* [5059] */
    (xdc_Char)0x63,  /* [5060] */
    (xdc_Char)0x6f,  /* [5061] */
    (xdc_Char)0x6e,  /* [5062] */
    (xdc_Char)0x73,  /* [5063] */
    (xdc_Char)0x74,  /* [5064] */
    (xdc_Char)0x72,  /* [5065] */
    (xdc_Char)0x75,  /* [5066] */
    (xdc_Char)0x63,  /* [5067] */
    (xdc_Char)0x74,  /* [5068] */
    (xdc_Char)0x3a,  /* [5069] */
    (xdc_Char)0x20,  /* [5070] */
    (xdc_Char)0x25,  /* [5071] */
    (xdc_Char)0x70,  /* [5072] */
    (xdc_Char)0x28,  /* [5073] */
    (xdc_Char)0x27,  /* [5074] */
    (xdc_Char)0x25,  /* [5075] */
    (xdc_Char)0x73,  /* [5076] */
    (xdc_Char)0x27,  /* [5077] */
    (xdc_Char)0x29,  /* [5078] */
    (xdc_Char)0x0,  /* [5079] */
    (xdc_Char)0x3c,  /* [5080] */
    (xdc_Char)0x2d,  /* [5081] */
    (xdc_Char)0x2d,  /* [5082] */
    (xdc_Char)0x20,  /* [5083] */
    (xdc_Char)0x63,  /* [5084] */
    (xdc_Char)0x72,  /* [5085] */
    (xdc_Char)0x65,  /* [5086] */
    (xdc_Char)0x61,  /* [5087] */
    (xdc_Char)0x74,  /* [5088] */
    (xdc_Char)0x65,  /* [5089] */
    (xdc_Char)0x3a,  /* [5090] */
    (xdc_Char)0x20,  /* [5091] */
    (xdc_Char)0x25,  /* [5092] */
    (xdc_Char)0x70,  /* [5093] */
    (xdc_Char)0x28,  /* [5094] */
    (xdc_Char)0x27,  /* [5095] */
    (xdc_Char)0x25,  /* [5096] */
    (xdc_Char)0x73,  /* [5097] */
    (xdc_Char)0x27,  /* [5098] */
    (xdc_Char)0x29,  /* [5099] */
    (xdc_Char)0x0,  /* [5100] */
    (xdc_Char)0x2d,  /* [5101] */
    (xdc_Char)0x2d,  /* [5102] */
    (xdc_Char)0x3e,  /* [5103] */
    (xdc_Char)0x20,  /* [5104] */
    (xdc_Char)0x64,  /* [5105] */
    (xdc_Char)0x65,  /* [5106] */
    (xdc_Char)0x73,  /* [5107] */
    (xdc_Char)0x74,  /* [5108] */
    (xdc_Char)0x72,  /* [5109] */
    (xdc_Char)0x75,  /* [5110] */
    (xdc_Char)0x63,  /* [5111] */
    (xdc_Char)0x74,  /* [5112] */
    (xdc_Char)0x3a,  /* [5113] */
    (xdc_Char)0x20,  /* [5114] */
    (xdc_Char)0x28,  /* [5115] */
    (xdc_Char)0x25,  /* [5116] */
    (xdc_Char)0x70,  /* [5117] */
    (xdc_Char)0x29,  /* [5118] */
    (xdc_Char)0x0,  /* [5119] */
    (xdc_Char)0x2d,  /* [5120] */
    (xdc_Char)0x2d,  /* [5121] */
    (xdc_Char)0x3e,  /* [5122] */
    (xdc_Char)0x20,  /* [5123] */
    (xdc_Char)0x64,  /* [5124] */
    (xdc_Char)0x65,  /* [5125] */
    (xdc_Char)0x6c,  /* [5126] */
    (xdc_Char)0x65,  /* [5127] */
    (xdc_Char)0x74,  /* [5128] */
    (xdc_Char)0x65,  /* [5129] */
    (xdc_Char)0x3a,  /* [5130] */
    (xdc_Char)0x20,  /* [5131] */
    (xdc_Char)0x28,  /* [5132] */
    (xdc_Char)0x25,  /* [5133] */
    (xdc_Char)0x70,  /* [5134] */
    (xdc_Char)0x29,  /* [5135] */
    (xdc_Char)0x0,  /* [5136] */
    (xdc_Char)0x45,  /* [5137] */
    (xdc_Char)0x52,  /* [5138] */
    (xdc_Char)0x52,  /* [5139] */
    (xdc_Char)0x4f,  /* [5140] */
    (xdc_Char)0x52,  /* [5141] */
    (xdc_Char)0x3a,  /* [5142] */
    (xdc_Char)0x20,  /* [5143] */
    (xdc_Char)0x25,  /* [5144] */
    (xdc_Char)0x24,  /* [5145] */
    (xdc_Char)0x46,  /* [5146] */
    (xdc_Char)0x25,  /* [5147] */
    (xdc_Char)0x24,  /* [5148] */
    (xdc_Char)0x53,  /* [5149] */
    (xdc_Char)0x0,  /* [5150] */
    (xdc_Char)0x57,  /* [5151] */
    (xdc_Char)0x41,  /* [5152] */
    (xdc_Char)0x52,  /* [5153] */
    (xdc_Char)0x4e,  /* [5154] */
    (xdc_Char)0x49,  /* [5155] */
    (xdc_Char)0x4e,  /* [5156] */
    (xdc_Char)0x47,  /* [5157] */
    (xdc_Char)0x3a,  /* [5158] */
    (xdc_Char)0x20,  /* [5159] */
    (xdc_Char)0x25,  /* [5160] */
    (xdc_Char)0x24,  /* [5161] */
    (xdc_Char)0x46,  /* [5162] */
    (xdc_Char)0x25,  /* [5163] */
    (xdc_Char)0x24,  /* [5164] */
    (xdc_Char)0x53,  /* [5165] */
    (xdc_Char)0x0,  /* [5166] */
    (xdc_Char)0x25,  /* [5167] */
    (xdc_Char)0x24,  /* [5168] */
    (xdc_Char)0x46,  /* [5169] */
    (xdc_Char)0x25,  /* [5170] */
    (xdc_Char)0x24,  /* [5171] */
    (xdc_Char)0x53,  /* [5172] */
    (xdc_Char)0x0,  /* [5173] */
    (xdc_Char)0x53,  /* [5174] */
    (xdc_Char)0x74,  /* [5175] */
    (xdc_Char)0x61,  /* [5176] */
    (xdc_Char)0x72,  /* [5177] */
    (xdc_Char)0x74,  /* [5178] */
    (xdc_Char)0x3a,  /* [5179] */
    (xdc_Char)0x20,  /* [5180] */
    (xdc_Char)0x25,  /* [5181] */
    (xdc_Char)0x24,  /* [5182] */
    (xdc_Char)0x53,  /* [5183] */
    (xdc_Char)0x0,  /* [5184] */
    (xdc_Char)0x53,  /* [5185] */
    (xdc_Char)0x74,  /* [5186] */
    (xdc_Char)0x6f,  /* [5187] */
    (xdc_Char)0x70,  /* [5188] */
    (xdc_Char)0x3a,  /* [5189] */
    (xdc_Char)0x20,  /* [5190] */
    (xdc_Char)0x25,  /* [5191] */
    (xdc_Char)0x24,  /* [5192] */
    (xdc_Char)0x53,  /* [5193] */
    (xdc_Char)0x0,  /* [5194] */
    (xdc_Char)0x53,  /* [5195] */
    (xdc_Char)0x74,  /* [5196] */
    (xdc_Char)0x61,  /* [5197] */
    (xdc_Char)0x72,  /* [5198] */
    (xdc_Char)0x74,  /* [5199] */
    (xdc_Char)0x49,  /* [5200] */
    (xdc_Char)0x6e,  /* [5201] */
    (xdc_Char)0x73,  /* [5202] */
    (xdc_Char)0x74,  /* [5203] */
    (xdc_Char)0x61,  /* [5204] */
    (xdc_Char)0x6e,  /* [5205] */
    (xdc_Char)0x63,  /* [5206] */
    (xdc_Char)0x65,  /* [5207] */
    (xdc_Char)0x3a,  /* [5208] */
    (xdc_Char)0x20,  /* [5209] */
    (xdc_Char)0x25,  /* [5210] */
    (xdc_Char)0x24,  /* [5211] */
    (xdc_Char)0x53,  /* [5212] */
    (xdc_Char)0x0,  /* [5213] */
    (xdc_Char)0x53,  /* [5214] */
    (xdc_Char)0x74,  /* [5215] */
    (xdc_Char)0x6f,  /* [5216] */
    (xdc_Char)0x70,  /* [5217] */
    (xdc_Char)0x49,  /* [5218] */
    (xdc_Char)0x6e,  /* [5219] */
    (xdc_Char)0x73,  /* [5220] */
    (xdc_Char)0x74,  /* [5221] */
    (xdc_Char)0x61,  /* [5222] */
    (xdc_Char)0x6e,  /* [5223] */
    (xdc_Char)0x63,  /* [5224] */
    (xdc_Char)0x65,  /* [5225] */
    (xdc_Char)0x3a,  /* [5226] */
    (xdc_Char)0x20,  /* [5227] */
    (xdc_Char)0x25,  /* [5228] */
    (xdc_Char)0x24,  /* [5229] */
    (xdc_Char)0x53,  /* [5230] */
    (xdc_Char)0x0,  /* [5231] */
    (xdc_Char)0x4c,  /* [5232] */
    (xdc_Char)0x57,  /* [5233] */
    (xdc_Char)0x5f,  /* [5234] */
    (xdc_Char)0x64,  /* [5235] */
    (xdc_Char)0x65,  /* [5236] */
    (xdc_Char)0x6c,  /* [5237] */
    (xdc_Char)0x61,  /* [5238] */
    (xdc_Char)0x79,  /* [5239] */
    (xdc_Char)0x65,  /* [5240] */
    (xdc_Char)0x64,  /* [5241] */
    (xdc_Char)0x3a,  /* [5242] */
    (xdc_Char)0x20,  /* [5243] */
    (xdc_Char)0x64,  /* [5244] */
    (xdc_Char)0x65,  /* [5245] */
    (xdc_Char)0x6c,  /* [5246] */
    (xdc_Char)0x61,  /* [5247] */
    (xdc_Char)0x79,  /* [5248] */
    (xdc_Char)0x3a,  /* [5249] */
    (xdc_Char)0x20,  /* [5250] */
    (xdc_Char)0x25,  /* [5251] */
    (xdc_Char)0x64,  /* [5252] */
    (xdc_Char)0x0,  /* [5253] */
    (xdc_Char)0x4c,  /* [5254] */
    (xdc_Char)0x4d,  /* [5255] */
    (xdc_Char)0x5f,  /* [5256] */
    (xdc_Char)0x74,  /* [5257] */
    (xdc_Char)0x69,  /* [5258] */
    (xdc_Char)0x63,  /* [5259] */
    (xdc_Char)0x6b,  /* [5260] */
    (xdc_Char)0x3a,  /* [5261] */
    (xdc_Char)0x20,  /* [5262] */
    (xdc_Char)0x74,  /* [5263] */
    (xdc_Char)0x69,  /* [5264] */
    (xdc_Char)0x63,  /* [5265] */
    (xdc_Char)0x6b,  /* [5266] */
    (xdc_Char)0x3a,  /* [5267] */
    (xdc_Char)0x20,  /* [5268] */
    (xdc_Char)0x25,  /* [5269] */
    (xdc_Char)0x64,  /* [5270] */
    (xdc_Char)0x0,  /* [5271] */
    (xdc_Char)0x4c,  /* [5272] */
    (xdc_Char)0x4d,  /* [5273] */
    (xdc_Char)0x5f,  /* [5274] */
    (xdc_Char)0x62,  /* [5275] */
    (xdc_Char)0x65,  /* [5276] */
    (xdc_Char)0x67,  /* [5277] */
    (xdc_Char)0x69,  /* [5278] */
    (xdc_Char)0x6e,  /* [5279] */
    (xdc_Char)0x3a,  /* [5280] */
    (xdc_Char)0x20,  /* [5281] */
    (xdc_Char)0x63,  /* [5282] */
    (xdc_Char)0x6c,  /* [5283] */
    (xdc_Char)0x6b,  /* [5284] */
    (xdc_Char)0x3a,  /* [5285] */
    (xdc_Char)0x20,  /* [5286] */
    (xdc_Char)0x30,  /* [5287] */
    (xdc_Char)0x78,  /* [5288] */
    (xdc_Char)0x25,  /* [5289] */
    (xdc_Char)0x78,  /* [5290] */
    (xdc_Char)0x2c,  /* [5291] */
    (xdc_Char)0x20,  /* [5292] */
    (xdc_Char)0x66,  /* [5293] */
    (xdc_Char)0x75,  /* [5294] */
    (xdc_Char)0x6e,  /* [5295] */
    (xdc_Char)0x63,  /* [5296] */
    (xdc_Char)0x3a,  /* [5297] */
    (xdc_Char)0x20,  /* [5298] */
    (xdc_Char)0x30,  /* [5299] */
    (xdc_Char)0x78,  /* [5300] */
    (xdc_Char)0x25,  /* [5301] */
    (xdc_Char)0x78,  /* [5302] */
    (xdc_Char)0x0,  /* [5303] */
    (xdc_Char)0x4c,  /* [5304] */
    (xdc_Char)0x4d,  /* [5305] */
    (xdc_Char)0x5f,  /* [5306] */
    (xdc_Char)0x70,  /* [5307] */
    (xdc_Char)0x6f,  /* [5308] */
    (xdc_Char)0x73,  /* [5309] */
    (xdc_Char)0x74,  /* [5310] */
    (xdc_Char)0x3a,  /* [5311] */
    (xdc_Char)0x20,  /* [5312] */
    (xdc_Char)0x65,  /* [5313] */
    (xdc_Char)0x76,  /* [5314] */
    (xdc_Char)0x65,  /* [5315] */
    (xdc_Char)0x6e,  /* [5316] */
    (xdc_Char)0x74,  /* [5317] */
    (xdc_Char)0x3a,  /* [5318] */
    (xdc_Char)0x20,  /* [5319] */
    (xdc_Char)0x30,  /* [5320] */
    (xdc_Char)0x78,  /* [5321] */
    (xdc_Char)0x25,  /* [5322] */
    (xdc_Char)0x78,  /* [5323] */
    (xdc_Char)0x2c,  /* [5324] */
    (xdc_Char)0x20,  /* [5325] */
    (xdc_Char)0x63,  /* [5326] */
    (xdc_Char)0x75,  /* [5327] */
    (xdc_Char)0x72,  /* [5328] */
    (xdc_Char)0x72,  /* [5329] */
    (xdc_Char)0x45,  /* [5330] */
    (xdc_Char)0x76,  /* [5331] */
    (xdc_Char)0x65,  /* [5332] */
    (xdc_Char)0x6e,  /* [5333] */
    (xdc_Char)0x74,  /* [5334] */
    (xdc_Char)0x73,  /* [5335] */
    (xdc_Char)0x3a,  /* [5336] */
    (xdc_Char)0x20,  /* [5337] */
    (xdc_Char)0x30,  /* [5338] */
    (xdc_Char)0x78,  /* [5339] */
    (xdc_Char)0x25,  /* [5340] */
    (xdc_Char)0x78,  /* [5341] */
    (xdc_Char)0x2c,  /* [5342] */
    (xdc_Char)0x20,  /* [5343] */
    (xdc_Char)0x65,  /* [5344] */
    (xdc_Char)0x76,  /* [5345] */
    (xdc_Char)0x65,  /* [5346] */
    (xdc_Char)0x6e,  /* [5347] */
    (xdc_Char)0x74,  /* [5348] */
    (xdc_Char)0x49,  /* [5349] */
    (xdc_Char)0x64,  /* [5350] */
    (xdc_Char)0x3a,  /* [5351] */
    (xdc_Char)0x20,  /* [5352] */
    (xdc_Char)0x30,  /* [5353] */
    (xdc_Char)0x78,  /* [5354] */
    (xdc_Char)0x25,  /* [5355] */
    (xdc_Char)0x78,  /* [5356] */
    (xdc_Char)0x0,  /* [5357] */
    (xdc_Char)0x4c,  /* [5358] */
    (xdc_Char)0x4d,  /* [5359] */
    (xdc_Char)0x5f,  /* [5360] */
    (xdc_Char)0x70,  /* [5361] */
    (xdc_Char)0x65,  /* [5362] */
    (xdc_Char)0x6e,  /* [5363] */
    (xdc_Char)0x64,  /* [5364] */
    (xdc_Char)0x3a,  /* [5365] */
    (xdc_Char)0x20,  /* [5366] */
    (xdc_Char)0x65,  /* [5367] */
    (xdc_Char)0x76,  /* [5368] */
    (xdc_Char)0x65,  /* [5369] */
    (xdc_Char)0x6e,  /* [5370] */
    (xdc_Char)0x74,  /* [5371] */
    (xdc_Char)0x3a,  /* [5372] */
    (xdc_Char)0x20,  /* [5373] */
    (xdc_Char)0x30,  /* [5374] */
    (xdc_Char)0x78,  /* [5375] */
    (xdc_Char)0x25,  /* [5376] */
    (xdc_Char)0x78,  /* [5377] */
    (xdc_Char)0x2c,  /* [5378] */
    (xdc_Char)0x20,  /* [5379] */
    (xdc_Char)0x63,  /* [5380] */
    (xdc_Char)0x75,  /* [5381] */
    (xdc_Char)0x72,  /* [5382] */
    (xdc_Char)0x72,  /* [5383] */
    (xdc_Char)0x45,  /* [5384] */
    (xdc_Char)0x76,  /* [5385] */
    (xdc_Char)0x65,  /* [5386] */
    (xdc_Char)0x6e,  /* [5387] */
    (xdc_Char)0x74,  /* [5388] */
    (xdc_Char)0x73,  /* [5389] */
    (xdc_Char)0x3a,  /* [5390] */
    (xdc_Char)0x20,  /* [5391] */
    (xdc_Char)0x30,  /* [5392] */
    (xdc_Char)0x78,  /* [5393] */
    (xdc_Char)0x25,  /* [5394] */
    (xdc_Char)0x78,  /* [5395] */
    (xdc_Char)0x2c,  /* [5396] */
    (xdc_Char)0x20,  /* [5397] */
    (xdc_Char)0x61,  /* [5398] */
    (xdc_Char)0x6e,  /* [5399] */
    (xdc_Char)0x64,  /* [5400] */
    (xdc_Char)0x4d,  /* [5401] */
    (xdc_Char)0x61,  /* [5402] */
    (xdc_Char)0x73,  /* [5403] */
    (xdc_Char)0x6b,  /* [5404] */
    (xdc_Char)0x3a,  /* [5405] */
    (xdc_Char)0x20,  /* [5406] */
    (xdc_Char)0x30,  /* [5407] */
    (xdc_Char)0x78,  /* [5408] */
    (xdc_Char)0x25,  /* [5409] */
    (xdc_Char)0x78,  /* [5410] */
    (xdc_Char)0x2c,  /* [5411] */
    (xdc_Char)0x20,  /* [5412] */
    (xdc_Char)0x6f,  /* [5413] */
    (xdc_Char)0x72,  /* [5414] */
    (xdc_Char)0x4d,  /* [5415] */
    (xdc_Char)0x61,  /* [5416] */
    (xdc_Char)0x73,  /* [5417] */
    (xdc_Char)0x6b,  /* [5418] */
    (xdc_Char)0x3a,  /* [5419] */
    (xdc_Char)0x20,  /* [5420] */
    (xdc_Char)0x30,  /* [5421] */
    (xdc_Char)0x78,  /* [5422] */
    (xdc_Char)0x25,  /* [5423] */
    (xdc_Char)0x78,  /* [5424] */
    (xdc_Char)0x2c,  /* [5425] */
    (xdc_Char)0x20,  /* [5426] */
    (xdc_Char)0x74,  /* [5427] */
    (xdc_Char)0x69,  /* [5428] */
    (xdc_Char)0x6d,  /* [5429] */
    (xdc_Char)0x65,  /* [5430] */
    (xdc_Char)0x6f,  /* [5431] */
    (xdc_Char)0x75,  /* [5432] */
    (xdc_Char)0x74,  /* [5433] */
    (xdc_Char)0x3a,  /* [5434] */
    (xdc_Char)0x20,  /* [5435] */
    (xdc_Char)0x25,  /* [5436] */
    (xdc_Char)0x64,  /* [5437] */
    (xdc_Char)0x0,  /* [5438] */
    (xdc_Char)0x4c,  /* [5439] */
    (xdc_Char)0x4d,  /* [5440] */
    (xdc_Char)0x5f,  /* [5441] */
    (xdc_Char)0x70,  /* [5442] */
    (xdc_Char)0x6f,  /* [5443] */
    (xdc_Char)0x73,  /* [5444] */
    (xdc_Char)0x74,  /* [5445] */
    (xdc_Char)0x3a,  /* [5446] */
    (xdc_Char)0x20,  /* [5447] */
    (xdc_Char)0x73,  /* [5448] */
    (xdc_Char)0x65,  /* [5449] */
    (xdc_Char)0x6d,  /* [5450] */
    (xdc_Char)0x3a,  /* [5451] */
    (xdc_Char)0x20,  /* [5452] */
    (xdc_Char)0x30,  /* [5453] */
    (xdc_Char)0x78,  /* [5454] */
    (xdc_Char)0x25,  /* [5455] */
    (xdc_Char)0x78,  /* [5456] */
    (xdc_Char)0x2c,  /* [5457] */
    (xdc_Char)0x20,  /* [5458] */
    (xdc_Char)0x63,  /* [5459] */
    (xdc_Char)0x6f,  /* [5460] */
    (xdc_Char)0x75,  /* [5461] */
    (xdc_Char)0x6e,  /* [5462] */
    (xdc_Char)0x74,  /* [5463] */
    (xdc_Char)0x3a,  /* [5464] */
    (xdc_Char)0x20,  /* [5465] */
    (xdc_Char)0x25,  /* [5466] */
    (xdc_Char)0x64,  /* [5467] */
    (xdc_Char)0x0,  /* [5468] */
    (xdc_Char)0x4c,  /* [5469] */
    (xdc_Char)0x4d,  /* [5470] */
    (xdc_Char)0x5f,  /* [5471] */
    (xdc_Char)0x70,  /* [5472] */
    (xdc_Char)0x65,  /* [5473] */
    (xdc_Char)0x6e,  /* [5474] */
    (xdc_Char)0x64,  /* [5475] */
    (xdc_Char)0x3a,  /* [5476] */
    (xdc_Char)0x20,  /* [5477] */
    (xdc_Char)0x73,  /* [5478] */
    (xdc_Char)0x65,  /* [5479] */
    (xdc_Char)0x6d,  /* [5480] */
    (xdc_Char)0x3a,  /* [5481] */
    (xdc_Char)0x20,  /* [5482] */
    (xdc_Char)0x30,  /* [5483] */
    (xdc_Char)0x78,  /* [5484] */
    (xdc_Char)0x25,  /* [5485] */
    (xdc_Char)0x78,  /* [5486] */
    (xdc_Char)0x2c,  /* [5487] */
    (xdc_Char)0x20,  /* [5488] */
    (xdc_Char)0x63,  /* [5489] */
    (xdc_Char)0x6f,  /* [5490] */
    (xdc_Char)0x75,  /* [5491] */
    (xdc_Char)0x6e,  /* [5492] */
    (xdc_Char)0x74,  /* [5493] */
    (xdc_Char)0x3a,  /* [5494] */
    (xdc_Char)0x20,  /* [5495] */
    (xdc_Char)0x25,  /* [5496] */
    (xdc_Char)0x64,  /* [5497] */
    (xdc_Char)0x2c,  /* [5498] */
    (xdc_Char)0x20,  /* [5499] */
    (xdc_Char)0x74,  /* [5500] */
    (xdc_Char)0x69,  /* [5501] */
    (xdc_Char)0x6d,  /* [5502] */
    (xdc_Char)0x65,  /* [5503] */
    (xdc_Char)0x6f,  /* [5504] */
    (xdc_Char)0x75,  /* [5505] */
    (xdc_Char)0x74,  /* [5506] */
    (xdc_Char)0x3a,  /* [5507] */
    (xdc_Char)0x20,  /* [5508] */
    (xdc_Char)0x25,  /* [5509] */
    (xdc_Char)0x64,  /* [5510] */
    (xdc_Char)0x0,  /* [5511] */
    (xdc_Char)0x4c,  /* [5512] */
    (xdc_Char)0x4d,  /* [5513] */
    (xdc_Char)0x5f,  /* [5514] */
    (xdc_Char)0x62,  /* [5515] */
    (xdc_Char)0x65,  /* [5516] */
    (xdc_Char)0x67,  /* [5517] */
    (xdc_Char)0x69,  /* [5518] */
    (xdc_Char)0x6e,  /* [5519] */
    (xdc_Char)0x3a,  /* [5520] */
    (xdc_Char)0x20,  /* [5521] */
    (xdc_Char)0x73,  /* [5522] */
    (xdc_Char)0x77,  /* [5523] */
    (xdc_Char)0x69,  /* [5524] */
    (xdc_Char)0x3a,  /* [5525] */
    (xdc_Char)0x20,  /* [5526] */
    (xdc_Char)0x30,  /* [5527] */
    (xdc_Char)0x78,  /* [5528] */
    (xdc_Char)0x25,  /* [5529] */
    (xdc_Char)0x78,  /* [5530] */
    (xdc_Char)0x2c,  /* [5531] */
    (xdc_Char)0x20,  /* [5532] */
    (xdc_Char)0x66,  /* [5533] */
    (xdc_Char)0x75,  /* [5534] */
    (xdc_Char)0x6e,  /* [5535] */
    (xdc_Char)0x63,  /* [5536] */
    (xdc_Char)0x3a,  /* [5537] */
    (xdc_Char)0x20,  /* [5538] */
    (xdc_Char)0x30,  /* [5539] */
    (xdc_Char)0x78,  /* [5540] */
    (xdc_Char)0x25,  /* [5541] */
    (xdc_Char)0x78,  /* [5542] */
    (xdc_Char)0x2c,  /* [5543] */
    (xdc_Char)0x20,  /* [5544] */
    (xdc_Char)0x70,  /* [5545] */
    (xdc_Char)0x72,  /* [5546] */
    (xdc_Char)0x65,  /* [5547] */
    (xdc_Char)0x54,  /* [5548] */
    (xdc_Char)0x68,  /* [5549] */
    (xdc_Char)0x72,  /* [5550] */
    (xdc_Char)0x65,  /* [5551] */
    (xdc_Char)0x61,  /* [5552] */
    (xdc_Char)0x64,  /* [5553] */
    (xdc_Char)0x3a,  /* [5554] */
    (xdc_Char)0x20,  /* [5555] */
    (xdc_Char)0x25,  /* [5556] */
    (xdc_Char)0x64,  /* [5557] */
    (xdc_Char)0x0,  /* [5558] */
    (xdc_Char)0x4c,  /* [5559] */
    (xdc_Char)0x44,  /* [5560] */
    (xdc_Char)0x5f,  /* [5561] */
    (xdc_Char)0x65,  /* [5562] */
    (xdc_Char)0x6e,  /* [5563] */
    (xdc_Char)0x64,  /* [5564] */
    (xdc_Char)0x3a,  /* [5565] */
    (xdc_Char)0x20,  /* [5566] */
    (xdc_Char)0x73,  /* [5567] */
    (xdc_Char)0x77,  /* [5568] */
    (xdc_Char)0x69,  /* [5569] */
    (xdc_Char)0x3a,  /* [5570] */
    (xdc_Char)0x20,  /* [5571] */
    (xdc_Char)0x30,  /* [5572] */
    (xdc_Char)0x78,  /* [5573] */
    (xdc_Char)0x25,  /* [5574] */
    (xdc_Char)0x78,  /* [5575] */
    (xdc_Char)0x0,  /* [5576] */
    (xdc_Char)0x4c,  /* [5577] */
    (xdc_Char)0x4d,  /* [5578] */
    (xdc_Char)0x5f,  /* [5579] */
    (xdc_Char)0x70,  /* [5580] */
    (xdc_Char)0x6f,  /* [5581] */
    (xdc_Char)0x73,  /* [5582] */
    (xdc_Char)0x74,  /* [5583] */
    (xdc_Char)0x3a,  /* [5584] */
    (xdc_Char)0x20,  /* [5585] */
    (xdc_Char)0x73,  /* [5586] */
    (xdc_Char)0x77,  /* [5587] */
    (xdc_Char)0x69,  /* [5588] */
    (xdc_Char)0x3a,  /* [5589] */
    (xdc_Char)0x20,  /* [5590] */
    (xdc_Char)0x30,  /* [5591] */
    (xdc_Char)0x78,  /* [5592] */
    (xdc_Char)0x25,  /* [5593] */
    (xdc_Char)0x78,  /* [5594] */
    (xdc_Char)0x2c,  /* [5595] */
    (xdc_Char)0x20,  /* [5596] */
    (xdc_Char)0x66,  /* [5597] */
    (xdc_Char)0x75,  /* [5598] */
    (xdc_Char)0x6e,  /* [5599] */
    (xdc_Char)0x63,  /* [5600] */
    (xdc_Char)0x3a,  /* [5601] */
    (xdc_Char)0x20,  /* [5602] */
    (xdc_Char)0x30,  /* [5603] */
    (xdc_Char)0x78,  /* [5604] */
    (xdc_Char)0x25,  /* [5605] */
    (xdc_Char)0x78,  /* [5606] */
    (xdc_Char)0x2c,  /* [5607] */
    (xdc_Char)0x20,  /* [5608] */
    (xdc_Char)0x70,  /* [5609] */
    (xdc_Char)0x72,  /* [5610] */
    (xdc_Char)0x69,  /* [5611] */
    (xdc_Char)0x3a,  /* [5612] */
    (xdc_Char)0x20,  /* [5613] */
    (xdc_Char)0x25,  /* [5614] */
    (xdc_Char)0x64,  /* [5615] */
    (xdc_Char)0x0,  /* [5616] */
    (xdc_Char)0x4c,  /* [5617] */
    (xdc_Char)0x4d,  /* [5618] */
    (xdc_Char)0x5f,  /* [5619] */
    (xdc_Char)0x73,  /* [5620] */
    (xdc_Char)0x77,  /* [5621] */
    (xdc_Char)0x69,  /* [5622] */
    (xdc_Char)0x74,  /* [5623] */
    (xdc_Char)0x63,  /* [5624] */
    (xdc_Char)0x68,  /* [5625] */
    (xdc_Char)0x3a,  /* [5626] */
    (xdc_Char)0x20,  /* [5627] */
    (xdc_Char)0x6f,  /* [5628] */
    (xdc_Char)0x6c,  /* [5629] */
    (xdc_Char)0x64,  /* [5630] */
    (xdc_Char)0x74,  /* [5631] */
    (xdc_Char)0x73,  /* [5632] */
    (xdc_Char)0x6b,  /* [5633] */
    (xdc_Char)0x3a,  /* [5634] */
    (xdc_Char)0x20,  /* [5635] */
    (xdc_Char)0x30,  /* [5636] */
    (xdc_Char)0x78,  /* [5637] */
    (xdc_Char)0x25,  /* [5638] */
    (xdc_Char)0x78,  /* [5639] */
    (xdc_Char)0x2c,  /* [5640] */
    (xdc_Char)0x20,  /* [5641] */
    (xdc_Char)0x6f,  /* [5642] */
    (xdc_Char)0x6c,  /* [5643] */
    (xdc_Char)0x64,  /* [5644] */
    (xdc_Char)0x66,  /* [5645] */
    (xdc_Char)0x75,  /* [5646] */
    (xdc_Char)0x6e,  /* [5647] */
    (xdc_Char)0x63,  /* [5648] */
    (xdc_Char)0x3a,  /* [5649] */
    (xdc_Char)0x20,  /* [5650] */
    (xdc_Char)0x30,  /* [5651] */
    (xdc_Char)0x78,  /* [5652] */
    (xdc_Char)0x25,  /* [5653] */
    (xdc_Char)0x78,  /* [5654] */
    (xdc_Char)0x2c,  /* [5655] */
    (xdc_Char)0x20,  /* [5656] */
    (xdc_Char)0x6e,  /* [5657] */
    (xdc_Char)0x65,  /* [5658] */
    (xdc_Char)0x77,  /* [5659] */
    (xdc_Char)0x74,  /* [5660] */
    (xdc_Char)0x73,  /* [5661] */
    (xdc_Char)0x6b,  /* [5662] */
    (xdc_Char)0x3a,  /* [5663] */
    (xdc_Char)0x20,  /* [5664] */
    (xdc_Char)0x30,  /* [5665] */
    (xdc_Char)0x78,  /* [5666] */
    (xdc_Char)0x25,  /* [5667] */
    (xdc_Char)0x78,  /* [5668] */
    (xdc_Char)0x2c,  /* [5669] */
    (xdc_Char)0x20,  /* [5670] */
    (xdc_Char)0x6e,  /* [5671] */
    (xdc_Char)0x65,  /* [5672] */
    (xdc_Char)0x77,  /* [5673] */
    (xdc_Char)0x66,  /* [5674] */
    (xdc_Char)0x75,  /* [5675] */
    (xdc_Char)0x6e,  /* [5676] */
    (xdc_Char)0x63,  /* [5677] */
    (xdc_Char)0x3a,  /* [5678] */
    (xdc_Char)0x20,  /* [5679] */
    (xdc_Char)0x30,  /* [5680] */
    (xdc_Char)0x78,  /* [5681] */
    (xdc_Char)0x25,  /* [5682] */
    (xdc_Char)0x78,  /* [5683] */
    (xdc_Char)0x0,  /* [5684] */
    (xdc_Char)0x4c,  /* [5685] */
    (xdc_Char)0x4d,  /* [5686] */
    (xdc_Char)0x5f,  /* [5687] */
    (xdc_Char)0x73,  /* [5688] */
    (xdc_Char)0x6c,  /* [5689] */
    (xdc_Char)0x65,  /* [5690] */
    (xdc_Char)0x65,  /* [5691] */
    (xdc_Char)0x70,  /* [5692] */
    (xdc_Char)0x3a,  /* [5693] */
    (xdc_Char)0x20,  /* [5694] */
    (xdc_Char)0x74,  /* [5695] */
    (xdc_Char)0x73,  /* [5696] */
    (xdc_Char)0x6b,  /* [5697] */
    (xdc_Char)0x3a,  /* [5698] */
    (xdc_Char)0x20,  /* [5699] */
    (xdc_Char)0x30,  /* [5700] */
    (xdc_Char)0x78,  /* [5701] */
    (xdc_Char)0x25,  /* [5702] */
    (xdc_Char)0x78,  /* [5703] */
    (xdc_Char)0x2c,  /* [5704] */
    (xdc_Char)0x20,  /* [5705] */
    (xdc_Char)0x66,  /* [5706] */
    (xdc_Char)0x75,  /* [5707] */
    (xdc_Char)0x6e,  /* [5708] */
    (xdc_Char)0x63,  /* [5709] */
    (xdc_Char)0x3a,  /* [5710] */
    (xdc_Char)0x20,  /* [5711] */
    (xdc_Char)0x30,  /* [5712] */
    (xdc_Char)0x78,  /* [5713] */
    (xdc_Char)0x25,  /* [5714] */
    (xdc_Char)0x78,  /* [5715] */
    (xdc_Char)0x2c,  /* [5716] */
    (xdc_Char)0x20,  /* [5717] */
    (xdc_Char)0x74,  /* [5718] */
    (xdc_Char)0x69,  /* [5719] */
    (xdc_Char)0x6d,  /* [5720] */
    (xdc_Char)0x65,  /* [5721] */
    (xdc_Char)0x6f,  /* [5722] */
    (xdc_Char)0x75,  /* [5723] */
    (xdc_Char)0x74,  /* [5724] */
    (xdc_Char)0x3a,  /* [5725] */
    (xdc_Char)0x20,  /* [5726] */
    (xdc_Char)0x25,  /* [5727] */
    (xdc_Char)0x64,  /* [5728] */
    (xdc_Char)0x0,  /* [5729] */
    (xdc_Char)0x4c,  /* [5730] */
    (xdc_Char)0x44,  /* [5731] */
    (xdc_Char)0x5f,  /* [5732] */
    (xdc_Char)0x72,  /* [5733] */
    (xdc_Char)0x65,  /* [5734] */
    (xdc_Char)0x61,  /* [5735] */
    (xdc_Char)0x64,  /* [5736] */
    (xdc_Char)0x79,  /* [5737] */
    (xdc_Char)0x3a,  /* [5738] */
    (xdc_Char)0x20,  /* [5739] */
    (xdc_Char)0x74,  /* [5740] */
    (xdc_Char)0x73,  /* [5741] */
    (xdc_Char)0x6b,  /* [5742] */
    (xdc_Char)0x3a,  /* [5743] */
    (xdc_Char)0x20,  /* [5744] */
    (xdc_Char)0x30,  /* [5745] */
    (xdc_Char)0x78,  /* [5746] */
    (xdc_Char)0x25,  /* [5747] */
    (xdc_Char)0x78,  /* [5748] */
    (xdc_Char)0x2c,  /* [5749] */
    (xdc_Char)0x20,  /* [5750] */
    (xdc_Char)0x66,  /* [5751] */
    (xdc_Char)0x75,  /* [5752] */
    (xdc_Char)0x6e,  /* [5753] */
    (xdc_Char)0x63,  /* [5754] */
    (xdc_Char)0x3a,  /* [5755] */
    (xdc_Char)0x20,  /* [5756] */
    (xdc_Char)0x30,  /* [5757] */
    (xdc_Char)0x78,  /* [5758] */
    (xdc_Char)0x25,  /* [5759] */
    (xdc_Char)0x78,  /* [5760] */
    (xdc_Char)0x2c,  /* [5761] */
    (xdc_Char)0x20,  /* [5762] */
    (xdc_Char)0x70,  /* [5763] */
    (xdc_Char)0x72,  /* [5764] */
    (xdc_Char)0x69,  /* [5765] */
    (xdc_Char)0x3a,  /* [5766] */
    (xdc_Char)0x20,  /* [5767] */
    (xdc_Char)0x25,  /* [5768] */
    (xdc_Char)0x64,  /* [5769] */
    (xdc_Char)0x0,  /* [5770] */
    (xdc_Char)0x4c,  /* [5771] */
    (xdc_Char)0x44,  /* [5772] */
    (xdc_Char)0x5f,  /* [5773] */
    (xdc_Char)0x62,  /* [5774] */
    (xdc_Char)0x6c,  /* [5775] */
    (xdc_Char)0x6f,  /* [5776] */
    (xdc_Char)0x63,  /* [5777] */
    (xdc_Char)0x6b,  /* [5778] */
    (xdc_Char)0x3a,  /* [5779] */
    (xdc_Char)0x20,  /* [5780] */
    (xdc_Char)0x74,  /* [5781] */
    (xdc_Char)0x73,  /* [5782] */
    (xdc_Char)0x6b,  /* [5783] */
    (xdc_Char)0x3a,  /* [5784] */
    (xdc_Char)0x20,  /* [5785] */
    (xdc_Char)0x30,  /* [5786] */
    (xdc_Char)0x78,  /* [5787] */
    (xdc_Char)0x25,  /* [5788] */
    (xdc_Char)0x78,  /* [5789] */
    (xdc_Char)0x2c,  /* [5790] */
    (xdc_Char)0x20,  /* [5791] */
    (xdc_Char)0x66,  /* [5792] */
    (xdc_Char)0x75,  /* [5793] */
    (xdc_Char)0x6e,  /* [5794] */
    (xdc_Char)0x63,  /* [5795] */
    (xdc_Char)0x3a,  /* [5796] */
    (xdc_Char)0x20,  /* [5797] */
    (xdc_Char)0x30,  /* [5798] */
    (xdc_Char)0x78,  /* [5799] */
    (xdc_Char)0x25,  /* [5800] */
    (xdc_Char)0x78,  /* [5801] */
    (xdc_Char)0x0,  /* [5802] */
    (xdc_Char)0x4c,  /* [5803] */
    (xdc_Char)0x4d,  /* [5804] */
    (xdc_Char)0x5f,  /* [5805] */
    (xdc_Char)0x79,  /* [5806] */
    (xdc_Char)0x69,  /* [5807] */
    (xdc_Char)0x65,  /* [5808] */
    (xdc_Char)0x6c,  /* [5809] */
    (xdc_Char)0x64,  /* [5810] */
    (xdc_Char)0x3a,  /* [5811] */
    (xdc_Char)0x20,  /* [5812] */
    (xdc_Char)0x74,  /* [5813] */
    (xdc_Char)0x73,  /* [5814] */
    (xdc_Char)0x6b,  /* [5815] */
    (xdc_Char)0x3a,  /* [5816] */
    (xdc_Char)0x20,  /* [5817] */
    (xdc_Char)0x30,  /* [5818] */
    (xdc_Char)0x78,  /* [5819] */
    (xdc_Char)0x25,  /* [5820] */
    (xdc_Char)0x78,  /* [5821] */
    (xdc_Char)0x2c,  /* [5822] */
    (xdc_Char)0x20,  /* [5823] */
    (xdc_Char)0x66,  /* [5824] */
    (xdc_Char)0x75,  /* [5825] */
    (xdc_Char)0x6e,  /* [5826] */
    (xdc_Char)0x63,  /* [5827] */
    (xdc_Char)0x3a,  /* [5828] */
    (xdc_Char)0x20,  /* [5829] */
    (xdc_Char)0x30,  /* [5830] */
    (xdc_Char)0x78,  /* [5831] */
    (xdc_Char)0x25,  /* [5832] */
    (xdc_Char)0x78,  /* [5833] */
    (xdc_Char)0x2c,  /* [5834] */
    (xdc_Char)0x20,  /* [5835] */
    (xdc_Char)0x63,  /* [5836] */
    (xdc_Char)0x75,  /* [5837] */
    (xdc_Char)0x72,  /* [5838] */
    (xdc_Char)0x72,  /* [5839] */
    (xdc_Char)0x54,  /* [5840] */
    (xdc_Char)0x68,  /* [5841] */
    (xdc_Char)0x72,  /* [5842] */
    (xdc_Char)0x65,  /* [5843] */
    (xdc_Char)0x61,  /* [5844] */
    (xdc_Char)0x64,  /* [5845] */
    (xdc_Char)0x3a,  /* [5846] */
    (xdc_Char)0x20,  /* [5847] */
    (xdc_Char)0x25,  /* [5848] */
    (xdc_Char)0x64,  /* [5849] */
    (xdc_Char)0x0,  /* [5850] */
    (xdc_Char)0x4c,  /* [5851] */
    (xdc_Char)0x4d,  /* [5852] */
    (xdc_Char)0x5f,  /* [5853] */
    (xdc_Char)0x73,  /* [5854] */
    (xdc_Char)0x65,  /* [5855] */
    (xdc_Char)0x74,  /* [5856] */
    (xdc_Char)0x50,  /* [5857] */
    (xdc_Char)0x72,  /* [5858] */
    (xdc_Char)0x69,  /* [5859] */
    (xdc_Char)0x3a,  /* [5860] */
    (xdc_Char)0x20,  /* [5861] */
    (xdc_Char)0x74,  /* [5862] */
    (xdc_Char)0x73,  /* [5863] */
    (xdc_Char)0x6b,  /* [5864] */
    (xdc_Char)0x3a,  /* [5865] */
    (xdc_Char)0x20,  /* [5866] */
    (xdc_Char)0x30,  /* [5867] */
    (xdc_Char)0x78,  /* [5868] */
    (xdc_Char)0x25,  /* [5869] */
    (xdc_Char)0x78,  /* [5870] */
    (xdc_Char)0x2c,  /* [5871] */
    (xdc_Char)0x20,  /* [5872] */
    (xdc_Char)0x66,  /* [5873] */
    (xdc_Char)0x75,  /* [5874] */
    (xdc_Char)0x6e,  /* [5875] */
    (xdc_Char)0x63,  /* [5876] */
    (xdc_Char)0x3a,  /* [5877] */
    (xdc_Char)0x20,  /* [5878] */
    (xdc_Char)0x30,  /* [5879] */
    (xdc_Char)0x78,  /* [5880] */
    (xdc_Char)0x25,  /* [5881] */
    (xdc_Char)0x78,  /* [5882] */
    (xdc_Char)0x2c,  /* [5883] */
    (xdc_Char)0x20,  /* [5884] */
    (xdc_Char)0x6f,  /* [5885] */
    (xdc_Char)0x6c,  /* [5886] */
    (xdc_Char)0x64,  /* [5887] */
    (xdc_Char)0x50,  /* [5888] */
    (xdc_Char)0x72,  /* [5889] */
    (xdc_Char)0x69,  /* [5890] */
    (xdc_Char)0x3a,  /* [5891] */
    (xdc_Char)0x20,  /* [5892] */
    (xdc_Char)0x25,  /* [5893] */
    (xdc_Char)0x64,  /* [5894] */
    (xdc_Char)0x2c,  /* [5895] */
    (xdc_Char)0x20,  /* [5896] */
    (xdc_Char)0x6e,  /* [5897] */
    (xdc_Char)0x65,  /* [5898] */
    (xdc_Char)0x77,  /* [5899] */
    (xdc_Char)0x50,  /* [5900] */
    (xdc_Char)0x72,  /* [5901] */
    (xdc_Char)0x69,  /* [5902] */
    (xdc_Char)0x20,  /* [5903] */
    (xdc_Char)0x25,  /* [5904] */
    (xdc_Char)0x64,  /* [5905] */
    (xdc_Char)0x0,  /* [5906] */
    (xdc_Char)0x4c,  /* [5907] */
    (xdc_Char)0x44,  /* [5908] */
    (xdc_Char)0x5f,  /* [5909] */
    (xdc_Char)0x65,  /* [5910] */
    (xdc_Char)0x78,  /* [5911] */
    (xdc_Char)0x69,  /* [5912] */
    (xdc_Char)0x74,  /* [5913] */
    (xdc_Char)0x3a,  /* [5914] */
    (xdc_Char)0x20,  /* [5915] */
    (xdc_Char)0x74,  /* [5916] */
    (xdc_Char)0x73,  /* [5917] */
    (xdc_Char)0x6b,  /* [5918] */
    (xdc_Char)0x3a,  /* [5919] */
    (xdc_Char)0x20,  /* [5920] */
    (xdc_Char)0x30,  /* [5921] */
    (xdc_Char)0x78,  /* [5922] */
    (xdc_Char)0x25,  /* [5923] */
    (xdc_Char)0x78,  /* [5924] */
    (xdc_Char)0x2c,  /* [5925] */
    (xdc_Char)0x20,  /* [5926] */
    (xdc_Char)0x66,  /* [5927] */
    (xdc_Char)0x75,  /* [5928] */
    (xdc_Char)0x6e,  /* [5929] */
    (xdc_Char)0x63,  /* [5930] */
    (xdc_Char)0x3a,  /* [5931] */
    (xdc_Char)0x20,  /* [5932] */
    (xdc_Char)0x30,  /* [5933] */
    (xdc_Char)0x78,  /* [5934] */
    (xdc_Char)0x25,  /* [5935] */
    (xdc_Char)0x78,  /* [5936] */
    (xdc_Char)0x0,  /* [5937] */
    (xdc_Char)0x4c,  /* [5938] */
    (xdc_Char)0x4d,  /* [5939] */
    (xdc_Char)0x5f,  /* [5940] */
    (xdc_Char)0x73,  /* [5941] */
    (xdc_Char)0x65,  /* [5942] */
    (xdc_Char)0x74,  /* [5943] */
    (xdc_Char)0x41,  /* [5944] */
    (xdc_Char)0x66,  /* [5945] */
    (xdc_Char)0x66,  /* [5946] */
    (xdc_Char)0x69,  /* [5947] */
    (xdc_Char)0x6e,  /* [5948] */
    (xdc_Char)0x69,  /* [5949] */
    (xdc_Char)0x74,  /* [5950] */
    (xdc_Char)0x79,  /* [5951] */
    (xdc_Char)0x3a,  /* [5952] */
    (xdc_Char)0x20,  /* [5953] */
    (xdc_Char)0x74,  /* [5954] */
    (xdc_Char)0x73,  /* [5955] */
    (xdc_Char)0x6b,  /* [5956] */
    (xdc_Char)0x3a,  /* [5957] */
    (xdc_Char)0x20,  /* [5958] */
    (xdc_Char)0x30,  /* [5959] */
    (xdc_Char)0x78,  /* [5960] */
    (xdc_Char)0x25,  /* [5961] */
    (xdc_Char)0x78,  /* [5962] */
    (xdc_Char)0x2c,  /* [5963] */
    (xdc_Char)0x20,  /* [5964] */
    (xdc_Char)0x66,  /* [5965] */
    (xdc_Char)0x75,  /* [5966] */
    (xdc_Char)0x6e,  /* [5967] */
    (xdc_Char)0x63,  /* [5968] */
    (xdc_Char)0x3a,  /* [5969] */
    (xdc_Char)0x20,  /* [5970] */
    (xdc_Char)0x30,  /* [5971] */
    (xdc_Char)0x78,  /* [5972] */
    (xdc_Char)0x25,  /* [5973] */
    (xdc_Char)0x78,  /* [5974] */
    (xdc_Char)0x2c,  /* [5975] */
    (xdc_Char)0x20,  /* [5976] */
    (xdc_Char)0x6f,  /* [5977] */
    (xdc_Char)0x6c,  /* [5978] */
    (xdc_Char)0x64,  /* [5979] */
    (xdc_Char)0x43,  /* [5980] */
    (xdc_Char)0x6f,  /* [5981] */
    (xdc_Char)0x72,  /* [5982] */
    (xdc_Char)0x65,  /* [5983] */
    (xdc_Char)0x3a,  /* [5984] */
    (xdc_Char)0x20,  /* [5985] */
    (xdc_Char)0x25,  /* [5986] */
    (xdc_Char)0x64,  /* [5987] */
    (xdc_Char)0x2c,  /* [5988] */
    (xdc_Char)0x20,  /* [5989] */
    (xdc_Char)0x6f,  /* [5990] */
    (xdc_Char)0x6c,  /* [5991] */
    (xdc_Char)0x64,  /* [5992] */
    (xdc_Char)0x41,  /* [5993] */
    (xdc_Char)0x66,  /* [5994] */
    (xdc_Char)0x66,  /* [5995] */
    (xdc_Char)0x69,  /* [5996] */
    (xdc_Char)0x6e,  /* [5997] */
    (xdc_Char)0x69,  /* [5998] */
    (xdc_Char)0x74,  /* [5999] */
    (xdc_Char)0x79,  /* [6000] */
    (xdc_Char)0x20,  /* [6001] */
    (xdc_Char)0x25,  /* [6002] */
    (xdc_Char)0x64,  /* [6003] */
    (xdc_Char)0x2c,  /* [6004] */
    (xdc_Char)0x20,  /* [6005] */
    (xdc_Char)0x6e,  /* [6006] */
    (xdc_Char)0x65,  /* [6007] */
    (xdc_Char)0x77,  /* [6008] */
    (xdc_Char)0x41,  /* [6009] */
    (xdc_Char)0x66,  /* [6010] */
    (xdc_Char)0x66,  /* [6011] */
    (xdc_Char)0x69,  /* [6012] */
    (xdc_Char)0x6e,  /* [6013] */
    (xdc_Char)0x69,  /* [6014] */
    (xdc_Char)0x74,  /* [6015] */
    (xdc_Char)0x79,  /* [6016] */
    (xdc_Char)0x20,  /* [6017] */
    (xdc_Char)0x25,  /* [6018] */
    (xdc_Char)0x64,  /* [6019] */
    (xdc_Char)0x0,  /* [6020] */
    (xdc_Char)0x4c,  /* [6021] */
    (xdc_Char)0x44,  /* [6022] */
    (xdc_Char)0x5f,  /* [6023] */
    (xdc_Char)0x73,  /* [6024] */
    (xdc_Char)0x63,  /* [6025] */
    (xdc_Char)0x68,  /* [6026] */
    (xdc_Char)0x65,  /* [6027] */
    (xdc_Char)0x64,  /* [6028] */
    (xdc_Char)0x75,  /* [6029] */
    (xdc_Char)0x6c,  /* [6030] */
    (xdc_Char)0x65,  /* [6031] */
    (xdc_Char)0x3a,  /* [6032] */
    (xdc_Char)0x20,  /* [6033] */
    (xdc_Char)0x63,  /* [6034] */
    (xdc_Char)0x6f,  /* [6035] */
    (xdc_Char)0x72,  /* [6036] */
    (xdc_Char)0x65,  /* [6037] */
    (xdc_Char)0x49,  /* [6038] */
    (xdc_Char)0x64,  /* [6039] */
    (xdc_Char)0x3a,  /* [6040] */
    (xdc_Char)0x20,  /* [6041] */
    (xdc_Char)0x25,  /* [6042] */
    (xdc_Char)0x64,  /* [6043] */
    (xdc_Char)0x2c,  /* [6044] */
    (xdc_Char)0x20,  /* [6045] */
    (xdc_Char)0x77,  /* [6046] */
    (xdc_Char)0x6f,  /* [6047] */
    (xdc_Char)0x72,  /* [6048] */
    (xdc_Char)0x6b,  /* [6049] */
    (xdc_Char)0x46,  /* [6050] */
    (xdc_Char)0x6c,  /* [6051] */
    (xdc_Char)0x61,  /* [6052] */
    (xdc_Char)0x67,  /* [6053] */
    (xdc_Char)0x3a,  /* [6054] */
    (xdc_Char)0x20,  /* [6055] */
    (xdc_Char)0x25,  /* [6056] */
    (xdc_Char)0x64,  /* [6057] */
    (xdc_Char)0x2c,  /* [6058] */
    (xdc_Char)0x20,  /* [6059] */
    (xdc_Char)0x63,  /* [6060] */
    (xdc_Char)0x75,  /* [6061] */
    (xdc_Char)0x72,  /* [6062] */
    (xdc_Char)0x53,  /* [6063] */
    (xdc_Char)0x65,  /* [6064] */
    (xdc_Char)0x74,  /* [6065] */
    (xdc_Char)0x4c,  /* [6066] */
    (xdc_Char)0x6f,  /* [6067] */
    (xdc_Char)0x63,  /* [6068] */
    (xdc_Char)0x61,  /* [6069] */
    (xdc_Char)0x6c,  /* [6070] */
    (xdc_Char)0x3a,  /* [6071] */
    (xdc_Char)0x20,  /* [6072] */
    (xdc_Char)0x25,  /* [6073] */
    (xdc_Char)0x64,  /* [6074] */
    (xdc_Char)0x2c,  /* [6075] */
    (xdc_Char)0x20,  /* [6076] */
    (xdc_Char)0x63,  /* [6077] */
    (xdc_Char)0x75,  /* [6078] */
    (xdc_Char)0x72,  /* [6079] */
    (xdc_Char)0x53,  /* [6080] */
    (xdc_Char)0x65,  /* [6081] */
    (xdc_Char)0x74,  /* [6082] */
    (xdc_Char)0x58,  /* [6083] */
    (xdc_Char)0x3a,  /* [6084] */
    (xdc_Char)0x20,  /* [6085] */
    (xdc_Char)0x25,  /* [6086] */
    (xdc_Char)0x64,  /* [6087] */
    (xdc_Char)0x2c,  /* [6088] */
    (xdc_Char)0x20,  /* [6089] */
    (xdc_Char)0x63,  /* [6090] */
    (xdc_Char)0x75,  /* [6091] */
    (xdc_Char)0x72,  /* [6092] */
    (xdc_Char)0x4d,  /* [6093] */
    (xdc_Char)0x61,  /* [6094] */
    (xdc_Char)0x73,  /* [6095] */
    (xdc_Char)0x6b,  /* [6096] */
    (xdc_Char)0x4c,  /* [6097] */
    (xdc_Char)0x6f,  /* [6098] */
    (xdc_Char)0x63,  /* [6099] */
    (xdc_Char)0x61,  /* [6100] */
    (xdc_Char)0x6c,  /* [6101] */
    (xdc_Char)0x3a,  /* [6102] */
    (xdc_Char)0x20,  /* [6103] */
    (xdc_Char)0x25,  /* [6104] */
    (xdc_Char)0x64,  /* [6105] */
    (xdc_Char)0x0,  /* [6106] */
    (xdc_Char)0x4c,  /* [6107] */
    (xdc_Char)0x44,  /* [6108] */
    (xdc_Char)0x5f,  /* [6109] */
    (xdc_Char)0x6e,  /* [6110] */
    (xdc_Char)0x6f,  /* [6111] */
    (xdc_Char)0x57,  /* [6112] */
    (xdc_Char)0x6f,  /* [6113] */
    (xdc_Char)0x72,  /* [6114] */
    (xdc_Char)0x6b,  /* [6115] */
    (xdc_Char)0x3a,  /* [6116] */
    (xdc_Char)0x20,  /* [6117] */
    (xdc_Char)0x63,  /* [6118] */
    (xdc_Char)0x6f,  /* [6119] */
    (xdc_Char)0x72,  /* [6120] */
    (xdc_Char)0x65,  /* [6121] */
    (xdc_Char)0x49,  /* [6122] */
    (xdc_Char)0x64,  /* [6123] */
    (xdc_Char)0x3a,  /* [6124] */
    (xdc_Char)0x20,  /* [6125] */
    (xdc_Char)0x25,  /* [6126] */
    (xdc_Char)0x64,  /* [6127] */
    (xdc_Char)0x2c,  /* [6128] */
    (xdc_Char)0x20,  /* [6129] */
    (xdc_Char)0x63,  /* [6130] */
    (xdc_Char)0x75,  /* [6131] */
    (xdc_Char)0x72,  /* [6132] */
    (xdc_Char)0x53,  /* [6133] */
    (xdc_Char)0x65,  /* [6134] */
    (xdc_Char)0x74,  /* [6135] */
    (xdc_Char)0x4c,  /* [6136] */
    (xdc_Char)0x6f,  /* [6137] */
    (xdc_Char)0x63,  /* [6138] */
    (xdc_Char)0x61,  /* [6139] */
    (xdc_Char)0x6c,  /* [6140] */
    (xdc_Char)0x3a,  /* [6141] */
    (xdc_Char)0x20,  /* [6142] */
    (xdc_Char)0x25,  /* [6143] */
    (xdc_Char)0x64,  /* [6144] */
    (xdc_Char)0x2c,  /* [6145] */
    (xdc_Char)0x20,  /* [6146] */
    (xdc_Char)0x63,  /* [6147] */
    (xdc_Char)0x75,  /* [6148] */
    (xdc_Char)0x72,  /* [6149] */
    (xdc_Char)0x53,  /* [6150] */
    (xdc_Char)0x65,  /* [6151] */
    (xdc_Char)0x74,  /* [6152] */
    (xdc_Char)0x58,  /* [6153] */
    (xdc_Char)0x3a,  /* [6154] */
    (xdc_Char)0x20,  /* [6155] */
    (xdc_Char)0x25,  /* [6156] */
    (xdc_Char)0x64,  /* [6157] */
    (xdc_Char)0x2c,  /* [6158] */
    (xdc_Char)0x20,  /* [6159] */
    (xdc_Char)0x63,  /* [6160] */
    (xdc_Char)0x75,  /* [6161] */
    (xdc_Char)0x72,  /* [6162] */
    (xdc_Char)0x4d,  /* [6163] */
    (xdc_Char)0x61,  /* [6164] */
    (xdc_Char)0x73,  /* [6165] */
    (xdc_Char)0x6b,  /* [6166] */
    (xdc_Char)0x4c,  /* [6167] */
    (xdc_Char)0x6f,  /* [6168] */
    (xdc_Char)0x63,  /* [6169] */
    (xdc_Char)0x61,  /* [6170] */
    (xdc_Char)0x6c,  /* [6171] */
    (xdc_Char)0x3a,  /* [6172] */
    (xdc_Char)0x20,  /* [6173] */
    (xdc_Char)0x25,  /* [6174] */
    (xdc_Char)0x64,  /* [6175] */
    (xdc_Char)0x0,  /* [6176] */
    (xdc_Char)0x45,  /* [6177] */
    (xdc_Char)0x52,  /* [6178] */
    (xdc_Char)0x52,  /* [6179] */
    (xdc_Char)0x4f,  /* [6180] */
    (xdc_Char)0x52,  /* [6181] */
    (xdc_Char)0x3a,  /* [6182] */
    (xdc_Char)0x20,  /* [6183] */
    (xdc_Char)0x45,  /* [6184] */
    (xdc_Char)0x72,  /* [6185] */
    (xdc_Char)0x72,  /* [6186] */
    (xdc_Char)0x6f,  /* [6187] */
    (xdc_Char)0x72,  /* [6188] */
    (xdc_Char)0x43,  /* [6189] */
    (xdc_Char)0x6f,  /* [6190] */
    (xdc_Char)0x64,  /* [6191] */
    (xdc_Char)0x65,  /* [6192] */
    (xdc_Char)0x3a,  /* [6193] */
    (xdc_Char)0x30,  /* [6194] */
    (xdc_Char)0x78,  /* [6195] */
    (xdc_Char)0x25,  /* [6196] */
    (xdc_Char)0x78,  /* [6197] */
    (xdc_Char)0x0,  /* [6198] */
    (xdc_Char)0x45,  /* [6199] */
    (xdc_Char)0x52,  /* [6200] */
    (xdc_Char)0x52,  /* [6201] */
    (xdc_Char)0x4f,  /* [6202] */
    (xdc_Char)0x52,  /* [6203] */
    (xdc_Char)0x3a,  /* [6204] */
    (xdc_Char)0x20,  /* [6205] */
    (xdc_Char)0x45,  /* [6206] */
    (xdc_Char)0x72,  /* [6207] */
    (xdc_Char)0x72,  /* [6208] */
    (xdc_Char)0x6f,  /* [6209] */
    (xdc_Char)0x72,  /* [6210] */
    (xdc_Char)0x43,  /* [6211] */
    (xdc_Char)0x6f,  /* [6212] */
    (xdc_Char)0x64,  /* [6213] */
    (xdc_Char)0x65,  /* [6214] */
    (xdc_Char)0x3a,  /* [6215] */
    (xdc_Char)0x30,  /* [6216] */
    (xdc_Char)0x78,  /* [6217] */
    (xdc_Char)0x25,  /* [6218] */
    (xdc_Char)0x78,  /* [6219] */
    (xdc_Char)0x2e,  /* [6220] */
    (xdc_Char)0x20,  /* [6221] */
    (xdc_Char)0x25,  /* [6222] */
    (xdc_Char)0x24,  /* [6223] */
    (xdc_Char)0x53,  /* [6224] */
    (xdc_Char)0x0,  /* [6225] */
    (xdc_Char)0x48,  /* [6226] */
    (xdc_Char)0x57,  /* [6227] */
    (xdc_Char)0x20,  /* [6228] */
    (xdc_Char)0x45,  /* [6229] */
    (xdc_Char)0x52,  /* [6230] */
    (xdc_Char)0x52,  /* [6231] */
    (xdc_Char)0x4f,  /* [6232] */
    (xdc_Char)0x52,  /* [6233] */
    (xdc_Char)0x3a,  /* [6234] */
    (xdc_Char)0x20,  /* [6235] */
    (xdc_Char)0x45,  /* [6236] */
    (xdc_Char)0x72,  /* [6237] */
    (xdc_Char)0x72,  /* [6238] */
    (xdc_Char)0x6f,  /* [6239] */
    (xdc_Char)0x72,  /* [6240] */
    (xdc_Char)0x43,  /* [6241] */
    (xdc_Char)0x6f,  /* [6242] */
    (xdc_Char)0x64,  /* [6243] */
    (xdc_Char)0x65,  /* [6244] */
    (xdc_Char)0x3a,  /* [6245] */
    (xdc_Char)0x30,  /* [6246] */
    (xdc_Char)0x78,  /* [6247] */
    (xdc_Char)0x25,  /* [6248] */
    (xdc_Char)0x78,  /* [6249] */
    (xdc_Char)0x0,  /* [6250] */
    (xdc_Char)0x48,  /* [6251] */
    (xdc_Char)0x57,  /* [6252] */
    (xdc_Char)0x20,  /* [6253] */
    (xdc_Char)0x45,  /* [6254] */
    (xdc_Char)0x52,  /* [6255] */
    (xdc_Char)0x52,  /* [6256] */
    (xdc_Char)0x4f,  /* [6257] */
    (xdc_Char)0x52,  /* [6258] */
    (xdc_Char)0x3a,  /* [6259] */
    (xdc_Char)0x20,  /* [6260] */
    (xdc_Char)0x45,  /* [6261] */
    (xdc_Char)0x72,  /* [6262] */
    (xdc_Char)0x72,  /* [6263] */
    (xdc_Char)0x6f,  /* [6264] */
    (xdc_Char)0x72,  /* [6265] */
    (xdc_Char)0x43,  /* [6266] */
    (xdc_Char)0x6f,  /* [6267] */
    (xdc_Char)0x64,  /* [6268] */
    (xdc_Char)0x65,  /* [6269] */
    (xdc_Char)0x3a,  /* [6270] */
    (xdc_Char)0x30,  /* [6271] */
    (xdc_Char)0x78,  /* [6272] */
    (xdc_Char)0x25,  /* [6273] */
    (xdc_Char)0x78,  /* [6274] */
    (xdc_Char)0x2e,  /* [6275] */
    (xdc_Char)0x20,  /* [6276] */
    (xdc_Char)0x25,  /* [6277] */
    (xdc_Char)0x24,  /* [6278] */
    (xdc_Char)0x53,  /* [6279] */
    (xdc_Char)0x0,  /* [6280] */
    (xdc_Char)0x46,  /* [6281] */
    (xdc_Char)0x41,  /* [6282] */
    (xdc_Char)0x54,  /* [6283] */
    (xdc_Char)0x41,  /* [6284] */
    (xdc_Char)0x4c,  /* [6285] */
    (xdc_Char)0x20,  /* [6286] */
    (xdc_Char)0x45,  /* [6287] */
    (xdc_Char)0x52,  /* [6288] */
    (xdc_Char)0x52,  /* [6289] */
    (xdc_Char)0x4f,  /* [6290] */
    (xdc_Char)0x52,  /* [6291] */
    (xdc_Char)0x3a,  /* [6292] */
    (xdc_Char)0x20,  /* [6293] */
    (xdc_Char)0x45,  /* [6294] */
    (xdc_Char)0x72,  /* [6295] */
    (xdc_Char)0x72,  /* [6296] */
    (xdc_Char)0x6f,  /* [6297] */
    (xdc_Char)0x72,  /* [6298] */
    (xdc_Char)0x43,  /* [6299] */
    (xdc_Char)0x6f,  /* [6300] */
    (xdc_Char)0x64,  /* [6301] */
    (xdc_Char)0x65,  /* [6302] */
    (xdc_Char)0x3a,  /* [6303] */
    (xdc_Char)0x30,  /* [6304] */
    (xdc_Char)0x78,  /* [6305] */
    (xdc_Char)0x25,  /* [6306] */
    (xdc_Char)0x78,  /* [6307] */
    (xdc_Char)0x0,  /* [6308] */
    (xdc_Char)0x46,  /* [6309] */
    (xdc_Char)0x41,  /* [6310] */
    (xdc_Char)0x54,  /* [6311] */
    (xdc_Char)0x41,  /* [6312] */
    (xdc_Char)0x4c,  /* [6313] */
    (xdc_Char)0x20,  /* [6314] */
    (xdc_Char)0x45,  /* [6315] */
    (xdc_Char)0x52,  /* [6316] */
    (xdc_Char)0x52,  /* [6317] */
    (xdc_Char)0x4f,  /* [6318] */
    (xdc_Char)0x52,  /* [6319] */
    (xdc_Char)0x3a,  /* [6320] */
    (xdc_Char)0x20,  /* [6321] */
    (xdc_Char)0x45,  /* [6322] */
    (xdc_Char)0x72,  /* [6323] */
    (xdc_Char)0x72,  /* [6324] */
    (xdc_Char)0x6f,  /* [6325] */
    (xdc_Char)0x72,  /* [6326] */
    (xdc_Char)0x43,  /* [6327] */
    (xdc_Char)0x6f,  /* [6328] */
    (xdc_Char)0x64,  /* [6329] */
    (xdc_Char)0x65,  /* [6330] */
    (xdc_Char)0x3a,  /* [6331] */
    (xdc_Char)0x30,  /* [6332] */
    (xdc_Char)0x78,  /* [6333] */
    (xdc_Char)0x25,  /* [6334] */
    (xdc_Char)0x78,  /* [6335] */
    (xdc_Char)0x2e,  /* [6336] */
    (xdc_Char)0x20,  /* [6337] */
    (xdc_Char)0x25,  /* [6338] */
    (xdc_Char)0x24,  /* [6339] */
    (xdc_Char)0x53,  /* [6340] */
    (xdc_Char)0x0,  /* [6341] */
    (xdc_Char)0x43,  /* [6342] */
    (xdc_Char)0x52,  /* [6343] */
    (xdc_Char)0x49,  /* [6344] */
    (xdc_Char)0x54,  /* [6345] */
    (xdc_Char)0x49,  /* [6346] */
    (xdc_Char)0x43,  /* [6347] */
    (xdc_Char)0x41,  /* [6348] */
    (xdc_Char)0x4c,  /* [6349] */
    (xdc_Char)0x20,  /* [6350] */
    (xdc_Char)0x45,  /* [6351] */
    (xdc_Char)0x52,  /* [6352] */
    (xdc_Char)0x52,  /* [6353] */
    (xdc_Char)0x4f,  /* [6354] */
    (xdc_Char)0x52,  /* [6355] */
    (xdc_Char)0x3a,  /* [6356] */
    (xdc_Char)0x20,  /* [6357] */
    (xdc_Char)0x45,  /* [6358] */
    (xdc_Char)0x72,  /* [6359] */
    (xdc_Char)0x72,  /* [6360] */
    (xdc_Char)0x6f,  /* [6361] */
    (xdc_Char)0x72,  /* [6362] */
    (xdc_Char)0x43,  /* [6363] */
    (xdc_Char)0x6f,  /* [6364] */
    (xdc_Char)0x64,  /* [6365] */
    (xdc_Char)0x65,  /* [6366] */
    (xdc_Char)0x3a,  /* [6367] */
    (xdc_Char)0x30,  /* [6368] */
    (xdc_Char)0x78,  /* [6369] */
    (xdc_Char)0x25,  /* [6370] */
    (xdc_Char)0x78,  /* [6371] */
    (xdc_Char)0x0,  /* [6372] */
    (xdc_Char)0x43,  /* [6373] */
    (xdc_Char)0x52,  /* [6374] */
    (xdc_Char)0x49,  /* [6375] */
    (xdc_Char)0x54,  /* [6376] */
    (xdc_Char)0x49,  /* [6377] */
    (xdc_Char)0x43,  /* [6378] */
    (xdc_Char)0x41,  /* [6379] */
    (xdc_Char)0x4c,  /* [6380] */
    (xdc_Char)0x20,  /* [6381] */
    (xdc_Char)0x45,  /* [6382] */
    (xdc_Char)0x52,  /* [6383] */
    (xdc_Char)0x52,  /* [6384] */
    (xdc_Char)0x4f,  /* [6385] */
    (xdc_Char)0x52,  /* [6386] */
    (xdc_Char)0x3a,  /* [6387] */
    (xdc_Char)0x20,  /* [6388] */
    (xdc_Char)0x45,  /* [6389] */
    (xdc_Char)0x72,  /* [6390] */
    (xdc_Char)0x72,  /* [6391] */
    (xdc_Char)0x6f,  /* [6392] */
    (xdc_Char)0x72,  /* [6393] */
    (xdc_Char)0x43,  /* [6394] */
    (xdc_Char)0x6f,  /* [6395] */
    (xdc_Char)0x64,  /* [6396] */
    (xdc_Char)0x65,  /* [6397] */
    (xdc_Char)0x3a,  /* [6398] */
    (xdc_Char)0x30,  /* [6399] */
    (xdc_Char)0x78,  /* [6400] */
    (xdc_Char)0x25,  /* [6401] */
    (xdc_Char)0x78,  /* [6402] */
    (xdc_Char)0x2e,  /* [6403] */
    (xdc_Char)0x20,  /* [6404] */
    (xdc_Char)0x25,  /* [6405] */
    (xdc_Char)0x24,  /* [6406] */
    (xdc_Char)0x53,  /* [6407] */
    (xdc_Char)0x0,  /* [6408] */
    (xdc_Char)0x45,  /* [6409] */
    (xdc_Char)0x52,  /* [6410] */
    (xdc_Char)0x52,  /* [6411] */
    (xdc_Char)0x4f,  /* [6412] */
    (xdc_Char)0x52,  /* [6413] */
    (xdc_Char)0x3a,  /* [6414] */
    (xdc_Char)0x20,  /* [6415] */
    (xdc_Char)0x45,  /* [6416] */
    (xdc_Char)0x78,  /* [6417] */
    (xdc_Char)0x63,  /* [6418] */
    (xdc_Char)0x65,  /* [6419] */
    (xdc_Char)0x70,  /* [6420] */
    (xdc_Char)0x74,  /* [6421] */
    (xdc_Char)0x69,  /* [6422] */
    (xdc_Char)0x6f,  /* [6423] */
    (xdc_Char)0x6e,  /* [6424] */
    (xdc_Char)0x20,  /* [6425] */
    (xdc_Char)0x61,  /* [6426] */
    (xdc_Char)0x74,  /* [6427] */
    (xdc_Char)0x20,  /* [6428] */
    (xdc_Char)0x25,  /* [6429] */
    (xdc_Char)0x24,  /* [6430] */
    (xdc_Char)0x46,  /* [6431] */
    (xdc_Char)0x2e,  /* [6432] */
    (xdc_Char)0x0,  /* [6433] */
    (xdc_Char)0x45,  /* [6434] */
    (xdc_Char)0x52,  /* [6435] */
    (xdc_Char)0x52,  /* [6436] */
    (xdc_Char)0x4f,  /* [6437] */
    (xdc_Char)0x52,  /* [6438] */
    (xdc_Char)0x3a,  /* [6439] */
    (xdc_Char)0x20,  /* [6440] */
    (xdc_Char)0x55,  /* [6441] */
    (xdc_Char)0x6e,  /* [6442] */
    (xdc_Char)0x63,  /* [6443] */
    (xdc_Char)0x61,  /* [6444] */
    (xdc_Char)0x75,  /* [6445] */
    (xdc_Char)0x67,  /* [6446] */
    (xdc_Char)0x68,  /* [6447] */
    (xdc_Char)0x74,  /* [6448] */
    (xdc_Char)0x20,  /* [6449] */
    (xdc_Char)0x45,  /* [6450] */
    (xdc_Char)0x78,  /* [6451] */
    (xdc_Char)0x63,  /* [6452] */
    (xdc_Char)0x65,  /* [6453] */
    (xdc_Char)0x70,  /* [6454] */
    (xdc_Char)0x74,  /* [6455] */
    (xdc_Char)0x69,  /* [6456] */
    (xdc_Char)0x6f,  /* [6457] */
    (xdc_Char)0x6e,  /* [6458] */
    (xdc_Char)0x20,  /* [6459] */
    (xdc_Char)0x61,  /* [6460] */
    (xdc_Char)0x74,  /* [6461] */
    (xdc_Char)0x20,  /* [6462] */
    (xdc_Char)0x25,  /* [6463] */
    (xdc_Char)0x24,  /* [6464] */
    (xdc_Char)0x46,  /* [6465] */
    (xdc_Char)0x2e,  /* [6466] */
    (xdc_Char)0x0,  /* [6467] */
    (xdc_Char)0x45,  /* [6468] */
    (xdc_Char)0x52,  /* [6469] */
    (xdc_Char)0x52,  /* [6470] */
    (xdc_Char)0x4f,  /* [6471] */
    (xdc_Char)0x52,  /* [6472] */
    (xdc_Char)0x3a,  /* [6473] */
    (xdc_Char)0x20,  /* [6474] */
    (xdc_Char)0x4e,  /* [6475] */
    (xdc_Char)0x75,  /* [6476] */
    (xdc_Char)0x6c,  /* [6477] */
    (xdc_Char)0x6c,  /* [6478] */
    (xdc_Char)0x20,  /* [6479] */
    (xdc_Char)0x50,  /* [6480] */
    (xdc_Char)0x6f,  /* [6481] */
    (xdc_Char)0x69,  /* [6482] */
    (xdc_Char)0x6e,  /* [6483] */
    (xdc_Char)0x74,  /* [6484] */
    (xdc_Char)0x65,  /* [6485] */
    (xdc_Char)0x72,  /* [6486] */
    (xdc_Char)0x20,  /* [6487] */
    (xdc_Char)0x45,  /* [6488] */
    (xdc_Char)0x78,  /* [6489] */
    (xdc_Char)0x63,  /* [6490] */
    (xdc_Char)0x65,  /* [6491] */
    (xdc_Char)0x70,  /* [6492] */
    (xdc_Char)0x74,  /* [6493] */
    (xdc_Char)0x69,  /* [6494] */
    (xdc_Char)0x6f,  /* [6495] */
    (xdc_Char)0x6e,  /* [6496] */
    (xdc_Char)0x20,  /* [6497] */
    (xdc_Char)0x61,  /* [6498] */
    (xdc_Char)0x74,  /* [6499] */
    (xdc_Char)0x20,  /* [6500] */
    (xdc_Char)0x25,  /* [6501] */
    (xdc_Char)0x24,  /* [6502] */
    (xdc_Char)0x46,  /* [6503] */
    (xdc_Char)0x2e,  /* [6504] */
    (xdc_Char)0x0,  /* [6505] */
    (xdc_Char)0x45,  /* [6506] */
    (xdc_Char)0x52,  /* [6507] */
    (xdc_Char)0x52,  /* [6508] */
    (xdc_Char)0x4f,  /* [6509] */
    (xdc_Char)0x52,  /* [6510] */
    (xdc_Char)0x3a,  /* [6511] */
    (xdc_Char)0x20,  /* [6512] */
    (xdc_Char)0x55,  /* [6513] */
    (xdc_Char)0x6e,  /* [6514] */
    (xdc_Char)0x65,  /* [6515] */
    (xdc_Char)0x78,  /* [6516] */
    (xdc_Char)0x70,  /* [6517] */
    (xdc_Char)0x65,  /* [6518] */
    (xdc_Char)0x63,  /* [6519] */
    (xdc_Char)0x74,  /* [6520] */
    (xdc_Char)0x65,  /* [6521] */
    (xdc_Char)0x64,  /* [6522] */
    (xdc_Char)0x20,  /* [6523] */
    (xdc_Char)0x49,  /* [6524] */
    (xdc_Char)0x6e,  /* [6525] */
    (xdc_Char)0x74,  /* [6526] */
    (xdc_Char)0x65,  /* [6527] */
    (xdc_Char)0x72,  /* [6528] */
    (xdc_Char)0x72,  /* [6529] */
    (xdc_Char)0x75,  /* [6530] */
    (xdc_Char)0x70,  /* [6531] */
    (xdc_Char)0x74,  /* [6532] */
    (xdc_Char)0x20,  /* [6533] */
    (xdc_Char)0x61,  /* [6534] */
    (xdc_Char)0x74,  /* [6535] */
    (xdc_Char)0x20,  /* [6536] */
    (xdc_Char)0x25,  /* [6537] */
    (xdc_Char)0x24,  /* [6538] */
    (xdc_Char)0x46,  /* [6539] */
    (xdc_Char)0x2e,  /* [6540] */
    (xdc_Char)0x0,  /* [6541] */
    (xdc_Char)0x45,  /* [6542] */
    (xdc_Char)0x52,  /* [6543] */
    (xdc_Char)0x52,  /* [6544] */
    (xdc_Char)0x4f,  /* [6545] */
    (xdc_Char)0x52,  /* [6546] */
    (xdc_Char)0x3a,  /* [6547] */
    (xdc_Char)0x20,  /* [6548] */
    (xdc_Char)0x4d,  /* [6549] */
    (xdc_Char)0x65,  /* [6550] */
    (xdc_Char)0x6d,  /* [6551] */
    (xdc_Char)0x6f,  /* [6552] */
    (xdc_Char)0x72,  /* [6553] */
    (xdc_Char)0x79,  /* [6554] */
    (xdc_Char)0x20,  /* [6555] */
    (xdc_Char)0x41,  /* [6556] */
    (xdc_Char)0x63,  /* [6557] */
    (xdc_Char)0x63,  /* [6558] */
    (xdc_Char)0x65,  /* [6559] */
    (xdc_Char)0x73,  /* [6560] */
    (xdc_Char)0x73,  /* [6561] */
    (xdc_Char)0x20,  /* [6562] */
    (xdc_Char)0x46,  /* [6563] */
    (xdc_Char)0x61,  /* [6564] */
    (xdc_Char)0x75,  /* [6565] */
    (xdc_Char)0x6c,  /* [6566] */
    (xdc_Char)0x74,  /* [6567] */
    (xdc_Char)0x20,  /* [6568] */
    (xdc_Char)0x61,  /* [6569] */
    (xdc_Char)0x74,  /* [6570] */
    (xdc_Char)0x20,  /* [6571] */
    (xdc_Char)0x25,  /* [6572] */
    (xdc_Char)0x24,  /* [6573] */
    (xdc_Char)0x46,  /* [6574] */
    (xdc_Char)0x2e,  /* [6575] */
    (xdc_Char)0x20,  /* [6576] */
    (xdc_Char)0x5b,  /* [6577] */
    (xdc_Char)0x41,  /* [6578] */
    (xdc_Char)0x44,  /* [6579] */
    (xdc_Char)0x52,  /* [6580] */
    (xdc_Char)0x53,  /* [6581] */
    (xdc_Char)0x5d,  /* [6582] */
    (xdc_Char)0x30,  /* [6583] */
    (xdc_Char)0x78,  /* [6584] */
    (xdc_Char)0x25,  /* [6585] */
    (xdc_Char)0x78,  /* [6586] */
    (xdc_Char)0x0,  /* [6587] */
    (xdc_Char)0x45,  /* [6588] */
    (xdc_Char)0x52,  /* [6589] */
    (xdc_Char)0x52,  /* [6590] */
    (xdc_Char)0x4f,  /* [6591] */
    (xdc_Char)0x52,  /* [6592] */
    (xdc_Char)0x3a,  /* [6593] */
    (xdc_Char)0x20,  /* [6594] */
    (xdc_Char)0x53,  /* [6595] */
    (xdc_Char)0x65,  /* [6596] */
    (xdc_Char)0x63,  /* [6597] */
    (xdc_Char)0x75,  /* [6598] */
    (xdc_Char)0x72,  /* [6599] */
    (xdc_Char)0x69,  /* [6600] */
    (xdc_Char)0x74,  /* [6601] */
    (xdc_Char)0x79,  /* [6602] */
    (xdc_Char)0x20,  /* [6603] */
    (xdc_Char)0x45,  /* [6604] */
    (xdc_Char)0x78,  /* [6605] */
    (xdc_Char)0x63,  /* [6606] */
    (xdc_Char)0x65,  /* [6607] */
    (xdc_Char)0x70,  /* [6608] */
    (xdc_Char)0x74,  /* [6609] */
    (xdc_Char)0x69,  /* [6610] */
    (xdc_Char)0x6f,  /* [6611] */
    (xdc_Char)0x6e,  /* [6612] */
    (xdc_Char)0x20,  /* [6613] */
    (xdc_Char)0x61,  /* [6614] */
    (xdc_Char)0x74,  /* [6615] */
    (xdc_Char)0x20,  /* [6616] */
    (xdc_Char)0x25,  /* [6617] */
    (xdc_Char)0x24,  /* [6618] */
    (xdc_Char)0x46,  /* [6619] */
    (xdc_Char)0x2e,  /* [6620] */
    (xdc_Char)0x0,  /* [6621] */
    (xdc_Char)0x45,  /* [6622] */
    (xdc_Char)0x52,  /* [6623] */
    (xdc_Char)0x52,  /* [6624] */
    (xdc_Char)0x4f,  /* [6625] */
    (xdc_Char)0x52,  /* [6626] */
    (xdc_Char)0x3a,  /* [6627] */
    (xdc_Char)0x20,  /* [6628] */
    (xdc_Char)0x44,  /* [6629] */
    (xdc_Char)0x69,  /* [6630] */
    (xdc_Char)0x76,  /* [6631] */
    (xdc_Char)0x69,  /* [6632] */
    (xdc_Char)0x73,  /* [6633] */
    (xdc_Char)0x69,  /* [6634] */
    (xdc_Char)0x6f,  /* [6635] */
    (xdc_Char)0x6e,  /* [6636] */
    (xdc_Char)0x20,  /* [6637] */
    (xdc_Char)0x62,  /* [6638] */
    (xdc_Char)0x79,  /* [6639] */
    (xdc_Char)0x20,  /* [6640] */
    (xdc_Char)0x7a,  /* [6641] */
    (xdc_Char)0x65,  /* [6642] */
    (xdc_Char)0x72,  /* [6643] */
    (xdc_Char)0x6f,  /* [6644] */
    (xdc_Char)0x20,  /* [6645] */
    (xdc_Char)0x61,  /* [6646] */
    (xdc_Char)0x74,  /* [6647] */
    (xdc_Char)0x20,  /* [6648] */
    (xdc_Char)0x25,  /* [6649] */
    (xdc_Char)0x24,  /* [6650] */
    (xdc_Char)0x46,  /* [6651] */
    (xdc_Char)0x2e,  /* [6652] */
    (xdc_Char)0x0,  /* [6653] */
    (xdc_Char)0x45,  /* [6654] */
    (xdc_Char)0x52,  /* [6655] */
    (xdc_Char)0x52,  /* [6656] */
    (xdc_Char)0x4f,  /* [6657] */
    (xdc_Char)0x52,  /* [6658] */
    (xdc_Char)0x3a,  /* [6659] */
    (xdc_Char)0x20,  /* [6660] */
    (xdc_Char)0x4f,  /* [6661] */
    (xdc_Char)0x76,  /* [6662] */
    (xdc_Char)0x65,  /* [6663] */
    (xdc_Char)0x72,  /* [6664] */
    (xdc_Char)0x66,  /* [6665] */
    (xdc_Char)0x6c,  /* [6666] */
    (xdc_Char)0x6f,  /* [6667] */
    (xdc_Char)0x77,  /* [6668] */
    (xdc_Char)0x20,  /* [6669] */
    (xdc_Char)0x65,  /* [6670] */
    (xdc_Char)0x78,  /* [6671] */
    (xdc_Char)0x63,  /* [6672] */
    (xdc_Char)0x65,  /* [6673] */
    (xdc_Char)0x70,  /* [6674] */
    (xdc_Char)0x74,  /* [6675] */
    (xdc_Char)0x69,  /* [6676] */
    (xdc_Char)0x6f,  /* [6677] */
    (xdc_Char)0x6e,  /* [6678] */
    (xdc_Char)0x20,  /* [6679] */
    (xdc_Char)0x61,  /* [6680] */
    (xdc_Char)0x74,  /* [6681] */
    (xdc_Char)0x20,  /* [6682] */
    (xdc_Char)0x25,  /* [6683] */
    (xdc_Char)0x24,  /* [6684] */
    (xdc_Char)0x46,  /* [6685] */
    (xdc_Char)0x2e,  /* [6686] */
    (xdc_Char)0x0,  /* [6687] */
    (xdc_Char)0x45,  /* [6688] */
    (xdc_Char)0x52,  /* [6689] */
    (xdc_Char)0x52,  /* [6690] */
    (xdc_Char)0x4f,  /* [6691] */
    (xdc_Char)0x52,  /* [6692] */
    (xdc_Char)0x3a,  /* [6693] */
    (xdc_Char)0x20,  /* [6694] */
    (xdc_Char)0x49,  /* [6695] */
    (xdc_Char)0x6e,  /* [6696] */
    (xdc_Char)0x64,  /* [6697] */
    (xdc_Char)0x65,  /* [6698] */
    (xdc_Char)0x78,  /* [6699] */
    (xdc_Char)0x20,  /* [6700] */
    (xdc_Char)0x6f,  /* [6701] */
    (xdc_Char)0x75,  /* [6702] */
    (xdc_Char)0x74,  /* [6703] */
    (xdc_Char)0x20,  /* [6704] */
    (xdc_Char)0x6f,  /* [6705] */
    (xdc_Char)0x66,  /* [6706] */
    (xdc_Char)0x20,  /* [6707] */
    (xdc_Char)0x72,  /* [6708] */
    (xdc_Char)0x61,  /* [6709] */
    (xdc_Char)0x6e,  /* [6710] */
    (xdc_Char)0x67,  /* [6711] */
    (xdc_Char)0x65,  /* [6712] */
    (xdc_Char)0x20,  /* [6713] */
    (xdc_Char)0x61,  /* [6714] */
    (xdc_Char)0x74,  /* [6715] */
    (xdc_Char)0x20,  /* [6716] */
    (xdc_Char)0x25,  /* [6717] */
    (xdc_Char)0x24,  /* [6718] */
    (xdc_Char)0x46,  /* [6719] */
    (xdc_Char)0x2e,  /* [6720] */
    (xdc_Char)0x20,  /* [6721] */
    (xdc_Char)0x5b,  /* [6722] */
    (xdc_Char)0x49,  /* [6723] */
    (xdc_Char)0x4e,  /* [6724] */
    (xdc_Char)0x44,  /* [6725] */
    (xdc_Char)0x45,  /* [6726] */
    (xdc_Char)0x58,  /* [6727] */
    (xdc_Char)0x5d,  /* [6728] */
    (xdc_Char)0x30,  /* [6729] */
    (xdc_Char)0x78,  /* [6730] */
    (xdc_Char)0x25,  /* [6731] */
    (xdc_Char)0x78,  /* [6732] */
    (xdc_Char)0x0,  /* [6733] */
    (xdc_Char)0x45,  /* [6734] */
    (xdc_Char)0x52,  /* [6735] */
    (xdc_Char)0x52,  /* [6736] */
    (xdc_Char)0x4f,  /* [6737] */
    (xdc_Char)0x52,  /* [6738] */
    (xdc_Char)0x3a,  /* [6739] */
    (xdc_Char)0x20,  /* [6740] */
    (xdc_Char)0x41,  /* [6741] */
    (xdc_Char)0x74,  /* [6742] */
    (xdc_Char)0x74,  /* [6743] */
    (xdc_Char)0x65,  /* [6744] */
    (xdc_Char)0x6d,  /* [6745] */
    (xdc_Char)0x70,  /* [6746] */
    (xdc_Char)0x74,  /* [6747] */
    (xdc_Char)0x20,  /* [6748] */
    (xdc_Char)0x74,  /* [6749] */
    (xdc_Char)0x6f,  /* [6750] */
    (xdc_Char)0x20,  /* [6751] */
    (xdc_Char)0x61,  /* [6752] */
    (xdc_Char)0x63,  /* [6753] */
    (xdc_Char)0x63,  /* [6754] */
    (xdc_Char)0x65,  /* [6755] */
    (xdc_Char)0x73,  /* [6756] */
    (xdc_Char)0x73,  /* [6757] */
    (xdc_Char)0x20,  /* [6758] */
    (xdc_Char)0x66,  /* [6759] */
    (xdc_Char)0x65,  /* [6760] */
    (xdc_Char)0x61,  /* [6761] */
    (xdc_Char)0x74,  /* [6762] */
    (xdc_Char)0x75,  /* [6763] */
    (xdc_Char)0x72,  /* [6764] */
    (xdc_Char)0x65,  /* [6765] */
    (xdc_Char)0x20,  /* [6766] */
    (xdc_Char)0x74,  /* [6767] */
    (xdc_Char)0x68,  /* [6768] */
    (xdc_Char)0x61,  /* [6769] */
    (xdc_Char)0x74,  /* [6770] */
    (xdc_Char)0x20,  /* [6771] */
    (xdc_Char)0x69,  /* [6772] */
    (xdc_Char)0x73,  /* [6773] */
    (xdc_Char)0x20,  /* [6774] */
    (xdc_Char)0x6e,  /* [6775] */
    (xdc_Char)0x6f,  /* [6776] */
    (xdc_Char)0x74,  /* [6777] */
    (xdc_Char)0x20,  /* [6778] */
    (xdc_Char)0x69,  /* [6779] */
    (xdc_Char)0x6d,  /* [6780] */
    (xdc_Char)0x70,  /* [6781] */
    (xdc_Char)0x6c,  /* [6782] */
    (xdc_Char)0x65,  /* [6783] */
    (xdc_Char)0x6d,  /* [6784] */
    (xdc_Char)0x65,  /* [6785] */
    (xdc_Char)0x6e,  /* [6786] */
    (xdc_Char)0x74,  /* [6787] */
    (xdc_Char)0x65,  /* [6788] */
    (xdc_Char)0x64,  /* [6789] */
    (xdc_Char)0x20,  /* [6790] */
    (xdc_Char)0x61,  /* [6791] */
    (xdc_Char)0x74,  /* [6792] */
    (xdc_Char)0x20,  /* [6793] */
    (xdc_Char)0x25,  /* [6794] */
    (xdc_Char)0x24,  /* [6795] */
    (xdc_Char)0x46,  /* [6796] */
    (xdc_Char)0x2e,  /* [6797] */
    (xdc_Char)0x0,  /* [6798] */
    (xdc_Char)0x45,  /* [6799] */
    (xdc_Char)0x52,  /* [6800] */
    (xdc_Char)0x52,  /* [6801] */
    (xdc_Char)0x4f,  /* [6802] */
    (xdc_Char)0x52,  /* [6803] */
    (xdc_Char)0x3a,  /* [6804] */
    (xdc_Char)0x20,  /* [6805] */
    (xdc_Char)0x53,  /* [6806] */
    (xdc_Char)0x74,  /* [6807] */
    (xdc_Char)0x61,  /* [6808] */
    (xdc_Char)0x63,  /* [6809] */
    (xdc_Char)0x6b,  /* [6810] */
    (xdc_Char)0x20,  /* [6811] */
    (xdc_Char)0x4f,  /* [6812] */
    (xdc_Char)0x76,  /* [6813] */
    (xdc_Char)0x65,  /* [6814] */
    (xdc_Char)0x72,  /* [6815] */
    (xdc_Char)0x66,  /* [6816] */
    (xdc_Char)0x6c,  /* [6817] */
    (xdc_Char)0x6f,  /* [6818] */
    (xdc_Char)0x77,  /* [6819] */
    (xdc_Char)0x20,  /* [6820] */
    (xdc_Char)0x64,  /* [6821] */
    (xdc_Char)0x65,  /* [6822] */
    (xdc_Char)0x74,  /* [6823] */
    (xdc_Char)0x65,  /* [6824] */
    (xdc_Char)0x63,  /* [6825] */
    (xdc_Char)0x74,  /* [6826] */
    (xdc_Char)0x65,  /* [6827] */
    (xdc_Char)0x64,  /* [6828] */
    (xdc_Char)0x20,  /* [6829] */
    (xdc_Char)0x61,  /* [6830] */
    (xdc_Char)0x74,  /* [6831] */
    (xdc_Char)0x20,  /* [6832] */
    (xdc_Char)0x25,  /* [6833] */
    (xdc_Char)0x24,  /* [6834] */
    (xdc_Char)0x46,  /* [6835] */
    (xdc_Char)0x2e,  /* [6836] */
    (xdc_Char)0x0,  /* [6837] */
    (xdc_Char)0x45,  /* [6838] */
    (xdc_Char)0x52,  /* [6839] */
    (xdc_Char)0x52,  /* [6840] */
    (xdc_Char)0x4f,  /* [6841] */
    (xdc_Char)0x52,  /* [6842] */
    (xdc_Char)0x3a,  /* [6843] */
    (xdc_Char)0x20,  /* [6844] */
    (xdc_Char)0x49,  /* [6845] */
    (xdc_Char)0x6c,  /* [6846] */
    (xdc_Char)0x6c,  /* [6847] */
    (xdc_Char)0x65,  /* [6848] */
    (xdc_Char)0x67,  /* [6849] */
    (xdc_Char)0x61,  /* [6850] */
    (xdc_Char)0x6c,  /* [6851] */
    (xdc_Char)0x20,  /* [6852] */
    (xdc_Char)0x49,  /* [6853] */
    (xdc_Char)0x6e,  /* [6854] */
    (xdc_Char)0x73,  /* [6855] */
    (xdc_Char)0x74,  /* [6856] */
    (xdc_Char)0x72,  /* [6857] */
    (xdc_Char)0x75,  /* [6858] */
    (xdc_Char)0x63,  /* [6859] */
    (xdc_Char)0x74,  /* [6860] */
    (xdc_Char)0x69,  /* [6861] */
    (xdc_Char)0x6f,  /* [6862] */
    (xdc_Char)0x6e,  /* [6863] */
    (xdc_Char)0x20,  /* [6864] */
    (xdc_Char)0x65,  /* [6865] */
    (xdc_Char)0x78,  /* [6866] */
    (xdc_Char)0x65,  /* [6867] */
    (xdc_Char)0x63,  /* [6868] */
    (xdc_Char)0x75,  /* [6869] */
    (xdc_Char)0x74,  /* [6870] */
    (xdc_Char)0x65,  /* [6871] */
    (xdc_Char)0x64,  /* [6872] */
    (xdc_Char)0x20,  /* [6873] */
    (xdc_Char)0x61,  /* [6874] */
    (xdc_Char)0x74,  /* [6875] */
    (xdc_Char)0x20,  /* [6876] */
    (xdc_Char)0x25,  /* [6877] */
    (xdc_Char)0x24,  /* [6878] */
    (xdc_Char)0x46,  /* [6879] */
    (xdc_Char)0x2e,  /* [6880] */
    (xdc_Char)0x0,  /* [6881] */
    (xdc_Char)0x45,  /* [6882] */
    (xdc_Char)0x52,  /* [6883] */
    (xdc_Char)0x52,  /* [6884] */
    (xdc_Char)0x4f,  /* [6885] */
    (xdc_Char)0x52,  /* [6886] */
    (xdc_Char)0x3a,  /* [6887] */
    (xdc_Char)0x20,  /* [6888] */
    (xdc_Char)0x45,  /* [6889] */
    (xdc_Char)0x6e,  /* [6890] */
    (xdc_Char)0x74,  /* [6891] */
    (xdc_Char)0x72,  /* [6892] */
    (xdc_Char)0x79,  /* [6893] */
    (xdc_Char)0x20,  /* [6894] */
    (xdc_Char)0x50,  /* [6895] */
    (xdc_Char)0x6f,  /* [6896] */
    (xdc_Char)0x69,  /* [6897] */
    (xdc_Char)0x6e,  /* [6898] */
    (xdc_Char)0x74,  /* [6899] */
    (xdc_Char)0x20,  /* [6900] */
    (xdc_Char)0x4e,  /* [6901] */
    (xdc_Char)0x6f,  /* [6902] */
    (xdc_Char)0x74,  /* [6903] */
    (xdc_Char)0x20,  /* [6904] */
    (xdc_Char)0x46,  /* [6905] */
    (xdc_Char)0x6f,  /* [6906] */
    (xdc_Char)0x75,  /* [6907] */
    (xdc_Char)0x6e,  /* [6908] */
    (xdc_Char)0x64,  /* [6909] */
    (xdc_Char)0x20,  /* [6910] */
    (xdc_Char)0x61,  /* [6911] */
    (xdc_Char)0x74,  /* [6912] */
    (xdc_Char)0x20,  /* [6913] */
    (xdc_Char)0x25,  /* [6914] */
    (xdc_Char)0x24,  /* [6915] */
    (xdc_Char)0x46,  /* [6916] */
    (xdc_Char)0x2e,  /* [6917] */
    (xdc_Char)0x0,  /* [6918] */
    (xdc_Char)0x45,  /* [6919] */
    (xdc_Char)0x52,  /* [6920] */
    (xdc_Char)0x52,  /* [6921] */
    (xdc_Char)0x4f,  /* [6922] */
    (xdc_Char)0x52,  /* [6923] */
    (xdc_Char)0x3a,  /* [6924] */
    (xdc_Char)0x20,  /* [6925] */
    (xdc_Char)0x4d,  /* [6926] */
    (xdc_Char)0x6f,  /* [6927] */
    (xdc_Char)0x64,  /* [6928] */
    (xdc_Char)0x75,  /* [6929] */
    (xdc_Char)0x6c,  /* [6930] */
    (xdc_Char)0x65,  /* [6931] */
    (xdc_Char)0x20,  /* [6932] */
    (xdc_Char)0x6e,  /* [6933] */
    (xdc_Char)0x6f,  /* [6934] */
    (xdc_Char)0x74,  /* [6935] */
    (xdc_Char)0x20,  /* [6936] */
    (xdc_Char)0x66,  /* [6937] */
    (xdc_Char)0x6f,  /* [6938] */
    (xdc_Char)0x75,  /* [6939] */
    (xdc_Char)0x6e,  /* [6940] */
    (xdc_Char)0x64,  /* [6941] */
    (xdc_Char)0x20,  /* [6942] */
    (xdc_Char)0x61,  /* [6943] */
    (xdc_Char)0x74,  /* [6944] */
    (xdc_Char)0x20,  /* [6945] */
    (xdc_Char)0x25,  /* [6946] */
    (xdc_Char)0x24,  /* [6947] */
    (xdc_Char)0x46,  /* [6948] */
    (xdc_Char)0x2e,  /* [6949] */
    (xdc_Char)0x20,  /* [6950] */
    (xdc_Char)0x5b,  /* [6951] */
    (xdc_Char)0x4d,  /* [6952] */
    (xdc_Char)0x4f,  /* [6953] */
    (xdc_Char)0x44,  /* [6954] */
    (xdc_Char)0x55,  /* [6955] */
    (xdc_Char)0x4c,  /* [6956] */
    (xdc_Char)0x45,  /* [6957] */
    (xdc_Char)0x5f,  /* [6958] */
    (xdc_Char)0x49,  /* [6959] */
    (xdc_Char)0x44,  /* [6960] */
    (xdc_Char)0x5d,  /* [6961] */
    (xdc_Char)0x30,  /* [6962] */
    (xdc_Char)0x78,  /* [6963] */
    (xdc_Char)0x25,  /* [6964] */
    (xdc_Char)0x78,  /* [6965] */
    (xdc_Char)0x2e,  /* [6966] */
    (xdc_Char)0x0,  /* [6967] */
    (xdc_Char)0x45,  /* [6968] */
    (xdc_Char)0x52,  /* [6969] */
    (xdc_Char)0x52,  /* [6970] */
    (xdc_Char)0x4f,  /* [6971] */
    (xdc_Char)0x52,  /* [6972] */
    (xdc_Char)0x3a,  /* [6973] */
    (xdc_Char)0x20,  /* [6974] */
    (xdc_Char)0x46,  /* [6975] */
    (xdc_Char)0x6c,  /* [6976] */
    (xdc_Char)0x6f,  /* [6977] */
    (xdc_Char)0x61,  /* [6978] */
    (xdc_Char)0x74,  /* [6979] */
    (xdc_Char)0x69,  /* [6980] */
    (xdc_Char)0x6e,  /* [6981] */
    (xdc_Char)0x67,  /* [6982] */
    (xdc_Char)0x20,  /* [6983] */
    (xdc_Char)0x50,  /* [6984] */
    (xdc_Char)0x6f,  /* [6985] */
    (xdc_Char)0x69,  /* [6986] */
    (xdc_Char)0x6e,  /* [6987] */
    (xdc_Char)0x74,  /* [6988] */
    (xdc_Char)0x20,  /* [6989] */
    (xdc_Char)0x45,  /* [6990] */
    (xdc_Char)0x72,  /* [6991] */
    (xdc_Char)0x72,  /* [6992] */
    (xdc_Char)0x6f,  /* [6993] */
    (xdc_Char)0x72,  /* [6994] */
    (xdc_Char)0x20,  /* [6995] */
    (xdc_Char)0x61,  /* [6996] */
    (xdc_Char)0x74,  /* [6997] */
    (xdc_Char)0x20,  /* [6998] */
    (xdc_Char)0x25,  /* [6999] */
    (xdc_Char)0x24,  /* [7000] */
    (xdc_Char)0x46,  /* [7001] */
    (xdc_Char)0x2e,  /* [7002] */
    (xdc_Char)0x0,  /* [7003] */
    (xdc_Char)0x45,  /* [7004] */
    (xdc_Char)0x52,  /* [7005] */
    (xdc_Char)0x52,  /* [7006] */
    (xdc_Char)0x4f,  /* [7007] */
    (xdc_Char)0x52,  /* [7008] */
    (xdc_Char)0x3a,  /* [7009] */
    (xdc_Char)0x20,  /* [7010] */
    (xdc_Char)0x49,  /* [7011] */
    (xdc_Char)0x6e,  /* [7012] */
    (xdc_Char)0x76,  /* [7013] */
    (xdc_Char)0x61,  /* [7014] */
    (xdc_Char)0x6c,  /* [7015] */
    (xdc_Char)0x69,  /* [7016] */
    (xdc_Char)0x64,  /* [7017] */
    (xdc_Char)0x20,  /* [7018] */
    (xdc_Char)0x50,  /* [7019] */
    (xdc_Char)0x61,  /* [7020] */
    (xdc_Char)0x72,  /* [7021] */
    (xdc_Char)0x61,  /* [7022] */
    (xdc_Char)0x6d,  /* [7023] */
    (xdc_Char)0x65,  /* [7024] */
    (xdc_Char)0x74,  /* [7025] */
    (xdc_Char)0x65,  /* [7026] */
    (xdc_Char)0x72,  /* [7027] */
    (xdc_Char)0x20,  /* [7028] */
    (xdc_Char)0x61,  /* [7029] */
    (xdc_Char)0x74,  /* [7030] */
    (xdc_Char)0x20,  /* [7031] */
    (xdc_Char)0x25,  /* [7032] */
    (xdc_Char)0x24,  /* [7033] */
    (xdc_Char)0x46,  /* [7034] */
    (xdc_Char)0x2e,  /* [7035] */
    (xdc_Char)0x20,  /* [7036] */
    (xdc_Char)0x5b,  /* [7037] */
    (xdc_Char)0x50,  /* [7038] */
    (xdc_Char)0x61,  /* [7039] */
    (xdc_Char)0x72,  /* [7040] */
    (xdc_Char)0x61,  /* [7041] */
    (xdc_Char)0x6d,  /* [7042] */
    (xdc_Char)0x4e,  /* [7043] */
    (xdc_Char)0x75,  /* [7044] */
    (xdc_Char)0x6d,  /* [7045] */
    (xdc_Char)0x5d,  /* [7046] */
    (xdc_Char)0x25,  /* [7047] */
    (xdc_Char)0x64,  /* [7048] */
    (xdc_Char)0x20,  /* [7049] */
    (xdc_Char)0x5b,  /* [7050] */
    (xdc_Char)0x50,  /* [7051] */
    (xdc_Char)0x61,  /* [7052] */
    (xdc_Char)0x72,  /* [7053] */
    (xdc_Char)0x61,  /* [7054] */
    (xdc_Char)0x6d,  /* [7055] */
    (xdc_Char)0x56,  /* [7056] */
    (xdc_Char)0x61,  /* [7057] */
    (xdc_Char)0x6c,  /* [7058] */
    (xdc_Char)0x75,  /* [7059] */
    (xdc_Char)0x65,  /* [7060] */
    (xdc_Char)0x5d,  /* [7061] */
    (xdc_Char)0x30,  /* [7062] */
    (xdc_Char)0x78,  /* [7063] */
    (xdc_Char)0x25,  /* [7064] */
    (xdc_Char)0x78,  /* [7065] */
    (xdc_Char)0x0,  /* [7066] */
    (xdc_Char)0x57,  /* [7067] */
    (xdc_Char)0x41,  /* [7068] */
    (xdc_Char)0x52,  /* [7069] */
    (xdc_Char)0x4e,  /* [7070] */
    (xdc_Char)0x49,  /* [7071] */
    (xdc_Char)0x4e,  /* [7072] */
    (xdc_Char)0x47,  /* [7073] */
    (xdc_Char)0x3a,  /* [7074] */
    (xdc_Char)0x20,  /* [7075] */
    (xdc_Char)0x45,  /* [7076] */
    (xdc_Char)0x76,  /* [7077] */
    (xdc_Char)0x65,  /* [7078] */
    (xdc_Char)0x6e,  /* [7079] */
    (xdc_Char)0x74,  /* [7080] */
    (xdc_Char)0x43,  /* [7081] */
    (xdc_Char)0x6f,  /* [7082] */
    (xdc_Char)0x64,  /* [7083] */
    (xdc_Char)0x65,  /* [7084] */
    (xdc_Char)0x3a,  /* [7085] */
    (xdc_Char)0x30,  /* [7086] */
    (xdc_Char)0x78,  /* [7087] */
    (xdc_Char)0x25,  /* [7088] */
    (xdc_Char)0x78,  /* [7089] */
    (xdc_Char)0x0,  /* [7090] */
    (xdc_Char)0x57,  /* [7091] */
    (xdc_Char)0x41,  /* [7092] */
    (xdc_Char)0x52,  /* [7093] */
    (xdc_Char)0x4e,  /* [7094] */
    (xdc_Char)0x49,  /* [7095] */
    (xdc_Char)0x4e,  /* [7096] */
    (xdc_Char)0x47,  /* [7097] */
    (xdc_Char)0x3a,  /* [7098] */
    (xdc_Char)0x20,  /* [7099] */
    (xdc_Char)0x45,  /* [7100] */
    (xdc_Char)0x76,  /* [7101] */
    (xdc_Char)0x65,  /* [7102] */
    (xdc_Char)0x6e,  /* [7103] */
    (xdc_Char)0x74,  /* [7104] */
    (xdc_Char)0x43,  /* [7105] */
    (xdc_Char)0x6f,  /* [7106] */
    (xdc_Char)0x64,  /* [7107] */
    (xdc_Char)0x65,  /* [7108] */
    (xdc_Char)0x3a,  /* [7109] */
    (xdc_Char)0x30,  /* [7110] */
    (xdc_Char)0x78,  /* [7111] */
    (xdc_Char)0x25,  /* [7112] */
    (xdc_Char)0x78,  /* [7113] */
    (xdc_Char)0x2e,  /* [7114] */
    (xdc_Char)0x20,  /* [7115] */
    (xdc_Char)0x25,  /* [7116] */
    (xdc_Char)0x24,  /* [7117] */
    (xdc_Char)0x53,  /* [7118] */
    (xdc_Char)0x0,  /* [7119] */
    (xdc_Char)0x49,  /* [7120] */
    (xdc_Char)0x4e,  /* [7121] */
    (xdc_Char)0x46,  /* [7122] */
    (xdc_Char)0x4f,  /* [7123] */
    (xdc_Char)0x3a,  /* [7124] */
    (xdc_Char)0x20,  /* [7125] */
    (xdc_Char)0x45,  /* [7126] */
    (xdc_Char)0x76,  /* [7127] */
    (xdc_Char)0x65,  /* [7128] */
    (xdc_Char)0x6e,  /* [7129] */
    (xdc_Char)0x74,  /* [7130] */
    (xdc_Char)0x43,  /* [7131] */
    (xdc_Char)0x6f,  /* [7132] */
    (xdc_Char)0x64,  /* [7133] */
    (xdc_Char)0x65,  /* [7134] */
    (xdc_Char)0x3a,  /* [7135] */
    (xdc_Char)0x20,  /* [7136] */
    (xdc_Char)0x30,  /* [7137] */
    (xdc_Char)0x78,  /* [7138] */
    (xdc_Char)0x25,  /* [7139] */
    (xdc_Char)0x78,  /* [7140] */
    (xdc_Char)0x0,  /* [7141] */
    (xdc_Char)0x49,  /* [7142] */
    (xdc_Char)0x4e,  /* [7143] */
    (xdc_Char)0x46,  /* [7144] */
    (xdc_Char)0x4f,  /* [7145] */
    (xdc_Char)0x3a,  /* [7146] */
    (xdc_Char)0x20,  /* [7147] */
    (xdc_Char)0x45,  /* [7148] */
    (xdc_Char)0x76,  /* [7149] */
    (xdc_Char)0x65,  /* [7150] */
    (xdc_Char)0x6e,  /* [7151] */
    (xdc_Char)0x74,  /* [7152] */
    (xdc_Char)0x43,  /* [7153] */
    (xdc_Char)0x6f,  /* [7154] */
    (xdc_Char)0x64,  /* [7155] */
    (xdc_Char)0x65,  /* [7156] */
    (xdc_Char)0x3a,  /* [7157] */
    (xdc_Char)0x30,  /* [7158] */
    (xdc_Char)0x78,  /* [7159] */
    (xdc_Char)0x25,  /* [7160] */
    (xdc_Char)0x78,  /* [7161] */
    (xdc_Char)0x2e,  /* [7162] */
    (xdc_Char)0x20,  /* [7163] */
    (xdc_Char)0x20,  /* [7164] */
    (xdc_Char)0x25,  /* [7165] */
    (xdc_Char)0x24,  /* [7166] */
    (xdc_Char)0x53,  /* [7167] */
    (xdc_Char)0x0,  /* [7168] */
    (xdc_Char)0x44,  /* [7169] */
    (xdc_Char)0x45,  /* [7170] */
    (xdc_Char)0x54,  /* [7171] */
    (xdc_Char)0x41,  /* [7172] */
    (xdc_Char)0x49,  /* [7173] */
    (xdc_Char)0x4c,  /* [7174] */
    (xdc_Char)0x3a,  /* [7175] */
    (xdc_Char)0x20,  /* [7176] */
    (xdc_Char)0x45,  /* [7177] */
    (xdc_Char)0x76,  /* [7178] */
    (xdc_Char)0x65,  /* [7179] */
    (xdc_Char)0x6e,  /* [7180] */
    (xdc_Char)0x74,  /* [7181] */
    (xdc_Char)0x43,  /* [7182] */
    (xdc_Char)0x6f,  /* [7183] */
    (xdc_Char)0x64,  /* [7184] */
    (xdc_Char)0x65,  /* [7185] */
    (xdc_Char)0x3a,  /* [7186] */
    (xdc_Char)0x30,  /* [7187] */
    (xdc_Char)0x78,  /* [7188] */
    (xdc_Char)0x25,  /* [7189] */
    (xdc_Char)0x78,  /* [7190] */
    (xdc_Char)0x0,  /* [7191] */
    (xdc_Char)0x44,  /* [7192] */
    (xdc_Char)0x45,  /* [7193] */
    (xdc_Char)0x54,  /* [7194] */
    (xdc_Char)0x41,  /* [7195] */
    (xdc_Char)0x49,  /* [7196] */
    (xdc_Char)0x4c,  /* [7197] */
    (xdc_Char)0x3a,  /* [7198] */
    (xdc_Char)0x20,  /* [7199] */
    (xdc_Char)0x45,  /* [7200] */
    (xdc_Char)0x76,  /* [7201] */
    (xdc_Char)0x65,  /* [7202] */
    (xdc_Char)0x6e,  /* [7203] */
    (xdc_Char)0x74,  /* [7204] */
    (xdc_Char)0x43,  /* [7205] */
    (xdc_Char)0x6f,  /* [7206] */
    (xdc_Char)0x64,  /* [7207] */
    (xdc_Char)0x65,  /* [7208] */
    (xdc_Char)0x3a,  /* [7209] */
    (xdc_Char)0x30,  /* [7210] */
    (xdc_Char)0x78,  /* [7211] */
    (xdc_Char)0x25,  /* [7212] */
    (xdc_Char)0x78,  /* [7213] */
    (xdc_Char)0x2e,  /* [7214] */
    (xdc_Char)0x20,  /* [7215] */
    (xdc_Char)0x20,  /* [7216] */
    (xdc_Char)0x25,  /* [7217] */
    (xdc_Char)0x24,  /* [7218] */
    (xdc_Char)0x53,  /* [7219] */
    (xdc_Char)0x0,  /* [7220] */
    (xdc_Char)0x56,  /* [7221] */
    (xdc_Char)0x41,  /* [7222] */
    (xdc_Char)0x4c,  /* [7223] */
    (xdc_Char)0x55,  /* [7224] */
    (xdc_Char)0x45,  /* [7225] */
    (xdc_Char)0x3d,  /* [7226] */
    (xdc_Char)0x25,  /* [7227] */
    (xdc_Char)0x64,  /* [7228] */
    (xdc_Char)0x20,  /* [7229] */
    (xdc_Char)0x28,  /* [7230] */
    (xdc_Char)0x41,  /* [7231] */
    (xdc_Char)0x75,  /* [7232] */
    (xdc_Char)0x78,  /* [7233] */
    (xdc_Char)0x44,  /* [7234] */
    (xdc_Char)0x61,  /* [7235] */
    (xdc_Char)0x74,  /* [7236] */
    (xdc_Char)0x61,  /* [7237] */
    (xdc_Char)0x3d,  /* [7238] */
    (xdc_Char)0x25,  /* [7239] */
    (xdc_Char)0x64,  /* [7240] */
    (xdc_Char)0x2c,  /* [7241] */
    (xdc_Char)0x20,  /* [7242] */
    (xdc_Char)0x25,  /* [7243] */
    (xdc_Char)0x64,  /* [7244] */
    (xdc_Char)0x29,  /* [7245] */
    (xdc_Char)0x20,  /* [7246] */
    (xdc_Char)0x4b,  /* [7247] */
    (xdc_Char)0x65,  /* [7248] */
    (xdc_Char)0x79,  /* [7249] */
    (xdc_Char)0x3a,  /* [7250] */
    (xdc_Char)0x25,  /* [7251] */
    (xdc_Char)0x24,  /* [7252] */
    (xdc_Char)0x53,  /* [7253] */
    (xdc_Char)0x0,  /* [7254] */
    (xdc_Char)0x4c,  /* [7255] */
    (xdc_Char)0x4d,  /* [7256] */
    (xdc_Char)0x5f,  /* [7257] */
    (xdc_Char)0x62,  /* [7258] */
    (xdc_Char)0x65,  /* [7259] */
    (xdc_Char)0x67,  /* [7260] */
    (xdc_Char)0x69,  /* [7261] */
    (xdc_Char)0x6e,  /* [7262] */
    (xdc_Char)0x3a,  /* [7263] */
    (xdc_Char)0x20,  /* [7264] */
    (xdc_Char)0x68,  /* [7265] */
    (xdc_Char)0x77,  /* [7266] */
    (xdc_Char)0x69,  /* [7267] */
    (xdc_Char)0x3a,  /* [7268] */
    (xdc_Char)0x20,  /* [7269] */
    (xdc_Char)0x30,  /* [7270] */
    (xdc_Char)0x78,  /* [7271] */
    (xdc_Char)0x25,  /* [7272] */
    (xdc_Char)0x78,  /* [7273] */
    (xdc_Char)0x2c,  /* [7274] */
    (xdc_Char)0x20,  /* [7275] */
    (xdc_Char)0x66,  /* [7276] */
    (xdc_Char)0x75,  /* [7277] */
    (xdc_Char)0x6e,  /* [7278] */
    (xdc_Char)0x63,  /* [7279] */
    (xdc_Char)0x3a,  /* [7280] */
    (xdc_Char)0x20,  /* [7281] */
    (xdc_Char)0x30,  /* [7282] */
    (xdc_Char)0x78,  /* [7283] */
    (xdc_Char)0x25,  /* [7284] */
    (xdc_Char)0x78,  /* [7285] */
    (xdc_Char)0x2c,  /* [7286] */
    (xdc_Char)0x20,  /* [7287] */
    (xdc_Char)0x70,  /* [7288] */
    (xdc_Char)0x72,  /* [7289] */
    (xdc_Char)0x65,  /* [7290] */
    (xdc_Char)0x54,  /* [7291] */
    (xdc_Char)0x68,  /* [7292] */
    (xdc_Char)0x72,  /* [7293] */
    (xdc_Char)0x65,  /* [7294] */
    (xdc_Char)0x61,  /* [7295] */
    (xdc_Char)0x64,  /* [7296] */
    (xdc_Char)0x3a,  /* [7297] */
    (xdc_Char)0x20,  /* [7298] */
    (xdc_Char)0x25,  /* [7299] */
    (xdc_Char)0x64,  /* [7300] */
    (xdc_Char)0x2c,  /* [7301] */
    (xdc_Char)0x20,  /* [7302] */
    (xdc_Char)0x69,  /* [7303] */
    (xdc_Char)0x6e,  /* [7304] */
    (xdc_Char)0x74,  /* [7305] */
    (xdc_Char)0x4e,  /* [7306] */
    (xdc_Char)0x75,  /* [7307] */
    (xdc_Char)0x6d,  /* [7308] */
    (xdc_Char)0x3a,  /* [7309] */
    (xdc_Char)0x20,  /* [7310] */
    (xdc_Char)0x25,  /* [7311] */
    (xdc_Char)0x64,  /* [7312] */
    (xdc_Char)0x2c,  /* [7313] */
    (xdc_Char)0x20,  /* [7314] */
    (xdc_Char)0x69,  /* [7315] */
    (xdc_Char)0x72,  /* [7316] */
    (xdc_Char)0x70,  /* [7317] */
    (xdc_Char)0x3a,  /* [7318] */
    (xdc_Char)0x20,  /* [7319] */
    (xdc_Char)0x30,  /* [7320] */
    (xdc_Char)0x78,  /* [7321] */
    (xdc_Char)0x25,  /* [7322] */
    (xdc_Char)0x78,  /* [7323] */
    (xdc_Char)0x0,  /* [7324] */
    (xdc_Char)0x4c,  /* [7325] */
    (xdc_Char)0x44,  /* [7326] */
    (xdc_Char)0x5f,  /* [7327] */
    (xdc_Char)0x65,  /* [7328] */
    (xdc_Char)0x6e,  /* [7329] */
    (xdc_Char)0x64,  /* [7330] */
    (xdc_Char)0x3a,  /* [7331] */
    (xdc_Char)0x20,  /* [7332] */
    (xdc_Char)0x68,  /* [7333] */
    (xdc_Char)0x77,  /* [7334] */
    (xdc_Char)0x69,  /* [7335] */
    (xdc_Char)0x3a,  /* [7336] */
    (xdc_Char)0x20,  /* [7337] */
    (xdc_Char)0x30,  /* [7338] */
    (xdc_Char)0x78,  /* [7339] */
    (xdc_Char)0x25,  /* [7340] */
    (xdc_Char)0x78,  /* [7341] */
    (xdc_Char)0x0,  /* [7342] */
    (xdc_Char)0x4c,  /* [7343] */
    (xdc_Char)0x6f,  /* [7344] */
    (xdc_Char)0x67,  /* [7345] */
    (xdc_Char)0x67,  /* [7346] */
    (xdc_Char)0x65,  /* [7347] */
    (xdc_Char)0x72,  /* [7348] */
    (xdc_Char)0x53,  /* [7349] */
    (xdc_Char)0x74,  /* [7350] */
    (xdc_Char)0x6f,  /* [7351] */
    (xdc_Char)0x70,  /* [7352] */
    (xdc_Char)0x4d,  /* [7353] */
    (xdc_Char)0x6f,  /* [7354] */
    (xdc_Char)0x64,  /* [7355] */
    (xdc_Char)0x65,  /* [7356] */
    (xdc_Char)0x20,  /* [7357] */
    (xdc_Char)0x54,  /* [7358] */
    (xdc_Char)0x65,  /* [7359] */
    (xdc_Char)0x73,  /* [7360] */
    (xdc_Char)0x74,  /* [7361] */
    (xdc_Char)0x0,  /* [7362] */
    (xdc_Char)0x4c,  /* [7363] */
    (xdc_Char)0x53,  /* [7364] */
    (xdc_Char)0x5f,  /* [7365] */
    (xdc_Char)0x63,  /* [7366] */
    (xdc_Char)0x70,  /* [7367] */
    (xdc_Char)0x75,  /* [7368] */
    (xdc_Char)0x4c,  /* [7369] */
    (xdc_Char)0x6f,  /* [7370] */
    (xdc_Char)0x61,  /* [7371] */
    (xdc_Char)0x64,  /* [7372] */
    (xdc_Char)0x3a,  /* [7373] */
    (xdc_Char)0x20,  /* [7374] */
    (xdc_Char)0x25,  /* [7375] */
    (xdc_Char)0x64,  /* [7376] */
    (xdc_Char)0x25,  /* [7377] */
    (xdc_Char)0x25,  /* [7378] */
    (xdc_Char)0x0,  /* [7379] */
    (xdc_Char)0x4c,  /* [7380] */
    (xdc_Char)0x53,  /* [7381] */
    (xdc_Char)0x5f,  /* [7382] */
    (xdc_Char)0x68,  /* [7383] */
    (xdc_Char)0x77,  /* [7384] */
    (xdc_Char)0x69,  /* [7385] */
    (xdc_Char)0x4c,  /* [7386] */
    (xdc_Char)0x6f,  /* [7387] */
    (xdc_Char)0x61,  /* [7388] */
    (xdc_Char)0x64,  /* [7389] */
    (xdc_Char)0x3a,  /* [7390] */
    (xdc_Char)0x20,  /* [7391] */
    (xdc_Char)0x25,  /* [7392] */
    (xdc_Char)0x64,  /* [7393] */
    (xdc_Char)0x2c,  /* [7394] */
    (xdc_Char)0x25,  /* [7395] */
    (xdc_Char)0x64,  /* [7396] */
    (xdc_Char)0x0,  /* [7397] */
    (xdc_Char)0x4c,  /* [7398] */
    (xdc_Char)0x53,  /* [7399] */
    (xdc_Char)0x5f,  /* [7400] */
    (xdc_Char)0x73,  /* [7401] */
    (xdc_Char)0x77,  /* [7402] */
    (xdc_Char)0x69,  /* [7403] */
    (xdc_Char)0x4c,  /* [7404] */
    (xdc_Char)0x6f,  /* [7405] */
    (xdc_Char)0x61,  /* [7406] */
    (xdc_Char)0x64,  /* [7407] */
    (xdc_Char)0x3a,  /* [7408] */
    (xdc_Char)0x20,  /* [7409] */
    (xdc_Char)0x25,  /* [7410] */
    (xdc_Char)0x64,  /* [7411] */
    (xdc_Char)0x2c,  /* [7412] */
    (xdc_Char)0x25,  /* [7413] */
    (xdc_Char)0x64,  /* [7414] */
    (xdc_Char)0x0,  /* [7415] */
    (xdc_Char)0x4c,  /* [7416] */
    (xdc_Char)0x53,  /* [7417] */
    (xdc_Char)0x5f,  /* [7418] */
    (xdc_Char)0x74,  /* [7419] */
    (xdc_Char)0x61,  /* [7420] */
    (xdc_Char)0x73,  /* [7421] */
    (xdc_Char)0x6b,  /* [7422] */
    (xdc_Char)0x4c,  /* [7423] */
    (xdc_Char)0x6f,  /* [7424] */
    (xdc_Char)0x61,  /* [7425] */
    (xdc_Char)0x64,  /* [7426] */
    (xdc_Char)0x3a,  /* [7427] */
    (xdc_Char)0x20,  /* [7428] */
    (xdc_Char)0x30,  /* [7429] */
    (xdc_Char)0x78,  /* [7430] */
    (xdc_Char)0x25,  /* [7431] */
    (xdc_Char)0x78,  /* [7432] */
    (xdc_Char)0x2c,  /* [7433] */
    (xdc_Char)0x25,  /* [7434] */
    (xdc_Char)0x64,  /* [7435] */
    (xdc_Char)0x2c,  /* [7436] */
    (xdc_Char)0x25,  /* [7437] */
    (xdc_Char)0x64,  /* [7438] */
    (xdc_Char)0x2c,  /* [7439] */
    (xdc_Char)0x30,  /* [7440] */
    (xdc_Char)0x78,  /* [7441] */
    (xdc_Char)0x25,  /* [7442] */
    (xdc_Char)0x78,  /* [7443] */
    (xdc_Char)0x0,  /* [7444] */
    (xdc_Char)0x78,  /* [7445] */
    (xdc_Char)0x64,  /* [7446] */
    (xdc_Char)0x63,  /* [7447] */
    (xdc_Char)0x2e,  /* [7448] */
    (xdc_Char)0x0,  /* [7449] */
    (xdc_Char)0x72,  /* [7450] */
    (xdc_Char)0x75,  /* [7451] */
    (xdc_Char)0x6e,  /* [7452] */
    (xdc_Char)0x74,  /* [7453] */
    (xdc_Char)0x69,  /* [7454] */
    (xdc_Char)0x6d,  /* [7455] */
    (xdc_Char)0x65,  /* [7456] */
    (xdc_Char)0x2e,  /* [7457] */
    (xdc_Char)0x0,  /* [7458] */
    (xdc_Char)0x41,  /* [7459] */
    (xdc_Char)0x73,  /* [7460] */
    (xdc_Char)0x73,  /* [7461] */
    (xdc_Char)0x65,  /* [7462] */
    (xdc_Char)0x72,  /* [7463] */
    (xdc_Char)0x74,  /* [7464] */
    (xdc_Char)0x0,  /* [7465] */
    (xdc_Char)0x43,  /* [7466] */
    (xdc_Char)0x6f,  /* [7467] */
    (xdc_Char)0x72,  /* [7468] */
    (xdc_Char)0x65,  /* [7469] */
    (xdc_Char)0x0,  /* [7470] */
    (xdc_Char)0x44,  /* [7471] */
    (xdc_Char)0x65,  /* [7472] */
    (xdc_Char)0x66,  /* [7473] */
    (xdc_Char)0x61,  /* [7474] */
    (xdc_Char)0x75,  /* [7475] */
    (xdc_Char)0x6c,  /* [7476] */
    (xdc_Char)0x74,  /* [7477] */
    (xdc_Char)0x73,  /* [7478] */
    (xdc_Char)0x0,  /* [7479] */
    (xdc_Char)0x44,  /* [7480] */
    (xdc_Char)0x69,  /* [7481] */
    (xdc_Char)0x61,  /* [7482] */
    (xdc_Char)0x67,  /* [7483] */
    (xdc_Char)0x73,  /* [7484] */
    (xdc_Char)0x0,  /* [7485] */
    (xdc_Char)0x45,  /* [7486] */
    (xdc_Char)0x72,  /* [7487] */
    (xdc_Char)0x72,  /* [7488] */
    (xdc_Char)0x6f,  /* [7489] */
    (xdc_Char)0x72,  /* [7490] */
    (xdc_Char)0x0,  /* [7491] */
    (xdc_Char)0x47,  /* [7492] */
    (xdc_Char)0x61,  /* [7493] */
    (xdc_Char)0x74,  /* [7494] */
    (xdc_Char)0x65,  /* [7495] */
    (xdc_Char)0x0,  /* [7496] */
    (xdc_Char)0x4c,  /* [7497] */
    (xdc_Char)0x6f,  /* [7498] */
    (xdc_Char)0x67,  /* [7499] */
    (xdc_Char)0x0,  /* [7500] */
    (xdc_Char)0x4d,  /* [7501] */
    (xdc_Char)0x61,  /* [7502] */
    (xdc_Char)0x69,  /* [7503] */
    (xdc_Char)0x6e,  /* [7504] */
    (xdc_Char)0x0,  /* [7505] */
    (xdc_Char)0x4d,  /* [7506] */
    (xdc_Char)0x65,  /* [7507] */
    (xdc_Char)0x6d,  /* [7508] */
    (xdc_Char)0x6f,  /* [7509] */
    (xdc_Char)0x72,  /* [7510] */
    (xdc_Char)0x79,  /* [7511] */
    (xdc_Char)0x0,  /* [7512] */
    (xdc_Char)0x52,  /* [7513] */
    (xdc_Char)0x65,  /* [7514] */
    (xdc_Char)0x67,  /* [7515] */
    (xdc_Char)0x69,  /* [7516] */
    (xdc_Char)0x73,  /* [7517] */
    (xdc_Char)0x74,  /* [7518] */
    (xdc_Char)0x72,  /* [7519] */
    (xdc_Char)0x79,  /* [7520] */
    (xdc_Char)0x0,  /* [7521] */
    (xdc_Char)0x53,  /* [7522] */
    (xdc_Char)0x74,  /* [7523] */
    (xdc_Char)0x61,  /* [7524] */
    (xdc_Char)0x72,  /* [7525] */
    (xdc_Char)0x74,  /* [7526] */
    (xdc_Char)0x75,  /* [7527] */
    (xdc_Char)0x70,  /* [7528] */
    (xdc_Char)0x0,  /* [7529] */
    (xdc_Char)0x53,  /* [7530] */
    (xdc_Char)0x79,  /* [7531] */
    (xdc_Char)0x73,  /* [7532] */
    (xdc_Char)0x74,  /* [7533] */
    (xdc_Char)0x65,  /* [7534] */
    (xdc_Char)0x6d,  /* [7535] */
    (xdc_Char)0x0,  /* [7536] */
    (xdc_Char)0x53,  /* [7537] */
    (xdc_Char)0x79,  /* [7538] */
    (xdc_Char)0x73,  /* [7539] */
    (xdc_Char)0x4d,  /* [7540] */
    (xdc_Char)0x69,  /* [7541] */
    (xdc_Char)0x6e,  /* [7542] */
    (xdc_Char)0x0,  /* [7543] */
    (xdc_Char)0x54,  /* [7544] */
    (xdc_Char)0x65,  /* [7545] */
    (xdc_Char)0x78,  /* [7546] */
    (xdc_Char)0x74,  /* [7547] */
    (xdc_Char)0x0,  /* [7548] */
    (xdc_Char)0x54,  /* [7549] */
    (xdc_Char)0x69,  /* [7550] */
    (xdc_Char)0x6d,  /* [7551] */
    (xdc_Char)0x65,  /* [7552] */
    (xdc_Char)0x73,  /* [7553] */
    (xdc_Char)0x74,  /* [7554] */
    (xdc_Char)0x61,  /* [7555] */
    (xdc_Char)0x6d,  /* [7556] */
    (xdc_Char)0x70,  /* [7557] */
    (xdc_Char)0x0,  /* [7558] */
    (xdc_Char)0x54,  /* [7559] */
    (xdc_Char)0x79,  /* [7560] */
    (xdc_Char)0x70,  /* [7561] */
    (xdc_Char)0x65,  /* [7562] */
    (xdc_Char)0x73,  /* [7563] */
    (xdc_Char)0x0,  /* [7564] */
    (xdc_Char)0x74,  /* [7565] */
    (xdc_Char)0x69,  /* [7566] */
    (xdc_Char)0x2e,  /* [7567] */
    (xdc_Char)0x0,  /* [7568] */
    (xdc_Char)0x63,  /* [7569] */
    (xdc_Char)0x61,  /* [7570] */
    (xdc_Char)0x74,  /* [7571] */
    (xdc_Char)0x61,  /* [7572] */
    (xdc_Char)0x6c,  /* [7573] */
    (xdc_Char)0x6f,  /* [7574] */
    (xdc_Char)0x67,  /* [7575] */
    (xdc_Char)0x2e,  /* [7576] */
    (xdc_Char)0x0,  /* [7577] */
    (xdc_Char)0x61,  /* [7578] */
    (xdc_Char)0x72,  /* [7579] */
    (xdc_Char)0x6d,  /* [7580] */
    (xdc_Char)0x2e,  /* [7581] */
    (xdc_Char)0x0,  /* [7582] */
    (xdc_Char)0x63,  /* [7583] */
    (xdc_Char)0x6f,  /* [7584] */
    (xdc_Char)0x72,  /* [7585] */
    (xdc_Char)0x74,  /* [7586] */
    (xdc_Char)0x65,  /* [7587] */
    (xdc_Char)0x78,  /* [7588] */
    (xdc_Char)0x6d,  /* [7589] */
    (xdc_Char)0x34,  /* [7590] */
    (xdc_Char)0x2e,  /* [7591] */
    (xdc_Char)0x0,  /* [7592] */
    (xdc_Char)0x74,  /* [7593] */
    (xdc_Char)0x69,  /* [7594] */
    (xdc_Char)0x76,  /* [7595] */
    (xdc_Char)0x61,  /* [7596] */
    (xdc_Char)0x2e,  /* [7597] */
    (xdc_Char)0x0,  /* [7598] */
    (xdc_Char)0x63,  /* [7599] */
    (xdc_Char)0x65,  /* [7600] */
    (xdc_Char)0x2e,  /* [7601] */
    (xdc_Char)0x0,  /* [7602] */
    (xdc_Char)0x42,  /* [7603] */
    (xdc_Char)0x6f,  /* [7604] */
    (xdc_Char)0x6f,  /* [7605] */
    (xdc_Char)0x74,  /* [7606] */
    (xdc_Char)0x0,  /* [7607] */
    (xdc_Char)0x73,  /* [7608] */
    (xdc_Char)0x79,  /* [7609] */
    (xdc_Char)0x73,  /* [7610] */
    (xdc_Char)0x62,  /* [7611] */
    (xdc_Char)0x69,  /* [7612] */
    (xdc_Char)0x6f,  /* [7613] */
    (xdc_Char)0x73,  /* [7614] */
    (xdc_Char)0x2e,  /* [7615] */
    (xdc_Char)0x0,  /* [7616] */
    (xdc_Char)0x42,  /* [7617] */
    (xdc_Char)0x49,  /* [7618] */
    (xdc_Char)0x4f,  /* [7619] */
    (xdc_Char)0x53,  /* [7620] */
    (xdc_Char)0x0,  /* [7621] */
    (xdc_Char)0x6b,  /* [7622] */
    (xdc_Char)0x6e,  /* [7623] */
    (xdc_Char)0x6c,  /* [7624] */
    (xdc_Char)0x2e,  /* [7625] */
    (xdc_Char)0x0,  /* [7626] */
    (xdc_Char)0x43,  /* [7627] */
    (xdc_Char)0x6c,  /* [7628] */
    (xdc_Char)0x6f,  /* [7629] */
    (xdc_Char)0x63,  /* [7630] */
    (xdc_Char)0x6b,  /* [7631] */
    (xdc_Char)0x0,  /* [7632] */
    (xdc_Char)0x49,  /* [7633] */
    (xdc_Char)0x64,  /* [7634] */
    (xdc_Char)0x6c,  /* [7635] */
    (xdc_Char)0x65,  /* [7636] */
    (xdc_Char)0x0,  /* [7637] */
    (xdc_Char)0x49,  /* [7638] */
    (xdc_Char)0x6e,  /* [7639] */
    (xdc_Char)0x74,  /* [7640] */
    (xdc_Char)0x72,  /* [7641] */
    (xdc_Char)0x69,  /* [7642] */
    (xdc_Char)0x6e,  /* [7643] */
    (xdc_Char)0x73,  /* [7644] */
    (xdc_Char)0x69,  /* [7645] */
    (xdc_Char)0x63,  /* [7646] */
    (xdc_Char)0x73,  /* [7647] */
    (xdc_Char)0x0,  /* [7648] */
    (xdc_Char)0x45,  /* [7649] */
    (xdc_Char)0x76,  /* [7650] */
    (xdc_Char)0x65,  /* [7651] */
    (xdc_Char)0x6e,  /* [7652] */
    (xdc_Char)0x74,  /* [7653] */
    (xdc_Char)0x0,  /* [7654] */
    (xdc_Char)0x51,  /* [7655] */
    (xdc_Char)0x75,  /* [7656] */
    (xdc_Char)0x65,  /* [7657] */
    (xdc_Char)0x75,  /* [7658] */
    (xdc_Char)0x65,  /* [7659] */
    (xdc_Char)0x0,  /* [7660] */
    (xdc_Char)0x53,  /* [7661] */
    (xdc_Char)0x65,  /* [7662] */
    (xdc_Char)0x6d,  /* [7663] */
    (xdc_Char)0x61,  /* [7664] */
    (xdc_Char)0x70,  /* [7665] */
    (xdc_Char)0x68,  /* [7666] */
    (xdc_Char)0x6f,  /* [7667] */
    (xdc_Char)0x72,  /* [7668] */
    (xdc_Char)0x65,  /* [7669] */
    (xdc_Char)0x0,  /* [7670] */
    (xdc_Char)0x53,  /* [7671] */
    (xdc_Char)0x77,  /* [7672] */
    (xdc_Char)0x69,  /* [7673] */
    (xdc_Char)0x0,  /* [7674] */
    (xdc_Char)0x54,  /* [7675] */
    (xdc_Char)0x61,  /* [7676] */
    (xdc_Char)0x73,  /* [7677] */
    (xdc_Char)0x6b,  /* [7678] */
    (xdc_Char)0x0,  /* [7679] */
    (xdc_Char)0x68,  /* [7680] */
    (xdc_Char)0x61,  /* [7681] */
    (xdc_Char)0x6c,  /* [7682] */
    (xdc_Char)0x2e,  /* [7683] */
    (xdc_Char)0x0,  /* [7684] */
    (xdc_Char)0x48,  /* [7685] */
    (xdc_Char)0x77,  /* [7686] */
    (xdc_Char)0x69,  /* [7687] */
    (xdc_Char)0x0,  /* [7688] */
    (xdc_Char)0x68,  /* [7689] */
    (xdc_Char)0x65,  /* [7690] */
    (xdc_Char)0x61,  /* [7691] */
    (xdc_Char)0x70,  /* [7692] */
    (xdc_Char)0x73,  /* [7693] */
    (xdc_Char)0x2e,  /* [7694] */
    (xdc_Char)0x0,  /* [7695] */
    (xdc_Char)0x48,  /* [7696] */
    (xdc_Char)0x65,  /* [7697] */
    (xdc_Char)0x61,  /* [7698] */
    (xdc_Char)0x70,  /* [7699] */
    (xdc_Char)0x4d,  /* [7700] */
    (xdc_Char)0x65,  /* [7701] */
    (xdc_Char)0x6d,  /* [7702] */
    (xdc_Char)0x0,  /* [7703] */
    (xdc_Char)0x75,  /* [7704] */
    (xdc_Char)0x69,  /* [7705] */
    (xdc_Char)0x61,  /* [7706] */
    (xdc_Char)0x2e,  /* [7707] */
    (xdc_Char)0x0,  /* [7708] */
    (xdc_Char)0x65,  /* [7709] */
    (xdc_Char)0x76,  /* [7710] */
    (xdc_Char)0x65,  /* [7711] */
    (xdc_Char)0x6e,  /* [7712] */
    (xdc_Char)0x74,  /* [7713] */
    (xdc_Char)0x73,  /* [7714] */
    (xdc_Char)0x2e,  /* [7715] */
    (xdc_Char)0x0,  /* [7716] */
    (xdc_Char)0x44,  /* [7717] */
    (xdc_Char)0x76,  /* [7718] */
    (xdc_Char)0x74,  /* [7719] */
    (xdc_Char)0x54,  /* [7720] */
    (xdc_Char)0x79,  /* [7721] */
    (xdc_Char)0x70,  /* [7722] */
    (xdc_Char)0x65,  /* [7723] */
    (xdc_Char)0x73,  /* [7724] */
    (xdc_Char)0x0,  /* [7725] */
    (xdc_Char)0x55,  /* [7726] */
    (xdc_Char)0x49,  /* [7727] */
    (xdc_Char)0x41,  /* [7728] */
    (xdc_Char)0x45,  /* [7729] */
    (xdc_Char)0x72,  /* [7730] */
    (xdc_Char)0x72,  /* [7731] */
    (xdc_Char)0x0,  /* [7732] */
    (xdc_Char)0x55,  /* [7733] */
    (xdc_Char)0x49,  /* [7734] */
    (xdc_Char)0x41,  /* [7735] */
    (xdc_Char)0x45,  /* [7736] */
    (xdc_Char)0x76,  /* [7737] */
    (xdc_Char)0x74,  /* [7738] */
    (xdc_Char)0x0,  /* [7739] */
    (xdc_Char)0x45,  /* [7740] */
    (xdc_Char)0x76,  /* [7741] */
    (xdc_Char)0x65,  /* [7742] */
    (xdc_Char)0x6e,  /* [7743] */
    (xdc_Char)0x74,  /* [7744] */
    (xdc_Char)0x48,  /* [7745] */
    (xdc_Char)0x64,  /* [7746] */
    (xdc_Char)0x72,  /* [7747] */
    (xdc_Char)0x0,  /* [7748] */
    (xdc_Char)0x51,  /* [7749] */
    (xdc_Char)0x75,  /* [7750] */
    (xdc_Char)0x65,  /* [7751] */
    (xdc_Char)0x75,  /* [7752] */
    (xdc_Char)0x65,  /* [7753] */
    (xdc_Char)0x44,  /* [7754] */
    (xdc_Char)0x65,  /* [7755] */
    (xdc_Char)0x73,  /* [7756] */
    (xdc_Char)0x63,  /* [7757] */
    (xdc_Char)0x72,  /* [7758] */
    (xdc_Char)0x69,  /* [7759] */
    (xdc_Char)0x70,  /* [7760] */
    (xdc_Char)0x74,  /* [7761] */
    (xdc_Char)0x6f,  /* [7762] */
    (xdc_Char)0x72,  /* [7763] */
    (xdc_Char)0x0,  /* [7764] */
    (xdc_Char)0x55,  /* [7765] */
    (xdc_Char)0x49,  /* [7766] */
    (xdc_Char)0x41,  /* [7767] */
    (xdc_Char)0x4d,  /* [7768] */
    (xdc_Char)0x65,  /* [7769] */
    (xdc_Char)0x74,  /* [7770] */
    (xdc_Char)0x61,  /* [7771] */
    (xdc_Char)0x44,  /* [7772] */
    (xdc_Char)0x61,  /* [7773] */
    (xdc_Char)0x74,  /* [7774] */
    (xdc_Char)0x61,  /* [7775] */
    (xdc_Char)0x0,  /* [7776] */
    (xdc_Char)0x67,  /* [7777] */
    (xdc_Char)0x61,  /* [7778] */
    (xdc_Char)0x74,  /* [7779] */
    (xdc_Char)0x65,  /* [7780] */
    (xdc_Char)0x73,  /* [7781] */
    (xdc_Char)0x2e,  /* [7782] */
    (xdc_Char)0x0,  /* [7783] */
    (xdc_Char)0x47,  /* [7784] */
    (xdc_Char)0x61,  /* [7785] */
    (xdc_Char)0x74,  /* [7786] */
    (xdc_Char)0x65,  /* [7787] */
    (xdc_Char)0x48,  /* [7788] */
    (xdc_Char)0x77,  /* [7789] */
    (xdc_Char)0x69,  /* [7790] */
    (xdc_Char)0x0,  /* [7791] */
    (xdc_Char)0x47,  /* [7792] */
    (xdc_Char)0x61,  /* [7793] */
    (xdc_Char)0x74,  /* [7794] */
    (xdc_Char)0x65,  /* [7795] */
    (xdc_Char)0x4d,  /* [7796] */
    (xdc_Char)0x75,  /* [7797] */
    (xdc_Char)0x74,  /* [7798] */
    (xdc_Char)0x65,  /* [7799] */
    (xdc_Char)0x78,  /* [7800] */
    (xdc_Char)0x0,  /* [7801] */
    (xdc_Char)0x66,  /* [7802] */
    (xdc_Char)0x61,  /* [7803] */
    (xdc_Char)0x6d,  /* [7804] */
    (xdc_Char)0x69,  /* [7805] */
    (xdc_Char)0x6c,  /* [7806] */
    (xdc_Char)0x79,  /* [7807] */
    (xdc_Char)0x2e,  /* [7808] */
    (xdc_Char)0x0,  /* [7809] */
    (xdc_Char)0x6d,  /* [7810] */
    (xdc_Char)0x33,  /* [7811] */
    (xdc_Char)0x2e,  /* [7812] */
    (xdc_Char)0x0,  /* [7813] */
    (xdc_Char)0x49,  /* [7814] */
    (xdc_Char)0x6e,  /* [7815] */
    (xdc_Char)0x74,  /* [7816] */
    (xdc_Char)0x72,  /* [7817] */
    (xdc_Char)0x69,  /* [7818] */
    (xdc_Char)0x6e,  /* [7819] */
    (xdc_Char)0x73,  /* [7820] */
    (xdc_Char)0x69,  /* [7821] */
    (xdc_Char)0x63,  /* [7822] */
    (xdc_Char)0x73,  /* [7823] */
    (xdc_Char)0x53,  /* [7824] */
    (xdc_Char)0x75,  /* [7825] */
    (xdc_Char)0x70,  /* [7826] */
    (xdc_Char)0x70,  /* [7827] */
    (xdc_Char)0x6f,  /* [7828] */
    (xdc_Char)0x72,  /* [7829] */
    (xdc_Char)0x74,  /* [7830] */
    (xdc_Char)0x0,  /* [7831] */
    (xdc_Char)0x54,  /* [7832] */
    (xdc_Char)0x61,  /* [7833] */
    (xdc_Char)0x73,  /* [7834] */
    (xdc_Char)0x6b,  /* [7835] */
    (xdc_Char)0x53,  /* [7836] */
    (xdc_Char)0x75,  /* [7837] */
    (xdc_Char)0x70,  /* [7838] */
    (xdc_Char)0x70,  /* [7839] */
    (xdc_Char)0x6f,  /* [7840] */
    (xdc_Char)0x72,  /* [7841] */
    (xdc_Char)0x74,  /* [7842] */
    (xdc_Char)0x0,  /* [7843] */
    (xdc_Char)0x6c,  /* [7844] */
    (xdc_Char)0x6d,  /* [7845] */
    (xdc_Char)0x34,  /* [7846] */
    (xdc_Char)0x2e,  /* [7847] */
    (xdc_Char)0x0,  /* [7848] */
    (xdc_Char)0x54,  /* [7849] */
    (xdc_Char)0x69,  /* [7850] */
    (xdc_Char)0x6d,  /* [7851] */
    (xdc_Char)0x65,  /* [7852] */
    (xdc_Char)0x73,  /* [7853] */
    (xdc_Char)0x74,  /* [7854] */
    (xdc_Char)0x61,  /* [7855] */
    (xdc_Char)0x6d,  /* [7856] */
    (xdc_Char)0x70,  /* [7857] */
    (xdc_Char)0x50,  /* [7858] */
    (xdc_Char)0x72,  /* [7859] */
    (xdc_Char)0x6f,  /* [7860] */
    (xdc_Char)0x76,  /* [7861] */
    (xdc_Char)0x69,  /* [7862] */
    (xdc_Char)0x64,  /* [7863] */
    (xdc_Char)0x65,  /* [7864] */
    (xdc_Char)0x72,  /* [7865] */
    (xdc_Char)0x0,  /* [7866] */
    (xdc_Char)0x54,  /* [7867] */
    (xdc_Char)0x69,  /* [7868] */
    (xdc_Char)0x6d,  /* [7869] */
    (xdc_Char)0x65,  /* [7870] */
    (xdc_Char)0x72,  /* [7871] */
    (xdc_Char)0x0,  /* [7872] */
    (xdc_Char)0x6c,  /* [7873] */
    (xdc_Char)0x6f,  /* [7874] */
    (xdc_Char)0x67,  /* [7875] */
    (xdc_Char)0x67,  /* [7876] */
    (xdc_Char)0x65,  /* [7877] */
    (xdc_Char)0x72,  /* [7878] */
    (xdc_Char)0x73,  /* [7879] */
    (xdc_Char)0x2e,  /* [7880] */
    (xdc_Char)0x0,  /* [7881] */
    (xdc_Char)0x4c,  /* [7882] */
    (xdc_Char)0x6f,  /* [7883] */
    (xdc_Char)0x67,  /* [7884] */
    (xdc_Char)0x67,  /* [7885] */
    (xdc_Char)0x65,  /* [7886] */
    (xdc_Char)0x72,  /* [7887] */
    (xdc_Char)0x53,  /* [7888] */
    (xdc_Char)0x74,  /* [7889] */
    (xdc_Char)0x6f,  /* [7890] */
    (xdc_Char)0x70,  /* [7891] */
    (xdc_Char)0x4d,  /* [7892] */
    (xdc_Char)0x6f,  /* [7893] */
    (xdc_Char)0x64,  /* [7894] */
    (xdc_Char)0x65,  /* [7895] */
    (xdc_Char)0x0,  /* [7896] */
    (xdc_Char)0x75,  /* [7897] */
    (xdc_Char)0x74,  /* [7898] */
    (xdc_Char)0x69,  /* [7899] */
    (xdc_Char)0x6c,  /* [7900] */
    (xdc_Char)0x73,  /* [7901] */
    (xdc_Char)0x2e,  /* [7902] */
    (xdc_Char)0x0,  /* [7903] */
    (xdc_Char)0x4c,  /* [7904] */
    (xdc_Char)0x6f,  /* [7905] */
    (xdc_Char)0x61,  /* [7906] */
    (xdc_Char)0x64,  /* [7907] */
    (xdc_Char)0x0,  /* [7908] */
    (xdc_Char)0x74,  /* [7909] */
    (xdc_Char)0x69,  /* [7910] */
    (xdc_Char)0x2e,  /* [7911] */
    (xdc_Char)0x73,  /* [7912] */
    (xdc_Char)0x79,  /* [7913] */
    (xdc_Char)0x73,  /* [7914] */
    (xdc_Char)0x62,  /* [7915] */
    (xdc_Char)0x69,  /* [7916] */
    (xdc_Char)0x6f,  /* [7917] */
    (xdc_Char)0x73,  /* [7918] */
    (xdc_Char)0x2e,  /* [7919] */
    (xdc_Char)0x6b,  /* [7920] */
    (xdc_Char)0x6e,  /* [7921] */
    (xdc_Char)0x6c,  /* [7922] */
    (xdc_Char)0x2e,  /* [7923] */
    (xdc_Char)0x54,  /* [7924] */
    (xdc_Char)0x61,  /* [7925] */
    (xdc_Char)0x73,  /* [7926] */
    (xdc_Char)0x6b,  /* [7927] */
    (xdc_Char)0x2e,  /* [7928] */
    (xdc_Char)0x49,  /* [7929] */
    (xdc_Char)0x64,  /* [7930] */
    (xdc_Char)0x6c,  /* [7931] */
    (xdc_Char)0x65,  /* [7932] */
    (xdc_Char)0x54,  /* [7933] */
    (xdc_Char)0x61,  /* [7934] */
    (xdc_Char)0x73,  /* [7935] */
    (xdc_Char)0x6b,  /* [7936] */
    (xdc_Char)0x0,  /* [7937] */
    (xdc_Char)0x4c,  /* [7938] */
    (xdc_Char)0x6f,  /* [7939] */
    (xdc_Char)0x61,  /* [7940] */
    (xdc_Char)0x64,  /* [7941] */
    (xdc_Char)0x20,  /* [7942] */
    (xdc_Char)0x4c,  /* [7943] */
    (xdc_Char)0x6f,  /* [7944] */
    (xdc_Char)0x67,  /* [7945] */
    (xdc_Char)0x67,  /* [7946] */
    (xdc_Char)0x65,  /* [7947] */
    (xdc_Char)0x72,  /* [7948] */
    (xdc_Char)0x0,  /* [7949] */
    (xdc_Char)0x4d,  /* [7950] */
    (xdc_Char)0x61,  /* [7951] */
    (xdc_Char)0x69,  /* [7952] */
    (xdc_Char)0x6e,  /* [7953] */
    (xdc_Char)0x20,  /* [7954] */
    (xdc_Char)0x4c,  /* [7955] */
    (xdc_Char)0x6f,  /* [7956] */
    (xdc_Char)0x67,  /* [7957] */
    (xdc_Char)0x67,  /* [7958] */
    (xdc_Char)0x65,  /* [7959] */
    (xdc_Char)0x72,  /* [7960] */
    (xdc_Char)0x0,  /* [7961] */
    (xdc_Char)0x53,  /* [7962] */
    (xdc_Char)0x59,  /* [7963] */
    (xdc_Char)0x53,  /* [7964] */
    (xdc_Char)0x42,  /* [7965] */
    (xdc_Char)0x49,  /* [7966] */
    (xdc_Char)0x4f,  /* [7967] */
    (xdc_Char)0x53,  /* [7968] */
    (xdc_Char)0x20,  /* [7969] */
    (xdc_Char)0x53,  /* [7970] */
    (xdc_Char)0x79,  /* [7971] */
    (xdc_Char)0x73,  /* [7972] */
    (xdc_Char)0x74,  /* [7973] */
    (xdc_Char)0x65,  /* [7974] */
    (xdc_Char)0x6d,  /* [7975] */
    (xdc_Char)0x20,  /* [7976] */
    (xdc_Char)0x4c,  /* [7977] */
    (xdc_Char)0x6f,  /* [7978] */
    (xdc_Char)0x67,  /* [7979] */
    (xdc_Char)0x67,  /* [7980] */
    (xdc_Char)0x65,  /* [7981] */
    (xdc_Char)0x72,  /* [7982] */
    (xdc_Char)0x0,  /* [7983] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[64] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1d15,  /* left */
        (xdc_Bits16)0x1d1a,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d23,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d2a,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d2f,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d38,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d3e,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d44,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d49,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d4d,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d52,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d59,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d62,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d6a,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d71,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d78,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d7d,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d87,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x1d8d,  /* left */
        (xdc_Bits16)0x1d91,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1d9a,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1d9f,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1da9,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1daf,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1db3,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x1d8d,  /* left */
        (xdc_Bits16)0x1db8,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1dc1,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1dc6,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1dcb,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1dd1,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1dd6,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1de1,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1de7,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1ded,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1df7,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801a,  /* left */
        (xdc_Bits16)0x1dfb,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1e00,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1e05,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1e09,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x1e10,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x1d8d,  /* left */
        (xdc_Bits16)0x1e18,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x1e1d,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x1e25,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x1e2e,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x1e35,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x1d1a,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x1e3c,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x1e45,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x1e55,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1e61,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8030,  /* left */
        (xdc_Bits16)0x1e68,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8030,  /* left */
        (xdc_Bits16)0x1e70,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1e7a,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x1d9a,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8034,  /* left */
        (xdc_Bits16)0x1e82,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8035,  /* left */
        (xdc_Bits16)0x1e05,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8035,  /* left */
        (xdc_Bits16)0x1e86,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8035,  /* left */
        (xdc_Bits16)0x1e98,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8034,  /* left */
        (xdc_Bits16)0x1ea4,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x8039,  /* left */
        (xdc_Bits16)0x1ea9,  /* right */
    },  /* [58] */
    {
        (xdc_Bits16)0x8039,  /* left */
        (xdc_Bits16)0x1ebb,  /* right */
    },  /* [59] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x1ec1,  /* right */
    },  /* [60] */
    {
        (xdc_Bits16)0x803c,  /* left */
        (xdc_Bits16)0x1eca,  /* right */
    },  /* [61] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1ed9,  /* right */
    },  /* [62] */
    {
        (xdc_Bits16)0x803e,  /* left */
        (xdc_Bits16)0x1ee0,  /* right */
    },  /* [63] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1f30;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x40;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((CT__xdc_runtime_Types_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((CT__xdc_runtime_Types_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((CT__xdc_runtime_Types_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((CT__xdc_runtime_Types_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((CT__xdc_runtime_Types_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((CT__xdc_runtime_Types_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((CT__xdc_runtime_Types_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((CT__xdc_runtime_Types_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((CT__xdc_runtime_Types_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__startupDoneFxn__C, ".const:xdc_runtime_Types_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Types_Module__startupDoneFxn xdc_runtime_Types_Module__startupDoneFxn__C = ((CT__xdc_runtime_Types_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = 0;


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_BIOS_RtsGateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_BIOS_RtsGateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_BIOS_RtsGateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_m3_Hwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_m3_Hwi___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_IHwi_Params), __eb);
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_HwiProxy_Args__create __args;
    __args.intNum = intNum;
    __args.hwiFxn = hwiFxn;
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_hal_Hwi_HwiProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Hwi_HwiProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_m3_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_heaps_HeapMem_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_lm4_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_lm4_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_knl_Clock_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_knl_Clock_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_knl_Clock_TimerProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_knl_Clock_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_lm4_Timer_getCurrentTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)xdc_runtime_Main_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Main_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    xdc_runtime_Main_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(__obj, __osz, __aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IHeap_Params), __eb);
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)xdc_runtime_Memory_HeapProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Memory_HeapProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    xdc_runtime_Memory_HeapProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)xdc_runtime_System_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_System_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    xdc_runtime_System_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.lm4.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm4_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm4_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm4_Timer___S1) - sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_loggers_LoggerStopMode_Object2__ s0; char c; } ti_uia_loggers_LoggerStopMode___S1;
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__DESC__C, ".const:ti_uia_loggers_LoggerStopMode_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C = {
    (xdc_Ptr)&ti_uia_loggers_LoggerStopMode_Module__FXNS__C, /* fxnTab */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link, /* modLink */
    sizeof(ti_uia_loggers_LoggerStopMode___S1) - sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objSize */
    (xdc_Ptr)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_loggers_LoggerStopMode_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.IUIATransfer VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_IUIATransfer_Handle ti_uia_runtime_IUIATransfer_create( ti_uia_runtime_IUIATransfer_Module __mod, const ti_uia_runtime_IUIATransfer_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_uia_runtime_IUIATransfer_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (ti_uia_runtime_IUIATransfer_Params), __eb);
}

/* delete */
void ti_uia_runtime_IUIATransfer_delete( ti_uia_runtime_IUIATransfer_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module __mod, const xdc_runtime_IFilterLogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IFilterLogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IFilterLogger_Params), __eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module __mod, const xdc_runtime_ILogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_ILogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_ILogger_Params), __eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.ILoggerSnapshot VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_ILoggerSnapshot_Handle ti_uia_runtime_ILoggerSnapshot_create( ti_uia_runtime_ILoggerSnapshot_Module __mod, const ti_uia_runtime_ILoggerSnapshot_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_uia_runtime_ILoggerSnapshot_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (ti_uia_runtime_ILoggerSnapshot_Params), __eb);
}

/* delete */
void ti_uia_runtime_ILoggerSnapshot_delete( ti_uia_runtime_ILoggerSnapshot_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm4.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm4_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_lm4_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32827;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_lm4_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)ti_sysbios_family_arm_lm4_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm4_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_lm4_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_lm4_Timer_Args__create *__args = __aa;
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    ti_sysbios_family_arm_lm4_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_lm4_Timer_Handle ti_sysbios_family_arm_lm4_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    ti_sysbios_family_arm_lm4_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_lm4_Timer_construct(ti_sysbios_family_arm_lm4_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_lm4_Timer_destruct(ti_sysbios_family_arm_lm4_Timer_Struct *obj)
{
    ti_sysbios_family_arm_lm4_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm4_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_lm4_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_lm4_Timer_delete(ti_sysbios_family_arm_lm4_Timer_Handle *instp)
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32822;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_m3_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_m3_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    ti_sysbios_family_arm_m3_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32817;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__ *)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    ti_sysbios_gates_GateHwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32818;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__ *)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    ti_sysbios_gates_GateMutex_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__ *)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    ti_sysbios_hal_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32806;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__ *)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    ti_sysbios_heaps_HeapMem_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32795;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__ *)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, __args->clockFxn, __args->timeout, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, clockFxn, timeout, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    ti_sysbios_knl_Clock_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__ *)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Event___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    ti_sysbios_knl_Event_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__ *)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Queue___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    ti_sysbios_knl_Queue_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__ *)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, __args->count, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, count, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    ti_sysbios_knl_Semaphore_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__ *)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Swi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, __args->swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    ti_sysbios_knl_Swi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__ *)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Task___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, __args->fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    ti_sysbios_knl_Task_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.loggers.LoggerStopMode SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_loggers_LoggerStopMode_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_loggers_LoggerStopMode_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_loggers_LoggerStopMode_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_loggers_LoggerStopMode_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_loggers_LoggerStopMode_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_loggers_LoggerStopMode_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_loggers_LoggerStopMode_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_loggers_LoggerStopMode_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_loggers_LoggerStopMode_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_loggers_LoggerStopMode_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__S( void )
{
    return ti_uia_loggers_LoggerStopMode_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_uia_loggers_LoggerStopMode_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32829;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_loggers_LoggerStopMode_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_uia_loggers_LoggerStopMode_Object__ *)oa) + i;
    }

    if (ti_uia_loggers_LoggerStopMode_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_loggers_LoggerStopMode_Object__ *)ti_uia_loggers_LoggerStopMode_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_loggers_LoggerStopMode_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_uia_loggers_LoggerStopMode___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_uia_loggers_LoggerStopMode_Params __prms;
    ti_uia_loggers_LoggerStopMode_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_uia_loggers_LoggerStopMode_Handle ti_uia_loggers_LoggerStopMode_create( const ti_uia_loggers_LoggerStopMode_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_uia_loggers_LoggerStopMode_Params __prms;
    ti_uia_loggers_LoggerStopMode_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_uia_loggers_LoggerStopMode_construct(ti_uia_loggers_LoggerStopMode_Struct *__obj, const ti_uia_loggers_LoggerStopMode_Params *__paramsPtr )
{
    ti_uia_loggers_LoggerStopMode_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), NULL);
    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_uia_loggers_LoggerStopMode_destruct(ti_uia_loggers_LoggerStopMode_Struct *obj)
{
    ti_uia_loggers_LoggerStopMode_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, *((ti_uia_loggers_LoggerStopMode_Object**)instp), NULL, -1, FALSE);
    *((ti_uia_loggers_LoggerStopMode_Handle*)instp) = NULL;
}

/* delete */
void ti_uia_loggers_LoggerStopMode_delete(ti_uia_loggers_LoggerStopMode_Handle *instp)
{
    ti_uia_loggers_LoggerStopMode_Object__delete__S(instp);
}


/*
 * ======== ti.uia.runtime.EventHdr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_EventHdr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.QueueDescriptor SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_QueueDescriptor_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */


