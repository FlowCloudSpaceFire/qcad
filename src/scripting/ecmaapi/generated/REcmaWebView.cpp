// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaWebView.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaWebView::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RWebView*) 0)));
        protoCreated = true;
    }

    
        // primary base class QWebView:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QWebView*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QWebView
        REcmaHelper::registerFunction(&engine, proto, getQWebView, "getQWebView");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, sizeHint, "sizeHint");
            
            REcmaHelper::registerFunction(&engine, proto, minimumSizeHint, "minimumSizeHint");
            
            REcmaHelper::registerFunction(&engine, proto, installEventFilter, "installEventFilter");
            
            REcmaHelper::registerFunction(&engine, proto, setAttribute, "setAttribute");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RWebView*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RWebView*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RWebView",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaWebView::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RWebView(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: QWidget * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QWidget *
            a0 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RWebView
                    * cppResult =
                    new
                    RWebView
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RWebView(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaWebView::getQWebView(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QWebView* cppResult =
                    qscriptvalue_cast<RWebView*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaWebView::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RWebView"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaWebView::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QWebView");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaWebView::sizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaWebView::sizeHint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaWebView::sizeHint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RWebView* self = 
                        getSelf("sizeHint", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QSize'
    QSize cppResult =
        
               self->sizeHint();
        // return type: QSize
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RWebView.sizeHint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaWebView::sizeHint", context, engine);
            return result;
        }
         QScriptValue
        REcmaWebView::minimumSizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaWebView::minimumSizeHint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaWebView::minimumSizeHint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RWebView* self = 
                        getSelf("minimumSizeHint", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QSize'
    QSize cppResult =
        
               self->minimumSizeHint();
        // return type: QSize
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RWebView.minimumSizeHint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaWebView::minimumSizeHint", context, engine);
            return result;
        }
         QScriptValue
        REcmaWebView::installEventFilter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaWebView::installEventFilter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaWebView::installEventFilter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RWebView* self = 
                        getSelf("installEventFilter", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isQObject()
        ) /* type: QObject * */
    
    ){
    // prepare arguments:
    
            // argument isQObject
            QObject *
            a0 =
            qobject_cast<
            QObject *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->installEventFilter(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RWebView.installEventFilter().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaWebView::installEventFilter", context, engine);
            return result;
        }
         QScriptValue
        REcmaWebView::setAttribute
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaWebView::setAttribute", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaWebView::setAttribute";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RWebView* self = 
                        getSelf("setAttribute", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: Qt::WidgetAttribute */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    Qt::WidgetAttribute*
                    ap0 =
                    qscriptvalue_cast<
                    Qt::WidgetAttribute*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RWebView: Argument 0 is not of type Qt::WidgetAttribute*.",
                               context);                    
                    }
                    Qt::WidgetAttribute& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setAttribute(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: Qt::WidgetAttribute */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    Qt::WidgetAttribute*
                    ap0 =
                    qscriptvalue_cast<
                    Qt::WidgetAttribute*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RWebView: Argument 0 is not of type Qt::WidgetAttribute*.",
                               context);                    
                    }
                    Qt::WidgetAttribute& a0 = *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setAttribute(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RWebView.setAttribute().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaWebView::setAttribute", context, engine);
            return result;
        }
         QScriptValue REcmaWebView::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RWebView* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RWebView(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaWebView::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RWebView* self = getSelf("RWebView", context);
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
    RWebView* REcmaWebView::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RWebView* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RWebView >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RWebView.%1(): "
                        "This object is not a RWebView").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RWebView* REcmaWebView::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RWebView* selfBase = getSelf(fName, context);
                RWebView* self = dynamic_cast<RWebView*>(selfBase);
                //return REcmaHelper::scriptValueTo<RWebView >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RWebView.%1(): "
                    "This object is not a RWebView").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RWebView*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RWebView*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RWebView*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    