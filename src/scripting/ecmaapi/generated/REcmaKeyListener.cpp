// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaKeyListener.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include <QKeyEvent>
            
            
        // includes for base ecma wrapper classes
         void REcmaKeyListener::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RKeyListener*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, keyPressed, "keyPressed");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RKeyListener*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RKeyListener",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaKeyListener::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RKeyListener: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaKeyListener::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RKeyListener"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaKeyListener::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaKeyListener::keyPressed
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaKeyListener::keyPressed", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaKeyListener::keyPressed";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RKeyListener* self = 
                        getSelf("keyPressed", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant()
        ) /* type: QKeyEvent * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    QKeyEvent * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<QKeyEvent >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RKeyListener: Argument 0 is not of type QKeyEvent *QKeyEvent *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->keyPressed(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RKeyListener.keyPressed().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaKeyListener::keyPressed", context, engine);
            return result;
        }
         QScriptValue REcmaKeyListener::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RKeyListener* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RKeyListener(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaKeyListener::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RKeyListener* self = getSelf("RKeyListener", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RKeyListener* REcmaKeyListener::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RKeyListener* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RKeyListener >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RKeyListener.%1(): "
                        "This object is not a RKeyListener").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RKeyListener* REcmaKeyListener::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RKeyListener* selfBase = getSelf(fName, context);
                RKeyListener* self = dynamic_cast<RKeyListener*>(selfBase);
                //return REcmaHelper::scriptValueTo<RKeyListener >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RKeyListener.%1(): "
                    "This object is not a RKeyListener").arg(fName),
                    context);
            }

            return self;
            


        }
        