/*********************************************************************
	Rhapsody	: 8.1.4 
	Login		: ylebeaupin
	Component	: ABSSystemComponent 
	Configuration 	: ABSConfig
	Model Element	: ABSSystem
//!	Generated Date	: Mon, 1, Oct 2018  
	File Path	: ABSSystemComponent\ABSConfig\ABSSystem.h
*********************************************************************/

#ifndef ABSSystem_H
#define ABSSystem_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include <oxf\OMDefaultReactivePort.h>
//## auto_generated
class ABSSystem;

//#[ ignore
#define Reset_ABSSystem_id 17801

#define TurnOn_ABSSystem_id 17802

#define PowerOn_ABSSystem_id 17803

#define PowerOff_ABSSystem_id 17804

#define BrakeOn_ABSSystem_id 17805

#define BrakeOff_ABSSystem_id 17806

#define IncreasePressure_ABSSystem_id 17807

#define DecreasePressure_ABSSystem_id 17808

#define RunInitialTest_ABSSystem_id 17809

#define RunBrakingTest_ABSSystem_id 17810

#define GetWheelSpped_ABSSystem_id 17811

#define GetWheelSpeed_ABSSystem_id 17812
//#]

//## package ABSSystem



//## event Reset()
class Reset : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Reset();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event TurnOn()
class TurnOn : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    TurnOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event PowerOn()
class PowerOn : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    PowerOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event PowerOff()
class PowerOff : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    PowerOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event BrakeOn()
class BrakeOn : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    BrakeOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event BrakeOff()
class BrakeOff : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    BrakeOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event IncreasePressure()
class IncreasePressure : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    IncreasePressure();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event DecreasePressure()
class DecreasePressure : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DecreasePressure();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event RunInitialTest()
class RunInitialTest : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RunInitialTest();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event RunBrakingTest()
class RunBrakingTest : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    RunBrakingTest();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event GetWheelSpped()
class GetWheelSpped : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    GetWheelSpped();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event GetWheelSpeed()
class GetWheelSpeed : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    GetWheelSpeed();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## package ABSSystem

//## class ABSSystem
class ABSSystem : public OMReactive {
public :

    //## auto_generated
    class ABSController;
    
    //## auto_generated
    class ABSFailLight;
    
    //## auto_generated
    class BrakePressureValveActuator;
    
    //## auto_generated
    class SystemTestManager;
    
    //## auto_generated
    class WheelspeedSensor;
    
    //## class ABSSystem::ABSController
    class ABSController : public OMReactive {
    public :
    
    //#[ ignore
        //## package ABSSystem
        class pressure_C : public OMDefaultReactivePort {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            pressure_C();
            
            //## auto_generated
            virtual ~pressure_C();
            
            ////    Operations    ////
            
            //## auto_generated
            void connectABSController(ABSController* part);
            
            ////    Attributes    ////
        
        protected :
        
            int _p_;		//## attribute _p_
        };
        
        //## package ABSSystem
        class speed_C : public OMDefaultReactivePort {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            speed_C();
            
            //## auto_generated
            virtual ~speed_C();
            
            ////    Operations    ////
            
            //## auto_generated
            void connectABSController(ABSController* part);
            
            ////    Attributes    ////
        
        protected :
        
            int _p_;		//## attribute _p_
        };
        
        //## package ABSSystem
        class light_C : public OMDefaultReactivePort {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            light_C();
            
            //## auto_generated
            virtual ~light_C();
            
            ////    Operations    ////
            
            //## auto_generated
            void connectABSController(ABSController* part);
            
            ////    Attributes    ////
        
        protected :
        
            int _p_;		//## attribute _p_
        };
        
        //## package ABSSystem
        class test_C : public OMDefaultReactivePort {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            test_C();
            
            //## auto_generated
            virtual ~test_C();
            
            ////    Operations    ////
            
            //## auto_generated
            void connectABSController(ABSController* part);
            
            ////    Attributes    ////
        
        protected :
        
            int _p_;		//## attribute _p_
        };
    //#]
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        ABSController(IOxfActive* theActiveContext = 0);
        
        //## auto_generated
        ~ABSController();
        
        ////    Additional operations    ////
        
        //## auto_generated
        pressure_C* getPressure() const;
        
        //## auto_generated
        pressure_C* get_pressure() const;
        
        //## auto_generated
        speed_C* getSpeed() const;
        
        //## auto_generated
        speed_C* get_speed() const;
        
        //## auto_generated
        light_C* getLight() const;
        
        //## auto_generated
        light_C* get_light() const;
        
        //## auto_generated
        test_C* getTest() const;
        
        //## auto_generated
        test_C* get_test() const;
        
        //## auto_generated
        virtual bool startBehavior();
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        //## auto_generated
        void initStatechart();
        
        ////    Relations and components    ////
        
    //#[ ignore
        pressure_C pressure;
        
        speed_C speed;
        
        light_C light;
        
        test_C test;
    //#]
    
        ////    Framework operations    ////
    
    public :
    
        // rootState:
        //## statechart_method
        inline bool rootState_IN() const;
        
        //## statechart_method
        virtual void rootState_entDef();
        
        //## statechart_method
        virtual IOxfReactive::TakeEventStatus rootState_processEvent();
        
        // WaitingForTestResult:
        //## statechart_method
        inline bool WaitingForTestResult_IN() const;
        
        // Wait:
        //## statechart_method
        inline bool Wait_IN() const;
        
        // Idle:
        //## statechart_method
        inline bool Idle_IN() const;
        
        // Braking:
        //## statechart_method
        inline bool Braking_IN() const;
        
        //## statechart_method
        void Braking_entDef();
        
        //## statechart_method
        IOxfReactive::TakeEventStatus Braking_handleEvent();
        
        // Pumping:
        //## statechart_method
        inline bool Pumping_IN() const;
        
        // NormalBraking:
        //## statechart_method
        inline bool NormalBraking_IN() const;
        
        // ABSFailed:
        //## statechart_method
        inline bool ABSFailed_IN() const;
        
        ////    Framework    ////
    
    protected :
    
    //#[ ignore
        enum ABSController_Enum {
            OMNonState = 0,
            WaitingForTestResult = 1,
            Wait = 2,
            Idle = 3,
            Braking = 4,
            Pumping = 5,
            NormalBraking = 6,
            ABSFailed = 7
        };
        
        int rootState_subState;
        
        int rootState_active;
        
        int Braking_subState;
    //#]
    };
    
    //## class ABSSystem::ABSFailLight
    class ABSFailLight : public OMReactive {
    public :
    
    //#[ ignore
        //## package ABSSystem
        class light_C : public OMDefaultReactivePort {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            light_C();
            
            //## auto_generated
            virtual ~light_C();
            
            ////    Operations    ////
            
            //## auto_generated
            void connectABSFailLight(ABSFailLight* part);
            
            ////    Attributes    ////
        
        protected :
        
            int _p_;		//## attribute _p_
        };
    //#]
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        ABSFailLight(IOxfActive* theActiveContext = 0);
        
        //## auto_generated
        ~ABSFailLight();
        
        ////    Additional operations    ////
        
        //## auto_generated
        light_C* getLight() const;
        
        //## auto_generated
        light_C* get_light() const;
        
        //## auto_generated
        virtual bool startBehavior();
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        //## auto_generated
        void initStatechart();
        
        ////    Relations and components    ////
        
    //#[ ignore
        light_C light;
    //#]
    
        ////    Framework operations    ////
    
    public :
    
        // rootState:
        //## statechart_method
        inline bool rootState_IN() const;
        
        //## statechart_method
        virtual void rootState_entDef();
        
        //## statechart_method
        virtual IOxfReactive::TakeEventStatus rootState_processEvent();
        
        // LightOn:
        //## statechart_method
        inline bool LightOn_IN() const;
        
        // LightOff:
        //## statechart_method
        inline bool LightOff_IN() const;
        
        ////    Framework    ////
    
    protected :
    
    //#[ ignore
        enum ABSFailLight_Enum {
            OMNonState = 0,
            LightOn = 1,
            LightOff = 2
        };
        
        int rootState_subState;
        
        int rootState_active;
    //#]
    };
    
    //## class ABSSystem::BrakePressureValveActuator
    class BrakePressureValveActuator : public OMReactive {
    public :
    
    //#[ ignore
        //## package ABSSystem
        class pressure_C : public OMDefaultReactivePort {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            pressure_C();
            
            //## auto_generated
            virtual ~pressure_C();
            
            ////    Operations    ////
            
            //## auto_generated
            void connectBrakePressureValveActuator(BrakePressureValveActuator* part);
            
            ////    Attributes    ////
        
        protected :
        
            int _p_;		//## attribute _p_
        };
    //#]
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        BrakePressureValveActuator(IOxfActive* theActiveContext = 0);
        
        //## auto_generated
        ~BrakePressureValveActuator();
        
        ////    Additional operations    ////
        
        //## auto_generated
        pressure_C* getPressure() const;
        
        //## auto_generated
        pressure_C* get_pressure() const;
        
        //## auto_generated
        virtual bool startBehavior();
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        //## auto_generated
        void initStatechart();
        
        ////    Relations and components    ////
        
    //#[ ignore
        pressure_C pressure;
    //#]
    
        ////    Framework operations    ////
    
    public :
    
        // rootState:
        //## statechart_method
        inline bool rootState_IN() const;
        
        //## statechart_method
        virtual void rootState_entDef();
        
        //## statechart_method
        virtual IOxfReactive::TakeEventStatus rootState_processEvent();
        
        // IncreasingPressure:
        //## statechart_method
        inline bool IncreasingPressure_IN() const;
        
        // Idle:
        //## statechart_method
        inline bool Idle_IN() const;
        
        // DecreasingPressure:
        //## statechart_method
        inline bool DecreasingPressure_IN() const;
        
        ////    Framework    ////
    
    protected :
    
    //#[ ignore
        enum BrakePressureValveActuator_Enum {
            OMNonState = 0,
            IncreasingPressure = 1,
            Idle = 2,
            DecreasingPressure = 3
        };
        
        int rootState_subState;
        
        int rootState_active;
    //#]
    };
    
    //## class ABSSystem::WheelspeedSensor
    class WheelspeedSensor : public OMReactive {
    public :
    
    //#[ ignore
        //## package ABSSystem
        class speed_C : public OMDefaultReactivePort {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            speed_C();
            
            //## auto_generated
            virtual ~speed_C();
            
            ////    Operations    ////
            
            //## auto_generated
            void connectWheelspeedSensor(WheelspeedSensor* part);
            
            ////    Attributes    ////
        
        protected :
        
            int _p_;		//## attribute _p_
        };
    //#]
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        WheelspeedSensor(IOxfActive* theActiveContext = 0);
        
        //## auto_generated
        ~WheelspeedSensor();
        
        ////    Additional operations    ////
        
        //## auto_generated
        speed_C* getSpeed() const;
        
        //## auto_generated
        speed_C* get_speed() const;
        
        //## auto_generated
        virtual bool startBehavior();
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        //## auto_generated
        void initStatechart();
        
        ////    Relations and components    ////
        
    //#[ ignore
        speed_C speed;
    //#]
    
        ////    Framework operations    ////
    
    public :
    
        // rootState:
        //## statechart_method
        inline bool rootState_IN() const;
        
        //## statechart_method
        virtual void rootState_entDef();
        
        //## statechart_method
        virtual IOxfReactive::TakeEventStatus rootState_processEvent();
        
        // Idle:
        //## statechart_method
        inline bool Idle_IN() const;
        
        ////    Framework    ////
    
    protected :
    
    //#[ ignore
        enum WheelspeedSensor_Enum {
            OMNonState = 0,
            Idle = 1
        };
        
        int rootState_subState;
        
        int rootState_active;
    //#]
    };
    
    //## class ABSSystem::SystemTestManager
    class SystemTestManager : public OMReactive {
    public :
    
    //#[ ignore
        //## package ABSSystem
        class test_C : public OMDefaultReactivePort {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            test_C();
            
            //## auto_generated
            virtual ~test_C();
            
            ////    Operations    ////
            
            //## auto_generated
            void connectSystemTestManager(SystemTestManager* part);
            
            ////    Attributes    ////
        
        protected :
        
            int _p_;		//## attribute _p_
        };
    //#]
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        SystemTestManager(IOxfActive* theActiveContext = 0);
        
        //## auto_generated
        ~SystemTestManager();
        
        ////    Additional operations    ////
        
        //## auto_generated
        test_C* getTest() const;
        
        //## auto_generated
        test_C* get_test() const;
        
        //## auto_generated
        virtual bool startBehavior();
    
    protected :
    
        //## auto_generated
        void initRelations();
        
        //## auto_generated
        void initStatechart();
        
        ////    Relations and components    ////
        
    //#[ ignore
        test_C test;
    //#]
    
        ////    Framework operations    ////
    
    public :
    
        // rootState:
        //## statechart_method
        inline bool rootState_IN() const;
        
        //## statechart_method
        virtual void rootState_entDef();
        
        //## statechart_method
        virtual IOxfReactive::TakeEventStatus rootState_processEvent();
        
        // RunninInititialDiagnostic:
        //## statechart_method
        inline bool RunninInititialDiagnostic_IN() const;
        
        // RunningBrakingDiagnostic:
        //## statechart_method
        inline bool RunningBrakingDiagnostic_IN() const;
        
        // Idle:
        //## statechart_method
        inline bool Idle_IN() const;
        
        ////    Framework    ////
    
    protected :
    
    //#[ ignore
        enum SystemTestManager_Enum {
            OMNonState = 0,
            RunninInititialDiagnostic = 1,
            RunningBrakingDiagnostic = 2,
            Idle = 3
        };
        
        int rootState_subState;
        
        int rootState_active;
    //#]
    };
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    ABSSystem(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~ABSSystem();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ABSController* getTheABSController() const;
    
    //## auto_generated
    ABSFailLight* getTheABSFailLight() const;
    
    //## auto_generated
    BrakePressureValveActuator* getTheBrakePressureValveActuator() const;
    
    //## auto_generated
    SystemTestManager* getTheSystemTestManager() const;
    
    //## auto_generated
    WheelspeedSensor* getTheWheelspeedSensor() const;
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Relations and components    ////

protected :

    ABSController theABSController;		//## classInstance theABSController
    
    ABSFailLight theABSFailLight;		//## classInstance theABSFailLight
    
    BrakePressureValveActuator theBrakePressureValveActuator;		//## classInstance theBrakePressureValveActuator
    
    SystemTestManager theSystemTestManager;		//## classInstance theSystemTestManager
    
    WheelspeedSensor theWheelspeedSensor;		//## classInstance theWheelspeedSensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
};

inline bool ABSSystem::ABSController::rootState_IN() const {
    return true;
}

inline bool ABSSystem::ABSController::WaitingForTestResult_IN() const {
    return rootState_subState == WaitingForTestResult;
}

inline bool ABSSystem::ABSController::Wait_IN() const {
    return rootState_subState == Wait;
}

inline bool ABSSystem::ABSController::Idle_IN() const {
    return rootState_subState == Idle;
}

inline bool ABSSystem::ABSController::Braking_IN() const {
    return rootState_subState == Braking;
}

inline bool ABSSystem::ABSController::Pumping_IN() const {
    return Braking_subState == Pumping;
}

inline bool ABSSystem::ABSController::NormalBraking_IN() const {
    return Braking_subState == NormalBraking;
}

inline bool ABSSystem::ABSController::ABSFailed_IN() const {
    return rootState_subState == ABSFailed;
}

inline bool ABSSystem::ABSFailLight::rootState_IN() const {
    return true;
}

inline bool ABSSystem::ABSFailLight::LightOn_IN() const {
    return rootState_subState == LightOn;
}

inline bool ABSSystem::ABSFailLight::LightOff_IN() const {
    return rootState_subState == LightOff;
}

inline bool ABSSystem::BrakePressureValveActuator::rootState_IN() const {
    return true;
}

inline bool ABSSystem::BrakePressureValveActuator::IncreasingPressure_IN() const {
    return rootState_subState == IncreasingPressure;
}

inline bool ABSSystem::BrakePressureValveActuator::Idle_IN() const {
    return rootState_subState == Idle;
}

inline bool ABSSystem::BrakePressureValveActuator::DecreasingPressure_IN() const {
    return rootState_subState == DecreasingPressure;
}

inline bool ABSSystem::WheelspeedSensor::rootState_IN() const {
    return true;
}

inline bool ABSSystem::WheelspeedSensor::Idle_IN() const {
    return rootState_subState == Idle;
}

inline bool ABSSystem::SystemTestManager::rootState_IN() const {
    return true;
}

inline bool ABSSystem::SystemTestManager::RunninInititialDiagnostic_IN() const {
    return rootState_subState == RunninInititialDiagnostic;
}

inline bool ABSSystem::SystemTestManager::RunningBrakingDiagnostic_IN() const {
    return rootState_subState == RunningBrakingDiagnostic;
}

inline bool ABSSystem::SystemTestManager::Idle_IN() const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: ABSSystemComponent\ABSConfig\ABSSystem.h
*********************************************************************/
