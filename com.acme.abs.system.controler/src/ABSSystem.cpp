/********************************************************************
	Rhapsody	: 8.1.4 
	Login		: ylebeaupin
	Component	: ABSSystemComponent 
	Configuration 	: ABSConfig
	Model Element	: ABSSystem
//!	Generated Date	: Fri, 28, Sep 2018  
	File Path	: ABSSystemComponent\ABSConfig\ABSSystem.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "ABSSystem.h"
//## package ABSSystem



//## event Reset()
Reset::Reset() {
    setId(Reset_ABSSystem_id);
}

bool Reset::isTypeOf(const short id) const {
    return (Reset_ABSSystem_id==id);
}

//## event TurnOn()
TurnOn::TurnOn() {
    setId(TurnOn_ABSSystem_id);
}

bool TurnOn::isTypeOf(const short id) const {
    return (TurnOn_ABSSystem_id==id);
}

//## event PowerOn()
PowerOn::PowerOn() {
    setId(PowerOn_ABSSystem_id);
}

bool PowerOn::isTypeOf(const short id) const {
    return (PowerOn_ABSSystem_id==id);
}

//## event PowerOff()
PowerOff::PowerOff() {
    setId(PowerOff_ABSSystem_id);
}

bool PowerOff::isTypeOf(const short id) const {
    return (PowerOff_ABSSystem_id==id);
}

//## event BrakeOn()
BrakeOn::BrakeOn() {
    setId(BrakeOn_ABSSystem_id);
}

bool BrakeOn::isTypeOf(const short id) const {
    return (BrakeOn_ABSSystem_id==id);
}

//## event BrakeOff()
BrakeOff::BrakeOff() {
    setId(BrakeOff_ABSSystem_id);
}

bool BrakeOff::isTypeOf(const short id) const {
    return (BrakeOff_ABSSystem_id==id);
}

//## event IncreasePressure()
IncreasePressure::IncreasePressure() {
    setId(IncreasePressure_ABSSystem_id);
}

bool IncreasePressure::isTypeOf(const short id) const {
    return (IncreasePressure_ABSSystem_id==id);
}

//## event DecreasePressure()
DecreasePressure::DecreasePressure() {
    setId(DecreasePressure_ABSSystem_id);
}

bool DecreasePressure::isTypeOf(const short id) const {
    return (DecreasePressure_ABSSystem_id==id);
}

//## event RunInitialTest()
RunInitialTest::RunInitialTest() {
    setId(RunInitialTest_ABSSystem_id);
}

bool RunInitialTest::isTypeOf(const short id) const {
    return (RunInitialTest_ABSSystem_id==id);
}

//## event RunBrakingTest()
RunBrakingTest::RunBrakingTest() {
    setId(RunBrakingTest_ABSSystem_id);
}

bool RunBrakingTest::isTypeOf(const short id) const {
    return (RunBrakingTest_ABSSystem_id==id);
}

//## event GetWheelSpped()
GetWheelSpped::GetWheelSpped() {
    setId(GetWheelSpped_ABSSystem_id);
}

bool GetWheelSpped::isTypeOf(const short id) const {
    return (GetWheelSpped_ABSSystem_id==id);
}

//## event GetWheelSpeed()
GetWheelSpeed::GetWheelSpeed() {
    setId(GetWheelSpeed_ABSSystem_id);
}

bool GetWheelSpeed::isTypeOf(const short id) const {
    return (GetWheelSpeed_ABSSystem_id==id);
}

//## package ABSSystem

//## class ABSSystem
//## class ABSSystem::ABSController
//#[ ignore
ABSSystem::ABSController::pressure_C::pressure_C() : _p_(0) {
}

ABSSystem::ABSController::pressure_C::~pressure_C() {
}

void ABSSystem::ABSController::pressure_C::connectABSController(ABSController* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

ABSSystem::ABSController::speed_C::speed_C() : _p_(0) {
}

ABSSystem::ABSController::speed_C::~speed_C() {
}

void ABSSystem::ABSController::speed_C::connectABSController(ABSController* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

ABSSystem::ABSController::light_C::light_C() : _p_(0) {
}

ABSSystem::ABSController::light_C::~light_C() {
}

void ABSSystem::ABSController::light_C::connectABSController(ABSController* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

ABSSystem::ABSController::test_C::test_C() : _p_(0) {
}

ABSSystem::ABSController::test_C::~test_C() {
}

void ABSSystem::ABSController::test_C::connectABSController(ABSController* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

ABSSystem::ABSController::ABSController(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

ABSSystem::ABSController::~ABSController() {
}

ABSSystem::ABSController::pressure_C* ABSSystem::ABSController::getPressure() const {
    return (ABSSystem::ABSController::pressure_C*) &pressure;
}

ABSSystem::ABSController::pressure_C* ABSSystem::ABSController::get_pressure() const {
    return (ABSSystem::ABSController::pressure_C*) &pressure;
}

ABSSystem::ABSController::speed_C* ABSSystem::ABSController::getSpeed() const {
    return (ABSSystem::ABSController::speed_C*) &speed;
}

ABSSystem::ABSController::speed_C* ABSSystem::ABSController::get_speed() const {
    return (ABSSystem::ABSController::speed_C*) &speed;
}

ABSSystem::ABSController::light_C* ABSSystem::ABSController::getLight() const {
    return (ABSSystem::ABSController::light_C*) &light;
}

ABSSystem::ABSController::light_C* ABSSystem::ABSController::get_light() const {
    return (ABSSystem::ABSController::light_C*) &light;
}

ABSSystem::ABSController::test_C* ABSSystem::ABSController::getTest() const {
    return (ABSSystem::ABSController::test_C*) &test;
}

ABSSystem::ABSController::test_C* ABSSystem::ABSController::get_test() const {
    return (ABSSystem::ABSController::test_C*) &test;
}

bool ABSSystem::ABSController::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ABSSystem::ABSController::initRelations() {
    if (get_pressure() != NULL) {
        get_pressure()->connectABSController(this);
    }
    if (get_speed() != NULL) {
        get_speed()->connectABSController(this);
    }
    if (get_light() != NULL) {
        get_light()->connectABSController(this);
    }
    if (get_test() != NULL) {
        get_test()->connectABSController(this);
    }
}

void ABSSystem::ABSController::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Braking_subState = OMNonState;
}

void ABSSystem::ABSController::rootState_entDef() {
    {
        rootState_subState = Idle;
        rootState_active = Idle;
    }
}

IOxfReactive::TakeEventStatus ABSSystem::ABSController::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(PowerOn_ABSSystem_id))
                {
                    pushNullTransition();
                    rootState_subState = WaitingForTestResult;
                    rootState_active = WaitingForTestResult;
                    res = eventConsumed;
                }
            
        }
        break;
        // State WaitingForTestResult
        case WaitingForTestResult:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 1 
                    if(testPass==false)
                        {
                            popNullTransition();
                            rootState_subState = ABSFailed;
                            rootState_active = ABSFailed;
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State Wait
        case Wait:
        {
            if(IS_EVENT_TYPE_OF(PowerOff_ABSSystem_id))
                {
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(BrakeOn_ABSSystem_id))
                {
                    Braking_entDef();
                    res = eventConsumed;
                }
            
        }
        break;
        // State NormalBraking
        case NormalBraking:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    Braking_subState = Pumping;
                    rootState_active = Pumping;
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Braking_handleEvent();
                }
        }
        break;
        // State Pumping
        case Pumping:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    Braking_subState = NormalBraking;
                    rootState_active = NormalBraking;
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = Braking_handleEvent();
                }
        }
        break;
        default:
            break;
    }
    return res;
}

void ABSSystem::ABSController::Braking_entDef() {
    rootState_subState = Braking;
    pushNullTransition();
    Braking_subState = NormalBraking;
    rootState_active = NormalBraking;
}

IOxfReactive::TakeEventStatus ABSSystem::ABSController::Braking_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(PowerOff_ABSSystem_id))
        {
            switch (Braking_subState) {
                // State NormalBraking
                case NormalBraking:
                {
                    popNullTransition();
                }
                break;
                // State Pumping
                case Pumping:
                {
                    popNullTransition();
                }
                break;
                default:
                    break;
            }
            Braking_subState = OMNonState;
            rootState_subState = Idle;
            rootState_active = Idle;
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(BrakeOff_ABSSystem_id))
        {
            switch (Braking_subState) {
                // State NormalBraking
                case NormalBraking:
                {
                    popNullTransition();
                }
                break;
                // State Pumping
                case Pumping:
                {
                    popNullTransition();
                }
                break;
                default:
                    break;
            }
            Braking_subState = OMNonState;
            rootState_subState = Wait;
            rootState_active = Wait;
            res = eventConsumed;
        }
    
    return res;
}

//## class ABSSystem::ABSFailLight
//#[ ignore
ABSSystem::ABSFailLight::light_C::light_C() : _p_(0) {
}

ABSSystem::ABSFailLight::light_C::~light_C() {
}

void ABSSystem::ABSFailLight::light_C::connectABSFailLight(ABSFailLight* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

ABSSystem::ABSFailLight::ABSFailLight(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

ABSSystem::ABSFailLight::~ABSFailLight() {
}

ABSSystem::ABSFailLight::light_C* ABSSystem::ABSFailLight::getLight() const {
    return (ABSSystem::ABSFailLight::light_C*) &light;
}

ABSSystem::ABSFailLight::light_C* ABSSystem::ABSFailLight::get_light() const {
    return (ABSSystem::ABSFailLight::light_C*) &light;
}

bool ABSSystem::ABSFailLight::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ABSSystem::ABSFailLight::initRelations() {
    if (get_light() != NULL) {
        get_light()->connectABSFailLight(this);
    }
}

void ABSSystem::ABSFailLight::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void ABSSystem::ABSFailLight::rootState_entDef() {
    {
        rootState_subState = LightOff;
        rootState_active = LightOff;
    }
}

IOxfReactive::TakeEventStatus ABSSystem::ABSFailLight::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State LightOff
        case LightOff:
        {
            if(IS_EVENT_TYPE_OF(TurnOn_ABSSystem_id))
                {
                    rootState_subState = LightOn;
                    rootState_active = LightOn;
                    res = eventConsumed;
                }
            
        }
        break;
        // State LightOn
        case LightOn:
        {
            if(IS_EVENT_TYPE_OF(Reset_ABSSystem_id))
                {
                    rootState_subState = LightOff;
                    rootState_active = LightOff;
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

//## class ABSSystem::BrakePressureValveActuator
//#[ ignore
ABSSystem::BrakePressureValveActuator::pressure_C::pressure_C() : _p_(0) {
}

ABSSystem::BrakePressureValveActuator::pressure_C::~pressure_C() {
}

void ABSSystem::BrakePressureValveActuator::pressure_C::connectBrakePressureValveActuator(BrakePressureValveActuator* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

ABSSystem::BrakePressureValveActuator::BrakePressureValveActuator(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

ABSSystem::BrakePressureValveActuator::~BrakePressureValveActuator() {
}

ABSSystem::BrakePressureValveActuator::pressure_C* ABSSystem::BrakePressureValveActuator::getPressure() const {
    return (ABSSystem::BrakePressureValveActuator::pressure_C*) &pressure;
}

ABSSystem::BrakePressureValveActuator::pressure_C* ABSSystem::BrakePressureValveActuator::get_pressure() const {
    return (ABSSystem::BrakePressureValveActuator::pressure_C*) &pressure;
}

bool ABSSystem::BrakePressureValveActuator::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ABSSystem::BrakePressureValveActuator::initRelations() {
    if (get_pressure() != NULL) {
        get_pressure()->connectBrakePressureValveActuator(this);
    }
}

void ABSSystem::BrakePressureValveActuator::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void ABSSystem::BrakePressureValveActuator::rootState_entDef() {
    {
        rootState_subState = Idle;
        rootState_active = Idle;
    }
}

IOxfReactive::TakeEventStatus ABSSystem::BrakePressureValveActuator::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(IncreasePressure_ABSSystem_id))
                {
                    pushNullTransition();
                    rootState_subState = IncreasingPressure;
                    rootState_active = IncreasingPressure;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(DecreasePressure_ABSSystem_id))
                {
                    pushNullTransition();
                    rootState_subState = DecreasingPressure;
                    rootState_active = DecreasingPressure;
                    res = eventConsumed;
                }
            
        }
        break;
        // State IncreasingPressure
        case IncreasingPressure:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    res = eventConsumed;
                }
            
        }
        break;
        // State DecreasingPressure
        case DecreasingPressure:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

//## class ABSSystem::WheelspeedSensor
//#[ ignore
ABSSystem::WheelspeedSensor::speed_C::speed_C() : _p_(0) {
}

ABSSystem::WheelspeedSensor::speed_C::~speed_C() {
}

void ABSSystem::WheelspeedSensor::speed_C::connectWheelspeedSensor(WheelspeedSensor* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

ABSSystem::WheelspeedSensor::WheelspeedSensor(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

ABSSystem::WheelspeedSensor::~WheelspeedSensor() {
}

ABSSystem::WheelspeedSensor::speed_C* ABSSystem::WheelspeedSensor::getSpeed() const {
    return (ABSSystem::WheelspeedSensor::speed_C*) &speed;
}

ABSSystem::WheelspeedSensor::speed_C* ABSSystem::WheelspeedSensor::get_speed() const {
    return (ABSSystem::WheelspeedSensor::speed_C*) &speed;
}

bool ABSSystem::WheelspeedSensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ABSSystem::WheelspeedSensor::initRelations() {
    if (get_speed() != NULL) {
        get_speed()->connectWheelspeedSensor(this);
    }
}

void ABSSystem::WheelspeedSensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void ABSSystem::WheelspeedSensor::rootState_entDef() {
    {
        rootState_subState = Idle;
        rootState_active = Idle;
    }
}

IOxfReactive::TakeEventStatus ABSSystem::WheelspeedSensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Idle
    if(rootState_active == Idle)
        {
            if(IS_EVENT_TYPE_OF(GetWheelSpeed_ABSSystem_id))
                {
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    res = eventConsumed;
                }
            
        }
    return res;
}

//## class ABSSystem::SystemTestManager
//#[ ignore
ABSSystem::SystemTestManager::test_C::test_C() : _p_(0) {
}

ABSSystem::SystemTestManager::test_C::~test_C() {
}

void ABSSystem::SystemTestManager::test_C::connectSystemTestManager(SystemTestManager* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}
//#]

ABSSystem::SystemTestManager::SystemTestManager(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

ABSSystem::SystemTestManager::~SystemTestManager() {
}

ABSSystem::SystemTestManager::test_C* ABSSystem::SystemTestManager::getTest() const {
    return (ABSSystem::SystemTestManager::test_C*) &test;
}

ABSSystem::SystemTestManager::test_C* ABSSystem::SystemTestManager::get_test() const {
    return (ABSSystem::SystemTestManager::test_C*) &test;
}

bool ABSSystem::SystemTestManager::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ABSSystem::SystemTestManager::initRelations() {
    if (get_test() != NULL) {
        get_test()->connectSystemTestManager(this);
    }
}

void ABSSystem::SystemTestManager::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void ABSSystem::SystemTestManager::rootState_entDef() {
    {
        pushNullTransition();
        rootState_subState = Idle;
        rootState_active = Idle;
    }
}

IOxfReactive::TakeEventStatus ABSSystem::SystemTestManager::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State RunninInititialDiagnostic
        case RunninInititialDiagnostic:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    res = eventConsumed;
                }
            
        }
        break;
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = RunningBrakingDiagnostic;
                    rootState_active = RunningBrakingDiagnostic;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(RunBrakingTest_ABSSystem_id))
                {
                    popNullTransition();
                    rootState_subState = RunningBrakingDiagnostic;
                    rootState_active = RunningBrakingDiagnostic;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(RunInitialTest_ABSSystem_id))
                {
                    popNullTransition();
                    pushNullTransition();
                    rootState_subState = RunninInititialDiagnostic;
                    rootState_active = RunninInititialDiagnostic;
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

ABSSystem::ABSSystem(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    {
        {
            theABSController.setShouldDelete(false);
        }
        {
            theABSFailLight.setShouldDelete(false);
        }
        {
            theBrakePressureValveActuator.setShouldDelete(false);
        }
        {
            theSystemTestManager.setShouldDelete(false);
        }
        {
            theWheelspeedSensor.setShouldDelete(false);
        }
    }
}

ABSSystem::~ABSSystem() {
}

void ABSSystem::Reset() {
    //#[ operation Reset()
    //#]
}

ABSSystem::ABSController* ABSSystem::getTheABSController() const {
    return (ABSSystem::ABSController*) &theABSController;
}

ABSSystem::ABSFailLight* ABSSystem::getTheABSFailLight() const {
    return (ABSSystem::ABSFailLight*) &theABSFailLight;
}

ABSSystem::BrakePressureValveActuator* ABSSystem::getTheBrakePressureValveActuator() const {
    return (ABSSystem::BrakePressureValveActuator*) &theBrakePressureValveActuator;
}

ABSSystem::SystemTestManager* ABSSystem::getTheSystemTestManager() const {
    return (ABSSystem::SystemTestManager*) &theSystemTestManager;
}

ABSSystem::WheelspeedSensor* ABSSystem::getTheWheelspeedSensor() const {
    return (ABSSystem::WheelspeedSensor*) &theWheelspeedSensor;
}

bool ABSSystem::startBehavior() {
    bool done = true;
    done &= theABSController.startBehavior();
    done &= theABSFailLight.startBehavior();
    done &= theBrakePressureValveActuator.startBehavior();
    done &= theSystemTestManager.startBehavior();
    done &= theWheelspeedSensor.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void ABSSystem::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        theABSController.setActiveContext(theActiveContext, false);
        theABSFailLight.setActiveContext(theActiveContext, false);
        theBrakePressureValveActuator.setActiveContext(theActiveContext, false);
        theSystemTestManager.setActiveContext(theActiveContext, false);
        theWheelspeedSensor.setActiveContext(theActiveContext, false);
    }
}

void ABSSystem::destroy() {
    theABSController.destroy();
    theABSFailLight.destroy();
    theBrakePressureValveActuator.destroy();
    theSystemTestManager.destroy();
    theWheelspeedSensor.destroy();
    OMReactive::destroy();
}

/*********************************************************************
	File Path	: ABSSystemComponent\ABSConfig\ABSSystem.cpp
*********************************************************************/
