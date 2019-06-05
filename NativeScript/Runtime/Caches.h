#ifndef Caches_h
#define Caches_h

#include <string>
#include <map>
#include "Common.h"
#include "Metadata.h"

namespace tns {

class Caches {
public:
    static std::map<std::string, const Meta*> Metadata;
    static std::map<const Meta*, v8::Persistent<v8::Value>*> Prototypes;
    static std::map<const std::string, v8::Persistent<v8::Object>*> ClassPrototypes;
    static std::map<const InterfaceMeta*, v8::Persistent<v8::FunctionTemplate>*> CtorFuncTemplates;
    static std::map<std::string, v8::Persistent<v8::Function>*> CtorFuncs;
    static std::map<id, v8::Persistent<v8::Object>*> Instances;
    static std::map<std::string, v8::Persistent<v8::Object>*> ProtocolInstances;
    static std::map<const StructMeta*, v8::Persistent<v8::Function>*> StructConstructorFunctions;
};

}

#endif /* Caches_h */