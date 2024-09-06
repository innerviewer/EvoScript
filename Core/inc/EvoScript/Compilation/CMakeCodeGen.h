//
// Created by innerviewer on 10/10/2023.
//

#ifndef SR_ENGINE_CMAKECODEGEN_H
#define SR_ENGINE_CMAKECODEGEN_H

#include <EvoScript/macros.h>

namespace EvoScript {
    class CMakeCodeGen {
    public:
        CMakeCodeGen() = delete;
        ~CMakeCodeGen() = delete;

    public:
        static bool Generate(const std::string& resourcesPath);

    private:
        static bool GenerateCMakeLists(const std::string& resourcesPath);
        static bool GenerateCxxFile(const std::string& resourcesPath);
    };
}

#endif //SR_ENGINE_CMAKECODEGEN_H
