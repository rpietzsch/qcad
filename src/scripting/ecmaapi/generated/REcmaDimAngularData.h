// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMADIMANGULARDATA_H
        #define RECMADIMANGULARDATA_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDimAngularData.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaDimAngularData {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRDimensionData(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSane
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setExtensionLine1Start
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExtensionLine1Start
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setExtensionLine1End
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExtensionLine1End
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setExtensionLine2Start
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExtensionLine2Start
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setExtensionLine2End
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExtensionLine2End
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDimArcPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimArcPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngles
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMeasuredValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAutoLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDimAngularData* getSelf(const QString& fName, QScriptContext* context)
    ;static RDimAngularData* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    