#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// RouletteController
struct RouletteController_t4161150416;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_RouletteController4161150416.h"
#include "AssemblyU2DCSharp_RouletteController4161150416MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RouletteController::.ctor()
extern "C"  void RouletteController__ctor_m1415343307 (RouletteController_t4161150416 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RouletteController::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const uint32_t RouletteController_Update_m2652831650_MetadataUsageId;
extern "C"  void RouletteController_Update_m2652831650 (RouletteController_t4161150416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (RouletteController_Update_m2652831650_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2031691843(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		__this->set_rotSpeed_2((10.0f));
	}

IL_0016:
	{
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_2 = __this->get_rotSpeed_2();
		NullCheck(L_1);
		Transform_Rotate_m3498734243(L_1, (0.0f), (0.0f), L_2, /*hidden argument*/NULL);
		float L_3 = __this->get_rotSpeed_2();
		__this->set_rotSpeed_2(((float)((float)L_3*(float)(0.98f))));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
