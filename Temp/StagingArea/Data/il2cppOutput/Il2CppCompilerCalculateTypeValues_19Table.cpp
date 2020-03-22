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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// LTDescr
struct LTDescr_t2043587347;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// LTRect[]
struct LTRectU5BU5D_t2099225848;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Rect[]
struct RectU5BU5D_t2936723554;
// LTRect
struct LTRect_t2883103509;
// UnityEngine.Transform
struct Transform_t3600365921;
// LTBezierPath
struct LTBezierPath_t1817657086;
// LTSpline
struct LTSpline_t2431306763;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// System.Action`1<System.Single>
struct Action_1_t1569734369;
// System.Action`2<System.Single,System.Single>
struct Action_2_t3683108670;
// System.Action`2<System.Single,System.Object>
struct Action_2_t1070980764;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t2328697118;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t3894781059;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t1344820274;
// System.Action`1<UnityEngine.Color>
struct Action_1_t2728153919;
// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_t567985926;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.Texture
struct Texture_t3661962703;
// LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t2201194898;
// LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_t2422926000;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.RawImage
struct RawImage_t3182918964;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2581906349;
// LTDescrOptional
struct LTDescrOptional_t4257087022;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// FabricSelectorUI
struct FabricSelectorUI_t941339816;
// UnityEngine.Material
struct Material_t340375123;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef LTSPLINE_T2431306763_H
#define LTSPLINE_T2431306763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTSpline
struct  LTSpline_t2431306763  : public RuntimeObject
{
public:
	// System.Single LTSpline::distance
	float ___distance_2;
	// System.Boolean LTSpline::constantSpeed
	bool ___constantSpeed_3;
	// UnityEngine.Vector3[] LTSpline::pts
	Vector3U5BU5D_t1718750761* ___pts_4;
	// UnityEngine.Vector3[] LTSpline::ptsAdj
	Vector3U5BU5D_t1718750761* ___ptsAdj_5;
	// System.Int32 LTSpline::ptsAdjLength
	int32_t ___ptsAdjLength_6;
	// System.Boolean LTSpline::orientToPath
	bool ___orientToPath_7;
	// System.Boolean LTSpline::orientToPath2d
	bool ___orientToPath2d_8;
	// System.Int32 LTSpline::numSections
	int32_t ___numSections_9;
	// System.Int32 LTSpline::currPt
	int32_t ___currPt_10;

public:
	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_constantSpeed_3() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___constantSpeed_3)); }
	inline bool get_constantSpeed_3() const { return ___constantSpeed_3; }
	inline bool* get_address_of_constantSpeed_3() { return &___constantSpeed_3; }
	inline void set_constantSpeed_3(bool value)
	{
		___constantSpeed_3 = value;
	}

	inline static int32_t get_offset_of_pts_4() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___pts_4)); }
	inline Vector3U5BU5D_t1718750761* get_pts_4() const { return ___pts_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of_pts_4() { return &___pts_4; }
	inline void set_pts_4(Vector3U5BU5D_t1718750761* value)
	{
		___pts_4 = value;
		Il2CppCodeGenWriteBarrier((&___pts_4), value);
	}

	inline static int32_t get_offset_of_ptsAdj_5() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___ptsAdj_5)); }
	inline Vector3U5BU5D_t1718750761* get_ptsAdj_5() const { return ___ptsAdj_5; }
	inline Vector3U5BU5D_t1718750761** get_address_of_ptsAdj_5() { return &___ptsAdj_5; }
	inline void set_ptsAdj_5(Vector3U5BU5D_t1718750761* value)
	{
		___ptsAdj_5 = value;
		Il2CppCodeGenWriteBarrier((&___ptsAdj_5), value);
	}

	inline static int32_t get_offset_of_ptsAdjLength_6() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___ptsAdjLength_6)); }
	inline int32_t get_ptsAdjLength_6() const { return ___ptsAdjLength_6; }
	inline int32_t* get_address_of_ptsAdjLength_6() { return &___ptsAdjLength_6; }
	inline void set_ptsAdjLength_6(int32_t value)
	{
		___ptsAdjLength_6 = value;
	}

	inline static int32_t get_offset_of_orientToPath_7() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___orientToPath_7)); }
	inline bool get_orientToPath_7() const { return ___orientToPath_7; }
	inline bool* get_address_of_orientToPath_7() { return &___orientToPath_7; }
	inline void set_orientToPath_7(bool value)
	{
		___orientToPath_7 = value;
	}

	inline static int32_t get_offset_of_orientToPath2d_8() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___orientToPath2d_8)); }
	inline bool get_orientToPath2d_8() const { return ___orientToPath2d_8; }
	inline bool* get_address_of_orientToPath2d_8() { return &___orientToPath2d_8; }
	inline void set_orientToPath2d_8(bool value)
	{
		___orientToPath2d_8 = value;
	}

	inline static int32_t get_offset_of_numSections_9() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___numSections_9)); }
	inline int32_t get_numSections_9() const { return ___numSections_9; }
	inline int32_t* get_address_of_numSections_9() { return &___numSections_9; }
	inline void set_numSections_9(int32_t value)
	{
		___numSections_9 = value;
	}

	inline static int32_t get_offset_of_currPt_10() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763, ___currPt_10)); }
	inline int32_t get_currPt_10() const { return ___currPt_10; }
	inline int32_t* get_address_of_currPt_10() { return &___currPt_10; }
	inline void set_currPt_10(int32_t value)
	{
		___currPt_10 = value;
	}
};

struct LTSpline_t2431306763_StaticFields
{
public:
	// System.Int32 LTSpline::DISTANCE_COUNT
	int32_t ___DISTANCE_COUNT_0;
	// System.Int32 LTSpline::SUBLINE_COUNT
	int32_t ___SUBLINE_COUNT_1;

public:
	inline static int32_t get_offset_of_DISTANCE_COUNT_0() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763_StaticFields, ___DISTANCE_COUNT_0)); }
	inline int32_t get_DISTANCE_COUNT_0() const { return ___DISTANCE_COUNT_0; }
	inline int32_t* get_address_of_DISTANCE_COUNT_0() { return &___DISTANCE_COUNT_0; }
	inline void set_DISTANCE_COUNT_0(int32_t value)
	{
		___DISTANCE_COUNT_0 = value;
	}

	inline static int32_t get_offset_of_SUBLINE_COUNT_1() { return static_cast<int32_t>(offsetof(LTSpline_t2431306763_StaticFields, ___SUBLINE_COUNT_1)); }
	inline int32_t get_SUBLINE_COUNT_1() const { return ___SUBLINE_COUNT_1; }
	inline int32_t* get_address_of_SUBLINE_COUNT_1() { return &___SUBLINE_COUNT_1; }
	inline void set_SUBLINE_COUNT_1(int32_t value)
	{
		___SUBLINE_COUNT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTSPLINE_T2431306763_H
#ifndef LEANTWEENEXT_T1747014764_H
#define LEANTWEENEXT_T1747014764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanTweenExt
struct  LeanTweenExt_t1747014764  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEANTWEENEXT_T1747014764_H
#ifndef LEANDUMMY_T4064590342_H
#define LEANDUMMY_T4064590342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DentedPixel.LeanDummy
struct  LeanDummy_t4064590342  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEANDUMMY_T4064590342_H
#ifndef LTSEQ_T1322000318_H
#define LTSEQ_T1322000318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTSeq
struct  LTSeq_t1322000318  : public RuntimeObject
{
public:
	// LTSeq LTSeq::previous
	LTSeq_t1322000318 * ___previous_0;
	// LTSeq LTSeq::current
	LTSeq_t1322000318 * ___current_1;
	// LTDescr LTSeq::tween
	LTDescr_t2043587347 * ___tween_2;
	// System.Single LTSeq::totalDelay
	float ___totalDelay_3;
	// System.Single LTSeq::timeScale
	float ___timeScale_4;
	// System.Int32 LTSeq::debugIter
	int32_t ___debugIter_5;
	// System.UInt32 LTSeq::counter
	uint32_t ___counter_6;
	// System.Boolean LTSeq::toggle
	bool ___toggle_7;
	// System.UInt32 LTSeq::_id
	uint32_t ____id_8;

public:
	inline static int32_t get_offset_of_previous_0() { return static_cast<int32_t>(offsetof(LTSeq_t1322000318, ___previous_0)); }
	inline LTSeq_t1322000318 * get_previous_0() const { return ___previous_0; }
	inline LTSeq_t1322000318 ** get_address_of_previous_0() { return &___previous_0; }
	inline void set_previous_0(LTSeq_t1322000318 * value)
	{
		___previous_0 = value;
		Il2CppCodeGenWriteBarrier((&___previous_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(LTSeq_t1322000318, ___current_1)); }
	inline LTSeq_t1322000318 * get_current_1() const { return ___current_1; }
	inline LTSeq_t1322000318 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(LTSeq_t1322000318 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_tween_2() { return static_cast<int32_t>(offsetof(LTSeq_t1322000318, ___tween_2)); }
	inline LTDescr_t2043587347 * get_tween_2() const { return ___tween_2; }
	inline LTDescr_t2043587347 ** get_address_of_tween_2() { return &___tween_2; }
	inline void set_tween_2(LTDescr_t2043587347 * value)
	{
		___tween_2 = value;
		Il2CppCodeGenWriteBarrier((&___tween_2), value);
	}

	inline static int32_t get_offset_of_totalDelay_3() { return static_cast<int32_t>(offsetof(LTSeq_t1322000318, ___totalDelay_3)); }
	inline float get_totalDelay_3() const { return ___totalDelay_3; }
	inline float* get_address_of_totalDelay_3() { return &___totalDelay_3; }
	inline void set_totalDelay_3(float value)
	{
		___totalDelay_3 = value;
	}

	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(LTSeq_t1322000318, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_debugIter_5() { return static_cast<int32_t>(offsetof(LTSeq_t1322000318, ___debugIter_5)); }
	inline int32_t get_debugIter_5() const { return ___debugIter_5; }
	inline int32_t* get_address_of_debugIter_5() { return &___debugIter_5; }
	inline void set_debugIter_5(int32_t value)
	{
		___debugIter_5 = value;
	}

	inline static int32_t get_offset_of_counter_6() { return static_cast<int32_t>(offsetof(LTSeq_t1322000318, ___counter_6)); }
	inline uint32_t get_counter_6() const { return ___counter_6; }
	inline uint32_t* get_address_of_counter_6() { return &___counter_6; }
	inline void set_counter_6(uint32_t value)
	{
		___counter_6 = value;
	}

	inline static int32_t get_offset_of_toggle_7() { return static_cast<int32_t>(offsetof(LTSeq_t1322000318, ___toggle_7)); }
	inline bool get_toggle_7() const { return ___toggle_7; }
	inline bool* get_address_of_toggle_7() { return &___toggle_7; }
	inline void set_toggle_7(bool value)
	{
		___toggle_7 = value;
	}

	inline static int32_t get_offset_of__id_8() { return static_cast<int32_t>(offsetof(LTSeq_t1322000318, ____id_8)); }
	inline uint32_t get__id_8() const { return ____id_8; }
	inline uint32_t* get_address_of__id_8() { return &____id_8; }
	inline void set__id_8(uint32_t value)
	{
		____id_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTSEQ_T1322000318_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef LTEVENT_T176071434_H
#define LTEVENT_T176071434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTEvent
struct  LTEvent_t176071434  : public RuntimeObject
{
public:
	// System.Int32 LTEvent::id
	int32_t ___id_0;
	// System.Object LTEvent::data
	RuntimeObject * ___data_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(LTEvent_t176071434, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(LTEvent_t176071434, ___data_1)); }
	inline RuntimeObject * get_data_1() const { return ___data_1; }
	inline RuntimeObject ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(RuntimeObject * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTEVENT_T176071434_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef LEANTWEENTYPE_T619681147_H
#define LEANTWEENTYPE_T619681147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanTweenType
struct  LeanTweenType_t619681147 
{
public:
	// System.Int32 LeanTweenType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LeanTweenType_t619681147, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEANTWEENTYPE_T619681147_H
#ifndef TWEENACTION_T2598825989_H
#define TWEENACTION_T2598825989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenAction
struct  TweenAction_t2598825989 
{
public:
	// System.Int32 TweenAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TweenAction_t2598825989, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWEENACTION_T2598825989_H
#ifndef ELEMENT_TYPE_T1916908453_H
#define ELEMENT_TYPE_T1916908453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTGUI/Element_Type
struct  Element_Type_t1916908453 
{
public:
	// System.Int32 LTGUI/Element_Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Element_Type_t1916908453, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENT_TYPE_T1916908453_H
#ifndef LTGUI_T651246514_H
#define LTGUI_T651246514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTGUI
struct  LTGUI_t651246514  : public RuntimeObject
{
public:

public:
};

struct LTGUI_t651246514_StaticFields
{
public:
	// System.Int32 LTGUI::RECT_LEVELS
	int32_t ___RECT_LEVELS_0;
	// System.Int32 LTGUI::RECTS_PER_LEVEL
	int32_t ___RECTS_PER_LEVEL_1;
	// System.Int32 LTGUI::BUTTONS_MAX
	int32_t ___BUTTONS_MAX_2;
	// LTRect[] LTGUI::levels
	LTRectU5BU5D_t2099225848* ___levels_3;
	// System.Int32[] LTGUI::levelDepths
	Int32U5BU5D_t385246372* ___levelDepths_4;
	// UnityEngine.Rect[] LTGUI::buttons
	RectU5BU5D_t2936723554* ___buttons_5;
	// System.Int32[] LTGUI::buttonLevels
	Int32U5BU5D_t385246372* ___buttonLevels_6;
	// System.Int32[] LTGUI::buttonLastFrame
	Int32U5BU5D_t385246372* ___buttonLastFrame_7;
	// LTRect LTGUI::r
	LTRect_t2883103509 * ___r_8;
	// UnityEngine.Color LTGUI::color
	Color_t2555686324  ___color_9;
	// System.Boolean LTGUI::isGUIEnabled
	bool ___isGUIEnabled_10;
	// System.Int32 LTGUI::global_counter
	int32_t ___global_counter_11;

public:
	inline static int32_t get_offset_of_RECT_LEVELS_0() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___RECT_LEVELS_0)); }
	inline int32_t get_RECT_LEVELS_0() const { return ___RECT_LEVELS_0; }
	inline int32_t* get_address_of_RECT_LEVELS_0() { return &___RECT_LEVELS_0; }
	inline void set_RECT_LEVELS_0(int32_t value)
	{
		___RECT_LEVELS_0 = value;
	}

	inline static int32_t get_offset_of_RECTS_PER_LEVEL_1() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___RECTS_PER_LEVEL_1)); }
	inline int32_t get_RECTS_PER_LEVEL_1() const { return ___RECTS_PER_LEVEL_1; }
	inline int32_t* get_address_of_RECTS_PER_LEVEL_1() { return &___RECTS_PER_LEVEL_1; }
	inline void set_RECTS_PER_LEVEL_1(int32_t value)
	{
		___RECTS_PER_LEVEL_1 = value;
	}

	inline static int32_t get_offset_of_BUTTONS_MAX_2() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___BUTTONS_MAX_2)); }
	inline int32_t get_BUTTONS_MAX_2() const { return ___BUTTONS_MAX_2; }
	inline int32_t* get_address_of_BUTTONS_MAX_2() { return &___BUTTONS_MAX_2; }
	inline void set_BUTTONS_MAX_2(int32_t value)
	{
		___BUTTONS_MAX_2 = value;
	}

	inline static int32_t get_offset_of_levels_3() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___levels_3)); }
	inline LTRectU5BU5D_t2099225848* get_levels_3() const { return ___levels_3; }
	inline LTRectU5BU5D_t2099225848** get_address_of_levels_3() { return &___levels_3; }
	inline void set_levels_3(LTRectU5BU5D_t2099225848* value)
	{
		___levels_3 = value;
		Il2CppCodeGenWriteBarrier((&___levels_3), value);
	}

	inline static int32_t get_offset_of_levelDepths_4() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___levelDepths_4)); }
	inline Int32U5BU5D_t385246372* get_levelDepths_4() const { return ___levelDepths_4; }
	inline Int32U5BU5D_t385246372** get_address_of_levelDepths_4() { return &___levelDepths_4; }
	inline void set_levelDepths_4(Int32U5BU5D_t385246372* value)
	{
		___levelDepths_4 = value;
		Il2CppCodeGenWriteBarrier((&___levelDepths_4), value);
	}

	inline static int32_t get_offset_of_buttons_5() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___buttons_5)); }
	inline RectU5BU5D_t2936723554* get_buttons_5() const { return ___buttons_5; }
	inline RectU5BU5D_t2936723554** get_address_of_buttons_5() { return &___buttons_5; }
	inline void set_buttons_5(RectU5BU5D_t2936723554* value)
	{
		___buttons_5 = value;
		Il2CppCodeGenWriteBarrier((&___buttons_5), value);
	}

	inline static int32_t get_offset_of_buttonLevels_6() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___buttonLevels_6)); }
	inline Int32U5BU5D_t385246372* get_buttonLevels_6() const { return ___buttonLevels_6; }
	inline Int32U5BU5D_t385246372** get_address_of_buttonLevels_6() { return &___buttonLevels_6; }
	inline void set_buttonLevels_6(Int32U5BU5D_t385246372* value)
	{
		___buttonLevels_6 = value;
		Il2CppCodeGenWriteBarrier((&___buttonLevels_6), value);
	}

	inline static int32_t get_offset_of_buttonLastFrame_7() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___buttonLastFrame_7)); }
	inline Int32U5BU5D_t385246372* get_buttonLastFrame_7() const { return ___buttonLastFrame_7; }
	inline Int32U5BU5D_t385246372** get_address_of_buttonLastFrame_7() { return &___buttonLastFrame_7; }
	inline void set_buttonLastFrame_7(Int32U5BU5D_t385246372* value)
	{
		___buttonLastFrame_7 = value;
		Il2CppCodeGenWriteBarrier((&___buttonLastFrame_7), value);
	}

	inline static int32_t get_offset_of_r_8() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___r_8)); }
	inline LTRect_t2883103509 * get_r_8() const { return ___r_8; }
	inline LTRect_t2883103509 ** get_address_of_r_8() { return &___r_8; }
	inline void set_r_8(LTRect_t2883103509 * value)
	{
		___r_8 = value;
		Il2CppCodeGenWriteBarrier((&___r_8), value);
	}

	inline static int32_t get_offset_of_color_9() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___color_9)); }
	inline Color_t2555686324  get_color_9() const { return ___color_9; }
	inline Color_t2555686324 * get_address_of_color_9() { return &___color_9; }
	inline void set_color_9(Color_t2555686324  value)
	{
		___color_9 = value;
	}

	inline static int32_t get_offset_of_isGUIEnabled_10() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___isGUIEnabled_10)); }
	inline bool get_isGUIEnabled_10() const { return ___isGUIEnabled_10; }
	inline bool* get_address_of_isGUIEnabled_10() { return &___isGUIEnabled_10; }
	inline void set_isGUIEnabled_10(bool value)
	{
		___isGUIEnabled_10 = value;
	}

	inline static int32_t get_offset_of_global_counter_11() { return static_cast<int32_t>(offsetof(LTGUI_t651246514_StaticFields, ___global_counter_11)); }
	inline int32_t get_global_counter_11() const { return ___global_counter_11; }
	inline int32_t* get_address_of_global_counter_11() { return &___global_counter_11; }
	inline void set_global_counter_11(int32_t value)
	{
		___global_counter_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTGUI_T651246514_H
#ifndef LTDESCROPTIONAL_T4257087022_H
#define LTDESCROPTIONAL_T4257087022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTDescrOptional
struct  LTDescrOptional_t4257087022  : public RuntimeObject
{
public:
	// UnityEngine.Transform LTDescrOptional::<toTrans>k__BackingField
	Transform_t3600365921 * ___U3CtoTransU3Ek__BackingField_0;
	// UnityEngine.Vector3 LTDescrOptional::<point>k__BackingField
	Vector3_t3722313464  ___U3CpointU3Ek__BackingField_1;
	// UnityEngine.Vector3 LTDescrOptional::<axis>k__BackingField
	Vector3_t3722313464  ___U3CaxisU3Ek__BackingField_2;
	// System.Single LTDescrOptional::<lastVal>k__BackingField
	float ___U3ClastValU3Ek__BackingField_3;
	// UnityEngine.Quaternion LTDescrOptional::<origRotation>k__BackingField
	Quaternion_t2301928331  ___U3CorigRotationU3Ek__BackingField_4;
	// LTBezierPath LTDescrOptional::<path>k__BackingField
	LTBezierPath_t1817657086 * ___U3CpathU3Ek__BackingField_5;
	// LTSpline LTDescrOptional::<spline>k__BackingField
	LTSpline_t2431306763 * ___U3CsplineU3Ek__BackingField_6;
	// UnityEngine.AnimationCurve LTDescrOptional::animationCurve
	AnimationCurve_t3046754366 * ___animationCurve_7;
	// System.Int32 LTDescrOptional::initFrameCount
	int32_t ___initFrameCount_8;
	// UnityEngine.Color LTDescrOptional::color
	Color_t2555686324  ___color_9;
	// LTRect LTDescrOptional::<ltRect>k__BackingField
	LTRect_t2883103509 * ___U3CltRectU3Ek__BackingField_10;
	// System.Action`1<System.Single> LTDescrOptional::<onUpdateFloat>k__BackingField
	Action_1_t1569734369 * ___U3ConUpdateFloatU3Ek__BackingField_11;
	// System.Action`2<System.Single,System.Single> LTDescrOptional::<onUpdateFloatRatio>k__BackingField
	Action_2_t3683108670 * ___U3ConUpdateFloatRatioU3Ek__BackingField_12;
	// System.Action`2<System.Single,System.Object> LTDescrOptional::<onUpdateFloatObject>k__BackingField
	Action_2_t1070980764 * ___U3ConUpdateFloatObjectU3Ek__BackingField_13;
	// System.Action`1<UnityEngine.Vector2> LTDescrOptional::<onUpdateVector2>k__BackingField
	Action_1_t2328697118 * ___U3ConUpdateVector2U3Ek__BackingField_14;
	// System.Action`1<UnityEngine.Vector3> LTDescrOptional::<onUpdateVector3>k__BackingField
	Action_1_t3894781059 * ___U3ConUpdateVector3U3Ek__BackingField_15;
	// System.Action`2<UnityEngine.Vector3,System.Object> LTDescrOptional::<onUpdateVector3Object>k__BackingField
	Action_2_t1344820274 * ___U3ConUpdateVector3ObjectU3Ek__BackingField_16;
	// System.Action`1<UnityEngine.Color> LTDescrOptional::<onUpdateColor>k__BackingField
	Action_1_t2728153919 * ___U3ConUpdateColorU3Ek__BackingField_17;
	// System.Action`2<UnityEngine.Color,System.Object> LTDescrOptional::<onUpdateColorObject>k__BackingField
	Action_2_t567985926 * ___U3ConUpdateColorObjectU3Ek__BackingField_18;
	// System.Action LTDescrOptional::<onComplete>k__BackingField
	Action_t1264377477 * ___U3ConCompleteU3Ek__BackingField_19;
	// System.Action`1<System.Object> LTDescrOptional::<onCompleteObject>k__BackingField
	Action_1_t3252573759 * ___U3ConCompleteObjectU3Ek__BackingField_20;
	// System.Object LTDescrOptional::<onCompleteParam>k__BackingField
	RuntimeObject * ___U3ConCompleteParamU3Ek__BackingField_21;
	// System.Object LTDescrOptional::<onUpdateParam>k__BackingField
	RuntimeObject * ___U3ConUpdateParamU3Ek__BackingField_22;
	// System.Action LTDescrOptional::<onStart>k__BackingField
	Action_t1264377477 * ___U3ConStartU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CtoTransU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3CtoTransU3Ek__BackingField_0)); }
	inline Transform_t3600365921 * get_U3CtoTransU3Ek__BackingField_0() const { return ___U3CtoTransU3Ek__BackingField_0; }
	inline Transform_t3600365921 ** get_address_of_U3CtoTransU3Ek__BackingField_0() { return &___U3CtoTransU3Ek__BackingField_0; }
	inline void set_U3CtoTransU3Ek__BackingField_0(Transform_t3600365921 * value)
	{
		___U3CtoTransU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtoTransU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CpointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3CpointU3Ek__BackingField_1)); }
	inline Vector3_t3722313464  get_U3CpointU3Ek__BackingField_1() const { return ___U3CpointU3Ek__BackingField_1; }
	inline Vector3_t3722313464 * get_address_of_U3CpointU3Ek__BackingField_1() { return &___U3CpointU3Ek__BackingField_1; }
	inline void set_U3CpointU3Ek__BackingField_1(Vector3_t3722313464  value)
	{
		___U3CpointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CaxisU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3CaxisU3Ek__BackingField_2)); }
	inline Vector3_t3722313464  get_U3CaxisU3Ek__BackingField_2() const { return ___U3CaxisU3Ek__BackingField_2; }
	inline Vector3_t3722313464 * get_address_of_U3CaxisU3Ek__BackingField_2() { return &___U3CaxisU3Ek__BackingField_2; }
	inline void set_U3CaxisU3Ek__BackingField_2(Vector3_t3722313464  value)
	{
		___U3CaxisU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3ClastValU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ClastValU3Ek__BackingField_3)); }
	inline float get_U3ClastValU3Ek__BackingField_3() const { return ___U3ClastValU3Ek__BackingField_3; }
	inline float* get_address_of_U3ClastValU3Ek__BackingField_3() { return &___U3ClastValU3Ek__BackingField_3; }
	inline void set_U3ClastValU3Ek__BackingField_3(float value)
	{
		___U3ClastValU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CorigRotationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3CorigRotationU3Ek__BackingField_4)); }
	inline Quaternion_t2301928331  get_U3CorigRotationU3Ek__BackingField_4() const { return ___U3CorigRotationU3Ek__BackingField_4; }
	inline Quaternion_t2301928331 * get_address_of_U3CorigRotationU3Ek__BackingField_4() { return &___U3CorigRotationU3Ek__BackingField_4; }
	inline void set_U3CorigRotationU3Ek__BackingField_4(Quaternion_t2301928331  value)
	{
		___U3CorigRotationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpathU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3CpathU3Ek__BackingField_5)); }
	inline LTBezierPath_t1817657086 * get_U3CpathU3Ek__BackingField_5() const { return ___U3CpathU3Ek__BackingField_5; }
	inline LTBezierPath_t1817657086 ** get_address_of_U3CpathU3Ek__BackingField_5() { return &___U3CpathU3Ek__BackingField_5; }
	inline void set_U3CpathU3Ek__BackingField_5(LTBezierPath_t1817657086 * value)
	{
		___U3CpathU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpathU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CsplineU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3CsplineU3Ek__BackingField_6)); }
	inline LTSpline_t2431306763 * get_U3CsplineU3Ek__BackingField_6() const { return ___U3CsplineU3Ek__BackingField_6; }
	inline LTSpline_t2431306763 ** get_address_of_U3CsplineU3Ek__BackingField_6() { return &___U3CsplineU3Ek__BackingField_6; }
	inline void set_U3CsplineU3Ek__BackingField_6(LTSpline_t2431306763 * value)
	{
		___U3CsplineU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsplineU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_animationCurve_7() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___animationCurve_7)); }
	inline AnimationCurve_t3046754366 * get_animationCurve_7() const { return ___animationCurve_7; }
	inline AnimationCurve_t3046754366 ** get_address_of_animationCurve_7() { return &___animationCurve_7; }
	inline void set_animationCurve_7(AnimationCurve_t3046754366 * value)
	{
		___animationCurve_7 = value;
		Il2CppCodeGenWriteBarrier((&___animationCurve_7), value);
	}

	inline static int32_t get_offset_of_initFrameCount_8() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___initFrameCount_8)); }
	inline int32_t get_initFrameCount_8() const { return ___initFrameCount_8; }
	inline int32_t* get_address_of_initFrameCount_8() { return &___initFrameCount_8; }
	inline void set_initFrameCount_8(int32_t value)
	{
		___initFrameCount_8 = value;
	}

	inline static int32_t get_offset_of_color_9() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___color_9)); }
	inline Color_t2555686324  get_color_9() const { return ___color_9; }
	inline Color_t2555686324 * get_address_of_color_9() { return &___color_9; }
	inline void set_color_9(Color_t2555686324  value)
	{
		___color_9 = value;
	}

	inline static int32_t get_offset_of_U3CltRectU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3CltRectU3Ek__BackingField_10)); }
	inline LTRect_t2883103509 * get_U3CltRectU3Ek__BackingField_10() const { return ___U3CltRectU3Ek__BackingField_10; }
	inline LTRect_t2883103509 ** get_address_of_U3CltRectU3Ek__BackingField_10() { return &___U3CltRectU3Ek__BackingField_10; }
	inline void set_U3CltRectU3Ek__BackingField_10(LTRect_t2883103509 * value)
	{
		___U3CltRectU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CltRectU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConUpdateFloatU3Ek__BackingField_11)); }
	inline Action_1_t1569734369 * get_U3ConUpdateFloatU3Ek__BackingField_11() const { return ___U3ConUpdateFloatU3Ek__BackingField_11; }
	inline Action_1_t1569734369 ** get_address_of_U3ConUpdateFloatU3Ek__BackingField_11() { return &___U3ConUpdateFloatU3Ek__BackingField_11; }
	inline void set_U3ConUpdateFloatU3Ek__BackingField_11(Action_1_t1569734369 * value)
	{
		___U3ConUpdateFloatU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConUpdateFloatU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatRatioU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConUpdateFloatRatioU3Ek__BackingField_12)); }
	inline Action_2_t3683108670 * get_U3ConUpdateFloatRatioU3Ek__BackingField_12() const { return ___U3ConUpdateFloatRatioU3Ek__BackingField_12; }
	inline Action_2_t3683108670 ** get_address_of_U3ConUpdateFloatRatioU3Ek__BackingField_12() { return &___U3ConUpdateFloatRatioU3Ek__BackingField_12; }
	inline void set_U3ConUpdateFloatRatioU3Ek__BackingField_12(Action_2_t3683108670 * value)
	{
		___U3ConUpdateFloatRatioU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConUpdateFloatRatioU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatObjectU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConUpdateFloatObjectU3Ek__BackingField_13)); }
	inline Action_2_t1070980764 * get_U3ConUpdateFloatObjectU3Ek__BackingField_13() const { return ___U3ConUpdateFloatObjectU3Ek__BackingField_13; }
	inline Action_2_t1070980764 ** get_address_of_U3ConUpdateFloatObjectU3Ek__BackingField_13() { return &___U3ConUpdateFloatObjectU3Ek__BackingField_13; }
	inline void set_U3ConUpdateFloatObjectU3Ek__BackingField_13(Action_2_t1070980764 * value)
	{
		___U3ConUpdateFloatObjectU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConUpdateFloatObjectU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector2U3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConUpdateVector2U3Ek__BackingField_14)); }
	inline Action_1_t2328697118 * get_U3ConUpdateVector2U3Ek__BackingField_14() const { return ___U3ConUpdateVector2U3Ek__BackingField_14; }
	inline Action_1_t2328697118 ** get_address_of_U3ConUpdateVector2U3Ek__BackingField_14() { return &___U3ConUpdateVector2U3Ek__BackingField_14; }
	inline void set_U3ConUpdateVector2U3Ek__BackingField_14(Action_1_t2328697118 * value)
	{
		___U3ConUpdateVector2U3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConUpdateVector2U3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector3U3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConUpdateVector3U3Ek__BackingField_15)); }
	inline Action_1_t3894781059 * get_U3ConUpdateVector3U3Ek__BackingField_15() const { return ___U3ConUpdateVector3U3Ek__BackingField_15; }
	inline Action_1_t3894781059 ** get_address_of_U3ConUpdateVector3U3Ek__BackingField_15() { return &___U3ConUpdateVector3U3Ek__BackingField_15; }
	inline void set_U3ConUpdateVector3U3Ek__BackingField_15(Action_1_t3894781059 * value)
	{
		___U3ConUpdateVector3U3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConUpdateVector3U3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector3ObjectU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConUpdateVector3ObjectU3Ek__BackingField_16)); }
	inline Action_2_t1344820274 * get_U3ConUpdateVector3ObjectU3Ek__BackingField_16() const { return ___U3ConUpdateVector3ObjectU3Ek__BackingField_16; }
	inline Action_2_t1344820274 ** get_address_of_U3ConUpdateVector3ObjectU3Ek__BackingField_16() { return &___U3ConUpdateVector3ObjectU3Ek__BackingField_16; }
	inline void set_U3ConUpdateVector3ObjectU3Ek__BackingField_16(Action_2_t1344820274 * value)
	{
		___U3ConUpdateVector3ObjectU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConUpdateVector3ObjectU3Ek__BackingField_16), value);
	}

	inline static int32_t get_offset_of_U3ConUpdateColorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConUpdateColorU3Ek__BackingField_17)); }
	inline Action_1_t2728153919 * get_U3ConUpdateColorU3Ek__BackingField_17() const { return ___U3ConUpdateColorU3Ek__BackingField_17; }
	inline Action_1_t2728153919 ** get_address_of_U3ConUpdateColorU3Ek__BackingField_17() { return &___U3ConUpdateColorU3Ek__BackingField_17; }
	inline void set_U3ConUpdateColorU3Ek__BackingField_17(Action_1_t2728153919 * value)
	{
		___U3ConUpdateColorU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConUpdateColorU3Ek__BackingField_17), value);
	}

	inline static int32_t get_offset_of_U3ConUpdateColorObjectU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConUpdateColorObjectU3Ek__BackingField_18)); }
	inline Action_2_t567985926 * get_U3ConUpdateColorObjectU3Ek__BackingField_18() const { return ___U3ConUpdateColorObjectU3Ek__BackingField_18; }
	inline Action_2_t567985926 ** get_address_of_U3ConUpdateColorObjectU3Ek__BackingField_18() { return &___U3ConUpdateColorObjectU3Ek__BackingField_18; }
	inline void set_U3ConUpdateColorObjectU3Ek__BackingField_18(Action_2_t567985926 * value)
	{
		___U3ConUpdateColorObjectU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConUpdateColorObjectU3Ek__BackingField_18), value);
	}

	inline static int32_t get_offset_of_U3ConCompleteU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConCompleteU3Ek__BackingField_19)); }
	inline Action_t1264377477 * get_U3ConCompleteU3Ek__BackingField_19() const { return ___U3ConCompleteU3Ek__BackingField_19; }
	inline Action_t1264377477 ** get_address_of_U3ConCompleteU3Ek__BackingField_19() { return &___U3ConCompleteU3Ek__BackingField_19; }
	inline void set_U3ConCompleteU3Ek__BackingField_19(Action_t1264377477 * value)
	{
		___U3ConCompleteU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConCompleteU3Ek__BackingField_19), value);
	}

	inline static int32_t get_offset_of_U3ConCompleteObjectU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConCompleteObjectU3Ek__BackingField_20)); }
	inline Action_1_t3252573759 * get_U3ConCompleteObjectU3Ek__BackingField_20() const { return ___U3ConCompleteObjectU3Ek__BackingField_20; }
	inline Action_1_t3252573759 ** get_address_of_U3ConCompleteObjectU3Ek__BackingField_20() { return &___U3ConCompleteObjectU3Ek__BackingField_20; }
	inline void set_U3ConCompleteObjectU3Ek__BackingField_20(Action_1_t3252573759 * value)
	{
		___U3ConCompleteObjectU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConCompleteObjectU3Ek__BackingField_20), value);
	}

	inline static int32_t get_offset_of_U3ConCompleteParamU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConCompleteParamU3Ek__BackingField_21)); }
	inline RuntimeObject * get_U3ConCompleteParamU3Ek__BackingField_21() const { return ___U3ConCompleteParamU3Ek__BackingField_21; }
	inline RuntimeObject ** get_address_of_U3ConCompleteParamU3Ek__BackingField_21() { return &___U3ConCompleteParamU3Ek__BackingField_21; }
	inline void set_U3ConCompleteParamU3Ek__BackingField_21(RuntimeObject * value)
	{
		___U3ConCompleteParamU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConCompleteParamU3Ek__BackingField_21), value);
	}

	inline static int32_t get_offset_of_U3ConUpdateParamU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConUpdateParamU3Ek__BackingField_22)); }
	inline RuntimeObject * get_U3ConUpdateParamU3Ek__BackingField_22() const { return ___U3ConUpdateParamU3Ek__BackingField_22; }
	inline RuntimeObject ** get_address_of_U3ConUpdateParamU3Ek__BackingField_22() { return &___U3ConUpdateParamU3Ek__BackingField_22; }
	inline void set_U3ConUpdateParamU3Ek__BackingField_22(RuntimeObject * value)
	{
		___U3ConUpdateParamU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConUpdateParamU3Ek__BackingField_22), value);
	}

	inline static int32_t get_offset_of_U3ConStartU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(LTDescrOptional_t4257087022, ___U3ConStartU3Ek__BackingField_23)); }
	inline Action_t1264377477 * get_U3ConStartU3Ek__BackingField_23() const { return ___U3ConStartU3Ek__BackingField_23; }
	inline Action_t1264377477 ** get_address_of_U3ConStartU3Ek__BackingField_23() { return &___U3ConStartU3Ek__BackingField_23; }
	inline void set_U3ConStartU3Ek__BackingField_23(Action_t1264377477 * value)
	{
		___U3ConStartU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3ConStartU3Ek__BackingField_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTDESCROPTIONAL_T4257087022_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef LTRECT_T2883103509_H
#define LTRECT_T2883103509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTRect
struct  LTRect_t2883103509  : public RuntimeObject
{
public:
	// UnityEngine.Rect LTRect::_rect
	Rect_t2360479859  ____rect_0;
	// System.Single LTRect::alpha
	float ___alpha_1;
	// System.Single LTRect::rotation
	float ___rotation_2;
	// UnityEngine.Vector2 LTRect::pivot
	Vector2_t2156229523  ___pivot_3;
	// UnityEngine.Vector2 LTRect::margin
	Vector2_t2156229523  ___margin_4;
	// UnityEngine.Rect LTRect::relativeRect
	Rect_t2360479859  ___relativeRect_5;
	// System.Boolean LTRect::rotateEnabled
	bool ___rotateEnabled_6;
	// System.Boolean LTRect::rotateFinished
	bool ___rotateFinished_7;
	// System.Boolean LTRect::alphaEnabled
	bool ___alphaEnabled_8;
	// System.String LTRect::labelStr
	String_t* ___labelStr_9;
	// LTGUI/Element_Type LTRect::type
	int32_t ___type_10;
	// UnityEngine.GUIStyle LTRect::style
	GUIStyle_t3956901511 * ___style_11;
	// System.Boolean LTRect::useColor
	bool ___useColor_12;
	// UnityEngine.Color LTRect::color
	Color_t2555686324  ___color_13;
	// System.Boolean LTRect::fontScaleToFit
	bool ___fontScaleToFit_14;
	// System.Boolean LTRect::useSimpleScale
	bool ___useSimpleScale_15;
	// System.Boolean LTRect::sizeByHeight
	bool ___sizeByHeight_16;
	// UnityEngine.Texture LTRect::texture
	Texture_t3661962703 * ___texture_17;
	// System.Int32 LTRect::_id
	int32_t ____id_18;
	// System.Int32 LTRect::counter
	int32_t ___counter_19;

public:
	inline static int32_t get_offset_of__rect_0() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ____rect_0)); }
	inline Rect_t2360479859  get__rect_0() const { return ____rect_0; }
	inline Rect_t2360479859 * get_address_of__rect_0() { return &____rect_0; }
	inline void set__rect_0(Rect_t2360479859  value)
	{
		____rect_0 = value;
	}

	inline static int32_t get_offset_of_alpha_1() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___alpha_1)); }
	inline float get_alpha_1() const { return ___alpha_1; }
	inline float* get_address_of_alpha_1() { return &___alpha_1; }
	inline void set_alpha_1(float value)
	{
		___alpha_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_pivot_3() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___pivot_3)); }
	inline Vector2_t2156229523  get_pivot_3() const { return ___pivot_3; }
	inline Vector2_t2156229523 * get_address_of_pivot_3() { return &___pivot_3; }
	inline void set_pivot_3(Vector2_t2156229523  value)
	{
		___pivot_3 = value;
	}

	inline static int32_t get_offset_of_margin_4() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___margin_4)); }
	inline Vector2_t2156229523  get_margin_4() const { return ___margin_4; }
	inline Vector2_t2156229523 * get_address_of_margin_4() { return &___margin_4; }
	inline void set_margin_4(Vector2_t2156229523  value)
	{
		___margin_4 = value;
	}

	inline static int32_t get_offset_of_relativeRect_5() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___relativeRect_5)); }
	inline Rect_t2360479859  get_relativeRect_5() const { return ___relativeRect_5; }
	inline Rect_t2360479859 * get_address_of_relativeRect_5() { return &___relativeRect_5; }
	inline void set_relativeRect_5(Rect_t2360479859  value)
	{
		___relativeRect_5 = value;
	}

	inline static int32_t get_offset_of_rotateEnabled_6() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___rotateEnabled_6)); }
	inline bool get_rotateEnabled_6() const { return ___rotateEnabled_6; }
	inline bool* get_address_of_rotateEnabled_6() { return &___rotateEnabled_6; }
	inline void set_rotateEnabled_6(bool value)
	{
		___rotateEnabled_6 = value;
	}

	inline static int32_t get_offset_of_rotateFinished_7() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___rotateFinished_7)); }
	inline bool get_rotateFinished_7() const { return ___rotateFinished_7; }
	inline bool* get_address_of_rotateFinished_7() { return &___rotateFinished_7; }
	inline void set_rotateFinished_7(bool value)
	{
		___rotateFinished_7 = value;
	}

	inline static int32_t get_offset_of_alphaEnabled_8() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___alphaEnabled_8)); }
	inline bool get_alphaEnabled_8() const { return ___alphaEnabled_8; }
	inline bool* get_address_of_alphaEnabled_8() { return &___alphaEnabled_8; }
	inline void set_alphaEnabled_8(bool value)
	{
		___alphaEnabled_8 = value;
	}

	inline static int32_t get_offset_of_labelStr_9() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___labelStr_9)); }
	inline String_t* get_labelStr_9() const { return ___labelStr_9; }
	inline String_t** get_address_of_labelStr_9() { return &___labelStr_9; }
	inline void set_labelStr_9(String_t* value)
	{
		___labelStr_9 = value;
		Il2CppCodeGenWriteBarrier((&___labelStr_9), value);
	}

	inline static int32_t get_offset_of_type_10() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___type_10)); }
	inline int32_t get_type_10() const { return ___type_10; }
	inline int32_t* get_address_of_type_10() { return &___type_10; }
	inline void set_type_10(int32_t value)
	{
		___type_10 = value;
	}

	inline static int32_t get_offset_of_style_11() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___style_11)); }
	inline GUIStyle_t3956901511 * get_style_11() const { return ___style_11; }
	inline GUIStyle_t3956901511 ** get_address_of_style_11() { return &___style_11; }
	inline void set_style_11(GUIStyle_t3956901511 * value)
	{
		___style_11 = value;
		Il2CppCodeGenWriteBarrier((&___style_11), value);
	}

	inline static int32_t get_offset_of_useColor_12() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___useColor_12)); }
	inline bool get_useColor_12() const { return ___useColor_12; }
	inline bool* get_address_of_useColor_12() { return &___useColor_12; }
	inline void set_useColor_12(bool value)
	{
		___useColor_12 = value;
	}

	inline static int32_t get_offset_of_color_13() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___color_13)); }
	inline Color_t2555686324  get_color_13() const { return ___color_13; }
	inline Color_t2555686324 * get_address_of_color_13() { return &___color_13; }
	inline void set_color_13(Color_t2555686324  value)
	{
		___color_13 = value;
	}

	inline static int32_t get_offset_of_fontScaleToFit_14() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___fontScaleToFit_14)); }
	inline bool get_fontScaleToFit_14() const { return ___fontScaleToFit_14; }
	inline bool* get_address_of_fontScaleToFit_14() { return &___fontScaleToFit_14; }
	inline void set_fontScaleToFit_14(bool value)
	{
		___fontScaleToFit_14 = value;
	}

	inline static int32_t get_offset_of_useSimpleScale_15() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___useSimpleScale_15)); }
	inline bool get_useSimpleScale_15() const { return ___useSimpleScale_15; }
	inline bool* get_address_of_useSimpleScale_15() { return &___useSimpleScale_15; }
	inline void set_useSimpleScale_15(bool value)
	{
		___useSimpleScale_15 = value;
	}

	inline static int32_t get_offset_of_sizeByHeight_16() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___sizeByHeight_16)); }
	inline bool get_sizeByHeight_16() const { return ___sizeByHeight_16; }
	inline bool* get_address_of_sizeByHeight_16() { return &___sizeByHeight_16; }
	inline void set_sizeByHeight_16(bool value)
	{
		___sizeByHeight_16 = value;
	}

	inline static int32_t get_offset_of_texture_17() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___texture_17)); }
	inline Texture_t3661962703 * get_texture_17() const { return ___texture_17; }
	inline Texture_t3661962703 ** get_address_of_texture_17() { return &___texture_17; }
	inline void set_texture_17(Texture_t3661962703 * value)
	{
		___texture_17 = value;
		Il2CppCodeGenWriteBarrier((&___texture_17), value);
	}

	inline static int32_t get_offset_of__id_18() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ____id_18)); }
	inline int32_t get__id_18() const { return ____id_18; }
	inline int32_t* get_address_of__id_18() { return &____id_18; }
	inline void set__id_18(int32_t value)
	{
		____id_18 = value;
	}

	inline static int32_t get_offset_of_counter_19() { return static_cast<int32_t>(offsetof(LTRect_t2883103509, ___counter_19)); }
	inline int32_t get_counter_19() const { return ___counter_19; }
	inline int32_t* get_address_of_counter_19() { return &___counter_19; }
	inline void set_counter_19(int32_t value)
	{
		___counter_19 = value;
	}
};

struct LTRect_t2883103509_StaticFields
{
public:
	// System.Boolean LTRect::colorTouched
	bool ___colorTouched_20;

public:
	inline static int32_t get_offset_of_colorTouched_20() { return static_cast<int32_t>(offsetof(LTRect_t2883103509_StaticFields, ___colorTouched_20)); }
	inline bool get_colorTouched_20() const { return ___colorTouched_20; }
	inline bool* get_address_of_colorTouched_20() { return &___colorTouched_20; }
	inline void set_colorTouched_20(bool value)
	{
		___colorTouched_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTRECT_T2883103509_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef LTDESCR_T2043587347_H
#define LTDESCR_T2043587347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTDescr
struct  LTDescr_t2043587347  : public RuntimeObject
{
public:
	// System.Boolean LTDescr::toggle
	bool ___toggle_0;
	// System.Boolean LTDescr::useEstimatedTime
	bool ___useEstimatedTime_1;
	// System.Boolean LTDescr::useFrames
	bool ___useFrames_2;
	// System.Boolean LTDescr::useManualTime
	bool ___useManualTime_3;
	// System.Boolean LTDescr::usesNormalDt
	bool ___usesNormalDt_4;
	// System.Boolean LTDescr::hasInitiliazed
	bool ___hasInitiliazed_5;
	// System.Boolean LTDescr::hasExtraOnCompletes
	bool ___hasExtraOnCompletes_6;
	// System.Boolean LTDescr::hasPhysics
	bool ___hasPhysics_7;
	// System.Boolean LTDescr::onCompleteOnRepeat
	bool ___onCompleteOnRepeat_8;
	// System.Boolean LTDescr::onCompleteOnStart
	bool ___onCompleteOnStart_9;
	// System.Boolean LTDescr::useRecursion
	bool ___useRecursion_10;
	// System.Single LTDescr::ratioPassed
	float ___ratioPassed_11;
	// System.Single LTDescr::passed
	float ___passed_12;
	// System.Single LTDescr::delay
	float ___delay_13;
	// System.Single LTDescr::time
	float ___time_14;
	// System.Single LTDescr::speed
	float ___speed_15;
	// System.Single LTDescr::lastVal
	float ___lastVal_16;
	// System.UInt32 LTDescr::_id
	uint32_t ____id_17;
	// System.Int32 LTDescr::loopCount
	int32_t ___loopCount_18;
	// System.UInt32 LTDescr::counter
	uint32_t ___counter_19;
	// System.Single LTDescr::direction
	float ___direction_20;
	// System.Single LTDescr::directionLast
	float ___directionLast_21;
	// System.Single LTDescr::overshoot
	float ___overshoot_22;
	// System.Single LTDescr::period
	float ___period_23;
	// System.Single LTDescr::scale
	float ___scale_24;
	// System.Boolean LTDescr::destroyOnComplete
	bool ___destroyOnComplete_25;
	// UnityEngine.Transform LTDescr::trans
	Transform_t3600365921 * ___trans_26;
	// UnityEngine.Vector3 LTDescr::fromInternal
	Vector3_t3722313464  ___fromInternal_27;
	// UnityEngine.Vector3 LTDescr::toInternal
	Vector3_t3722313464  ___toInternal_28;
	// UnityEngine.Vector3 LTDescr::diff
	Vector3_t3722313464  ___diff_29;
	// UnityEngine.Vector3 LTDescr::diffDiv2
	Vector3_t3722313464  ___diffDiv2_30;
	// TweenAction LTDescr::type
	int32_t ___type_31;
	// LeanTweenType LTDescr::easeType
	int32_t ___easeType_32;
	// LeanTweenType LTDescr::loopType
	int32_t ___loopType_33;
	// System.Boolean LTDescr::hasUpdateCallback
	bool ___hasUpdateCallback_34;
	// LTDescr/EaseTypeDelegate LTDescr::easeMethod
	EaseTypeDelegate_t2201194898 * ___easeMethod_35;
	// LTDescr/ActionMethodDelegate LTDescr::<easeInternal>k__BackingField
	ActionMethodDelegate_t2422926000 * ___U3CeaseInternalU3Ek__BackingField_36;
	// LTDescr/ActionMethodDelegate LTDescr::<initInternal>k__BackingField
	ActionMethodDelegate_t2422926000 * ___U3CinitInternalU3Ek__BackingField_37;
	// UnityEngine.SpriteRenderer LTDescr::spriteRen
	SpriteRenderer_t3235626157 * ___spriteRen_38;
	// UnityEngine.RectTransform LTDescr::rectTransform
	RectTransform_t3704657025 * ___rectTransform_39;
	// UnityEngine.UI.Text LTDescr::uiText
	Text_t1901882714 * ___uiText_40;
	// UnityEngine.UI.Image LTDescr::uiImage
	Image_t2670269651 * ___uiImage_41;
	// UnityEngine.UI.RawImage LTDescr::rawImage
	RawImage_t3182918964 * ___rawImage_42;
	// UnityEngine.Sprite[] LTDescr::sprites
	SpriteU5BU5D_t2581906349* ___sprites_43;
	// LTDescrOptional LTDescr::_optional
	LTDescrOptional_t4257087022 * ____optional_44;

public:
	inline static int32_t get_offset_of_toggle_0() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___toggle_0)); }
	inline bool get_toggle_0() const { return ___toggle_0; }
	inline bool* get_address_of_toggle_0() { return &___toggle_0; }
	inline void set_toggle_0(bool value)
	{
		___toggle_0 = value;
	}

	inline static int32_t get_offset_of_useEstimatedTime_1() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___useEstimatedTime_1)); }
	inline bool get_useEstimatedTime_1() const { return ___useEstimatedTime_1; }
	inline bool* get_address_of_useEstimatedTime_1() { return &___useEstimatedTime_1; }
	inline void set_useEstimatedTime_1(bool value)
	{
		___useEstimatedTime_1 = value;
	}

	inline static int32_t get_offset_of_useFrames_2() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___useFrames_2)); }
	inline bool get_useFrames_2() const { return ___useFrames_2; }
	inline bool* get_address_of_useFrames_2() { return &___useFrames_2; }
	inline void set_useFrames_2(bool value)
	{
		___useFrames_2 = value;
	}

	inline static int32_t get_offset_of_useManualTime_3() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___useManualTime_3)); }
	inline bool get_useManualTime_3() const { return ___useManualTime_3; }
	inline bool* get_address_of_useManualTime_3() { return &___useManualTime_3; }
	inline void set_useManualTime_3(bool value)
	{
		___useManualTime_3 = value;
	}

	inline static int32_t get_offset_of_usesNormalDt_4() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___usesNormalDt_4)); }
	inline bool get_usesNormalDt_4() const { return ___usesNormalDt_4; }
	inline bool* get_address_of_usesNormalDt_4() { return &___usesNormalDt_4; }
	inline void set_usesNormalDt_4(bool value)
	{
		___usesNormalDt_4 = value;
	}

	inline static int32_t get_offset_of_hasInitiliazed_5() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___hasInitiliazed_5)); }
	inline bool get_hasInitiliazed_5() const { return ___hasInitiliazed_5; }
	inline bool* get_address_of_hasInitiliazed_5() { return &___hasInitiliazed_5; }
	inline void set_hasInitiliazed_5(bool value)
	{
		___hasInitiliazed_5 = value;
	}

	inline static int32_t get_offset_of_hasExtraOnCompletes_6() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___hasExtraOnCompletes_6)); }
	inline bool get_hasExtraOnCompletes_6() const { return ___hasExtraOnCompletes_6; }
	inline bool* get_address_of_hasExtraOnCompletes_6() { return &___hasExtraOnCompletes_6; }
	inline void set_hasExtraOnCompletes_6(bool value)
	{
		___hasExtraOnCompletes_6 = value;
	}

	inline static int32_t get_offset_of_hasPhysics_7() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___hasPhysics_7)); }
	inline bool get_hasPhysics_7() const { return ___hasPhysics_7; }
	inline bool* get_address_of_hasPhysics_7() { return &___hasPhysics_7; }
	inline void set_hasPhysics_7(bool value)
	{
		___hasPhysics_7 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnRepeat_8() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onCompleteOnRepeat_8)); }
	inline bool get_onCompleteOnRepeat_8() const { return ___onCompleteOnRepeat_8; }
	inline bool* get_address_of_onCompleteOnRepeat_8() { return &___onCompleteOnRepeat_8; }
	inline void set_onCompleteOnRepeat_8(bool value)
	{
		___onCompleteOnRepeat_8 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnStart_9() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___onCompleteOnStart_9)); }
	inline bool get_onCompleteOnStart_9() const { return ___onCompleteOnStart_9; }
	inline bool* get_address_of_onCompleteOnStart_9() { return &___onCompleteOnStart_9; }
	inline void set_onCompleteOnStart_9(bool value)
	{
		___onCompleteOnStart_9 = value;
	}

	inline static int32_t get_offset_of_useRecursion_10() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___useRecursion_10)); }
	inline bool get_useRecursion_10() const { return ___useRecursion_10; }
	inline bool* get_address_of_useRecursion_10() { return &___useRecursion_10; }
	inline void set_useRecursion_10(bool value)
	{
		___useRecursion_10 = value;
	}

	inline static int32_t get_offset_of_ratioPassed_11() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___ratioPassed_11)); }
	inline float get_ratioPassed_11() const { return ___ratioPassed_11; }
	inline float* get_address_of_ratioPassed_11() { return &___ratioPassed_11; }
	inline void set_ratioPassed_11(float value)
	{
		___ratioPassed_11 = value;
	}

	inline static int32_t get_offset_of_passed_12() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___passed_12)); }
	inline float get_passed_12() const { return ___passed_12; }
	inline float* get_address_of_passed_12() { return &___passed_12; }
	inline void set_passed_12(float value)
	{
		___passed_12 = value;
	}

	inline static int32_t get_offset_of_delay_13() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___delay_13)); }
	inline float get_delay_13() const { return ___delay_13; }
	inline float* get_address_of_delay_13() { return &___delay_13; }
	inline void set_delay_13(float value)
	{
		___delay_13 = value;
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___time_14)); }
	inline float get_time_14() const { return ___time_14; }
	inline float* get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(float value)
	{
		___time_14 = value;
	}

	inline static int32_t get_offset_of_speed_15() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___speed_15)); }
	inline float get_speed_15() const { return ___speed_15; }
	inline float* get_address_of_speed_15() { return &___speed_15; }
	inline void set_speed_15(float value)
	{
		___speed_15 = value;
	}

	inline static int32_t get_offset_of_lastVal_16() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___lastVal_16)); }
	inline float get_lastVal_16() const { return ___lastVal_16; }
	inline float* get_address_of_lastVal_16() { return &___lastVal_16; }
	inline void set_lastVal_16(float value)
	{
		___lastVal_16 = value;
	}

	inline static int32_t get_offset_of__id_17() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ____id_17)); }
	inline uint32_t get__id_17() const { return ____id_17; }
	inline uint32_t* get_address_of__id_17() { return &____id_17; }
	inline void set__id_17(uint32_t value)
	{
		____id_17 = value;
	}

	inline static int32_t get_offset_of_loopCount_18() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___loopCount_18)); }
	inline int32_t get_loopCount_18() const { return ___loopCount_18; }
	inline int32_t* get_address_of_loopCount_18() { return &___loopCount_18; }
	inline void set_loopCount_18(int32_t value)
	{
		___loopCount_18 = value;
	}

	inline static int32_t get_offset_of_counter_19() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___counter_19)); }
	inline uint32_t get_counter_19() const { return ___counter_19; }
	inline uint32_t* get_address_of_counter_19() { return &___counter_19; }
	inline void set_counter_19(uint32_t value)
	{
		___counter_19 = value;
	}

	inline static int32_t get_offset_of_direction_20() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___direction_20)); }
	inline float get_direction_20() const { return ___direction_20; }
	inline float* get_address_of_direction_20() { return &___direction_20; }
	inline void set_direction_20(float value)
	{
		___direction_20 = value;
	}

	inline static int32_t get_offset_of_directionLast_21() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___directionLast_21)); }
	inline float get_directionLast_21() const { return ___directionLast_21; }
	inline float* get_address_of_directionLast_21() { return &___directionLast_21; }
	inline void set_directionLast_21(float value)
	{
		___directionLast_21 = value;
	}

	inline static int32_t get_offset_of_overshoot_22() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___overshoot_22)); }
	inline float get_overshoot_22() const { return ___overshoot_22; }
	inline float* get_address_of_overshoot_22() { return &___overshoot_22; }
	inline void set_overshoot_22(float value)
	{
		___overshoot_22 = value;
	}

	inline static int32_t get_offset_of_period_23() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___period_23)); }
	inline float get_period_23() const { return ___period_23; }
	inline float* get_address_of_period_23() { return &___period_23; }
	inline void set_period_23(float value)
	{
		___period_23 = value;
	}

	inline static int32_t get_offset_of_scale_24() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___scale_24)); }
	inline float get_scale_24() const { return ___scale_24; }
	inline float* get_address_of_scale_24() { return &___scale_24; }
	inline void set_scale_24(float value)
	{
		___scale_24 = value;
	}

	inline static int32_t get_offset_of_destroyOnComplete_25() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___destroyOnComplete_25)); }
	inline bool get_destroyOnComplete_25() const { return ___destroyOnComplete_25; }
	inline bool* get_address_of_destroyOnComplete_25() { return &___destroyOnComplete_25; }
	inline void set_destroyOnComplete_25(bool value)
	{
		___destroyOnComplete_25 = value;
	}

	inline static int32_t get_offset_of_trans_26() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___trans_26)); }
	inline Transform_t3600365921 * get_trans_26() const { return ___trans_26; }
	inline Transform_t3600365921 ** get_address_of_trans_26() { return &___trans_26; }
	inline void set_trans_26(Transform_t3600365921 * value)
	{
		___trans_26 = value;
		Il2CppCodeGenWriteBarrier((&___trans_26), value);
	}

	inline static int32_t get_offset_of_fromInternal_27() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___fromInternal_27)); }
	inline Vector3_t3722313464  get_fromInternal_27() const { return ___fromInternal_27; }
	inline Vector3_t3722313464 * get_address_of_fromInternal_27() { return &___fromInternal_27; }
	inline void set_fromInternal_27(Vector3_t3722313464  value)
	{
		___fromInternal_27 = value;
	}

	inline static int32_t get_offset_of_toInternal_28() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___toInternal_28)); }
	inline Vector3_t3722313464  get_toInternal_28() const { return ___toInternal_28; }
	inline Vector3_t3722313464 * get_address_of_toInternal_28() { return &___toInternal_28; }
	inline void set_toInternal_28(Vector3_t3722313464  value)
	{
		___toInternal_28 = value;
	}

	inline static int32_t get_offset_of_diff_29() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___diff_29)); }
	inline Vector3_t3722313464  get_diff_29() const { return ___diff_29; }
	inline Vector3_t3722313464 * get_address_of_diff_29() { return &___diff_29; }
	inline void set_diff_29(Vector3_t3722313464  value)
	{
		___diff_29 = value;
	}

	inline static int32_t get_offset_of_diffDiv2_30() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___diffDiv2_30)); }
	inline Vector3_t3722313464  get_diffDiv2_30() const { return ___diffDiv2_30; }
	inline Vector3_t3722313464 * get_address_of_diffDiv2_30() { return &___diffDiv2_30; }
	inline void set_diffDiv2_30(Vector3_t3722313464  value)
	{
		___diffDiv2_30 = value;
	}

	inline static int32_t get_offset_of_type_31() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___type_31)); }
	inline int32_t get_type_31() const { return ___type_31; }
	inline int32_t* get_address_of_type_31() { return &___type_31; }
	inline void set_type_31(int32_t value)
	{
		___type_31 = value;
	}

	inline static int32_t get_offset_of_easeType_32() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___easeType_32)); }
	inline int32_t get_easeType_32() const { return ___easeType_32; }
	inline int32_t* get_address_of_easeType_32() { return &___easeType_32; }
	inline void set_easeType_32(int32_t value)
	{
		___easeType_32 = value;
	}

	inline static int32_t get_offset_of_loopType_33() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___loopType_33)); }
	inline int32_t get_loopType_33() const { return ___loopType_33; }
	inline int32_t* get_address_of_loopType_33() { return &___loopType_33; }
	inline void set_loopType_33(int32_t value)
	{
		___loopType_33 = value;
	}

	inline static int32_t get_offset_of_hasUpdateCallback_34() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___hasUpdateCallback_34)); }
	inline bool get_hasUpdateCallback_34() const { return ___hasUpdateCallback_34; }
	inline bool* get_address_of_hasUpdateCallback_34() { return &___hasUpdateCallback_34; }
	inline void set_hasUpdateCallback_34(bool value)
	{
		___hasUpdateCallback_34 = value;
	}

	inline static int32_t get_offset_of_easeMethod_35() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___easeMethod_35)); }
	inline EaseTypeDelegate_t2201194898 * get_easeMethod_35() const { return ___easeMethod_35; }
	inline EaseTypeDelegate_t2201194898 ** get_address_of_easeMethod_35() { return &___easeMethod_35; }
	inline void set_easeMethod_35(EaseTypeDelegate_t2201194898 * value)
	{
		___easeMethod_35 = value;
		Il2CppCodeGenWriteBarrier((&___easeMethod_35), value);
	}

	inline static int32_t get_offset_of_U3CeaseInternalU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___U3CeaseInternalU3Ek__BackingField_36)); }
	inline ActionMethodDelegate_t2422926000 * get_U3CeaseInternalU3Ek__BackingField_36() const { return ___U3CeaseInternalU3Ek__BackingField_36; }
	inline ActionMethodDelegate_t2422926000 ** get_address_of_U3CeaseInternalU3Ek__BackingField_36() { return &___U3CeaseInternalU3Ek__BackingField_36; }
	inline void set_U3CeaseInternalU3Ek__BackingField_36(ActionMethodDelegate_t2422926000 * value)
	{
		___U3CeaseInternalU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CeaseInternalU3Ek__BackingField_36), value);
	}

	inline static int32_t get_offset_of_U3CinitInternalU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___U3CinitInternalU3Ek__BackingField_37)); }
	inline ActionMethodDelegate_t2422926000 * get_U3CinitInternalU3Ek__BackingField_37() const { return ___U3CinitInternalU3Ek__BackingField_37; }
	inline ActionMethodDelegate_t2422926000 ** get_address_of_U3CinitInternalU3Ek__BackingField_37() { return &___U3CinitInternalU3Ek__BackingField_37; }
	inline void set_U3CinitInternalU3Ek__BackingField_37(ActionMethodDelegate_t2422926000 * value)
	{
		___U3CinitInternalU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CinitInternalU3Ek__BackingField_37), value);
	}

	inline static int32_t get_offset_of_spriteRen_38() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___spriteRen_38)); }
	inline SpriteRenderer_t3235626157 * get_spriteRen_38() const { return ___spriteRen_38; }
	inline SpriteRenderer_t3235626157 ** get_address_of_spriteRen_38() { return &___spriteRen_38; }
	inline void set_spriteRen_38(SpriteRenderer_t3235626157 * value)
	{
		___spriteRen_38 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRen_38), value);
	}

	inline static int32_t get_offset_of_rectTransform_39() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___rectTransform_39)); }
	inline RectTransform_t3704657025 * get_rectTransform_39() const { return ___rectTransform_39; }
	inline RectTransform_t3704657025 ** get_address_of_rectTransform_39() { return &___rectTransform_39; }
	inline void set_rectTransform_39(RectTransform_t3704657025 * value)
	{
		___rectTransform_39 = value;
		Il2CppCodeGenWriteBarrier((&___rectTransform_39), value);
	}

	inline static int32_t get_offset_of_uiText_40() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___uiText_40)); }
	inline Text_t1901882714 * get_uiText_40() const { return ___uiText_40; }
	inline Text_t1901882714 ** get_address_of_uiText_40() { return &___uiText_40; }
	inline void set_uiText_40(Text_t1901882714 * value)
	{
		___uiText_40 = value;
		Il2CppCodeGenWriteBarrier((&___uiText_40), value);
	}

	inline static int32_t get_offset_of_uiImage_41() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___uiImage_41)); }
	inline Image_t2670269651 * get_uiImage_41() const { return ___uiImage_41; }
	inline Image_t2670269651 ** get_address_of_uiImage_41() { return &___uiImage_41; }
	inline void set_uiImage_41(Image_t2670269651 * value)
	{
		___uiImage_41 = value;
		Il2CppCodeGenWriteBarrier((&___uiImage_41), value);
	}

	inline static int32_t get_offset_of_rawImage_42() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___rawImage_42)); }
	inline RawImage_t3182918964 * get_rawImage_42() const { return ___rawImage_42; }
	inline RawImage_t3182918964 ** get_address_of_rawImage_42() { return &___rawImage_42; }
	inline void set_rawImage_42(RawImage_t3182918964 * value)
	{
		___rawImage_42 = value;
		Il2CppCodeGenWriteBarrier((&___rawImage_42), value);
	}

	inline static int32_t get_offset_of_sprites_43() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ___sprites_43)); }
	inline SpriteU5BU5D_t2581906349* get_sprites_43() const { return ___sprites_43; }
	inline SpriteU5BU5D_t2581906349** get_address_of_sprites_43() { return &___sprites_43; }
	inline void set_sprites_43(SpriteU5BU5D_t2581906349* value)
	{
		___sprites_43 = value;
		Il2CppCodeGenWriteBarrier((&___sprites_43), value);
	}

	inline static int32_t get_offset_of__optional_44() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347, ____optional_44)); }
	inline LTDescrOptional_t4257087022 * get__optional_44() const { return ____optional_44; }
	inline LTDescrOptional_t4257087022 ** get_address_of__optional_44() { return &____optional_44; }
	inline void set__optional_44(LTDescrOptional_t4257087022 * value)
	{
		____optional_44 = value;
		Il2CppCodeGenWriteBarrier((&____optional_44), value);
	}
};

struct LTDescr_t2043587347_StaticFields
{
public:
	// System.Single LTDescr::val
	float ___val_45;
	// System.Single LTDescr::dt
	float ___dt_46;
	// UnityEngine.Vector3 LTDescr::newVect
	Vector3_t3722313464  ___newVect_47;
	// LTDescr/ActionMethodDelegate LTDescr::<>f__am$cache0
	ActionMethodDelegate_t2422926000 * ___U3CU3Ef__amU24cache0_48;
	// LTDescr/ActionMethodDelegate LTDescr::<>f__am$cache1
	ActionMethodDelegate_t2422926000 * ___U3CU3Ef__amU24cache1_49;

public:
	inline static int32_t get_offset_of_val_45() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347_StaticFields, ___val_45)); }
	inline float get_val_45() const { return ___val_45; }
	inline float* get_address_of_val_45() { return &___val_45; }
	inline void set_val_45(float value)
	{
		___val_45 = value;
	}

	inline static int32_t get_offset_of_dt_46() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347_StaticFields, ___dt_46)); }
	inline float get_dt_46() const { return ___dt_46; }
	inline float* get_address_of_dt_46() { return &___dt_46; }
	inline void set_dt_46(float value)
	{
		___dt_46 = value;
	}

	inline static int32_t get_offset_of_newVect_47() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347_StaticFields, ___newVect_47)); }
	inline Vector3_t3722313464  get_newVect_47() const { return ___newVect_47; }
	inline Vector3_t3722313464 * get_address_of_newVect_47() { return &___newVect_47; }
	inline void set_newVect_47(Vector3_t3722313464  value)
	{
		___newVect_47 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_48() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347_StaticFields, ___U3CU3Ef__amU24cache0_48)); }
	inline ActionMethodDelegate_t2422926000 * get_U3CU3Ef__amU24cache0_48() const { return ___U3CU3Ef__amU24cache0_48; }
	inline ActionMethodDelegate_t2422926000 ** get_address_of_U3CU3Ef__amU24cache0_48() { return &___U3CU3Ef__amU24cache0_48; }
	inline void set_U3CU3Ef__amU24cache0_48(ActionMethodDelegate_t2422926000 * value)
	{
		___U3CU3Ef__amU24cache0_48 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_48), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_49() { return static_cast<int32_t>(offsetof(LTDescr_t2043587347_StaticFields, ___U3CU3Ef__amU24cache1_49)); }
	inline ActionMethodDelegate_t2422926000 * get_U3CU3Ef__amU24cache1_49() const { return ___U3CU3Ef__amU24cache1_49; }
	inline ActionMethodDelegate_t2422926000 ** get_address_of_U3CU3Ef__amU24cache1_49() { return &___U3CU3Ef__amU24cache1_49; }
	inline void set_U3CU3Ef__amU24cache1_49(ActionMethodDelegate_t2422926000 * value)
	{
		___U3CU3Ef__amU24cache1_49 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_49), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LTDESCR_T2043587347_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef ACTIONMETHODDELEGATE_T2422926000_H
#define ACTIONMETHODDELEGATE_T2422926000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTDescr/ActionMethodDelegate
struct  ActionMethodDelegate_t2422926000  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIONMETHODDELEGATE_T2422926000_H
#ifndef EASETYPEDELEGATE_T2201194898_H
#define EASETYPEDELEGATE_T2201194898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTDescr/EaseTypeDelegate
struct  EaseTypeDelegate_t2201194898  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASETYPEDELEGATE_T2201194898_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef FABRICSELECTOR_T950988050_H
#define FABRICSELECTOR_T950988050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FabricSelector
struct  FabricSelector_t950988050  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject FabricSelector::fabricSelectorUIObject
	GameObject_t1113636619 * ___fabricSelectorUIObject_2;
	// FabricSelectorUI FabricSelector::fabricSelectorUI
	FabricSelectorUI_t941339816 * ___fabricSelectorUI_3;
	// UnityEngine.Material FabricSelector::fabricMaterial
	Material_t340375123 * ___fabricMaterial_4;
	// UnityEngine.Material FabricSelector::pillowMaterial
	Material_t340375123 * ___pillowMaterial_5;

public:
	inline static int32_t get_offset_of_fabricSelectorUIObject_2() { return static_cast<int32_t>(offsetof(FabricSelector_t950988050, ___fabricSelectorUIObject_2)); }
	inline GameObject_t1113636619 * get_fabricSelectorUIObject_2() const { return ___fabricSelectorUIObject_2; }
	inline GameObject_t1113636619 ** get_address_of_fabricSelectorUIObject_2() { return &___fabricSelectorUIObject_2; }
	inline void set_fabricSelectorUIObject_2(GameObject_t1113636619 * value)
	{
		___fabricSelectorUIObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___fabricSelectorUIObject_2), value);
	}

	inline static int32_t get_offset_of_fabricSelectorUI_3() { return static_cast<int32_t>(offsetof(FabricSelector_t950988050, ___fabricSelectorUI_3)); }
	inline FabricSelectorUI_t941339816 * get_fabricSelectorUI_3() const { return ___fabricSelectorUI_3; }
	inline FabricSelectorUI_t941339816 ** get_address_of_fabricSelectorUI_3() { return &___fabricSelectorUI_3; }
	inline void set_fabricSelectorUI_3(FabricSelectorUI_t941339816 * value)
	{
		___fabricSelectorUI_3 = value;
		Il2CppCodeGenWriteBarrier((&___fabricSelectorUI_3), value);
	}

	inline static int32_t get_offset_of_fabricMaterial_4() { return static_cast<int32_t>(offsetof(FabricSelector_t950988050, ___fabricMaterial_4)); }
	inline Material_t340375123 * get_fabricMaterial_4() const { return ___fabricMaterial_4; }
	inline Material_t340375123 ** get_address_of_fabricMaterial_4() { return &___fabricMaterial_4; }
	inline void set_fabricMaterial_4(Material_t340375123 * value)
	{
		___fabricMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___fabricMaterial_4), value);
	}

	inline static int32_t get_offset_of_pillowMaterial_5() { return static_cast<int32_t>(offsetof(FabricSelector_t950988050, ___pillowMaterial_5)); }
	inline Material_t340375123 * get_pillowMaterial_5() const { return ___pillowMaterial_5; }
	inline Material_t340375123 ** get_address_of_pillowMaterial_5() { return &___pillowMaterial_5; }
	inline void set_pillowMaterial_5(Material_t340375123 * value)
	{
		___pillowMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___pillowMaterial_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FABRICSELECTOR_T950988050_H
#ifndef LEGSELECTOR_T2410335278_H
#define LEGSELECTOR_T2410335278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LegSelector
struct  LegSelector_t2410335278  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject LegSelector::legSelectorUI
	GameObject_t1113636619 * ___legSelectorUI_2;

public:
	inline static int32_t get_offset_of_legSelectorUI_2() { return static_cast<int32_t>(offsetof(LegSelector_t2410335278, ___legSelectorUI_2)); }
	inline GameObject_t1113636619 * get_legSelectorUI_2() const { return ___legSelectorUI_2; }
	inline GameObject_t1113636619 ** get_address_of_legSelectorUI_2() { return &___legSelectorUI_2; }
	inline void set_legSelectorUI_2(GameObject_t1113636619 * value)
	{
		___legSelectorUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___legSelectorUI_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEGSELECTOR_T2410335278_H
#ifndef LEGSTAINSELECTOR_T444452833_H
#define LEGSTAINSELECTOR_T444452833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LegStainSelector
struct  LegStainSelector_t444452833  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject LegStainSelector::legStainSelectorUI
	GameObject_t1113636619 * ___legStainSelectorUI_2;

public:
	inline static int32_t get_offset_of_legStainSelectorUI_2() { return static_cast<int32_t>(offsetof(LegStainSelector_t444452833, ___legStainSelectorUI_2)); }
	inline GameObject_t1113636619 * get_legStainSelectorUI_2() const { return ___legStainSelectorUI_2; }
	inline GameObject_t1113636619 ** get_address_of_legStainSelectorUI_2() { return &___legStainSelectorUI_2; }
	inline void set_legStainSelectorUI_2(GameObject_t1113636619 * value)
	{
		___legStainSelectorUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___legStainSelectorUI_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEGSTAINSELECTOR_T444452833_H
#ifndef ROTATESOFA_T3874822646_H
#define ROTATESOFA_T3874822646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateSofa
struct  RotateSofa_t3874822646  : public MonoBehaviour_t3962482529
{
public:
	// System.Single RotateSofa::speed
	float ___speed_2;
	// UnityEngine.Vector3 RotateSofa::sofaRotation
	Vector3_t3722313464  ___sofaRotation_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(RotateSofa_t3874822646, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_sofaRotation_3() { return static_cast<int32_t>(offsetof(RotateSofa_t3874822646, ___sofaRotation_3)); }
	inline Vector3_t3722313464  get_sofaRotation_3() const { return ___sofaRotation_3; }
	inline Vector3_t3722313464 * get_address_of_sofaRotation_3() { return &___sofaRotation_3; }
	inline void set_sofaRotation_3(Vector3_t3722313464  value)
	{
		___sofaRotation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATESOFA_T3874822646_H
#ifndef PILLOWFABRICSELECTOR_T715134680_H
#define PILLOWFABRICSELECTOR_T715134680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PillowFabricSelector
struct  PillowFabricSelector_t715134680  : public FabricSelector_t950988050
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PILLOWFABRICSELECTOR_T715134680_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (LTSpline_t2431306763), -1, sizeof(LTSpline_t2431306763_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1900[11] = 
{
	LTSpline_t2431306763_StaticFields::get_offset_of_DISTANCE_COUNT_0(),
	LTSpline_t2431306763_StaticFields::get_offset_of_SUBLINE_COUNT_1(),
	LTSpline_t2431306763::get_offset_of_distance_2(),
	LTSpline_t2431306763::get_offset_of_constantSpeed_3(),
	LTSpline_t2431306763::get_offset_of_pts_4(),
	LTSpline_t2431306763::get_offset_of_ptsAdj_5(),
	LTSpline_t2431306763::get_offset_of_ptsAdjLength_6(),
	LTSpline_t2431306763::get_offset_of_orientToPath_7(),
	LTSpline_t2431306763::get_offset_of_orientToPath2d_8(),
	LTSpline_t2431306763::get_offset_of_numSections_9(),
	LTSpline_t2431306763::get_offset_of_currPt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (LTRect_t2883103509), -1, sizeof(LTRect_t2883103509_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1901[21] = 
{
	LTRect_t2883103509::get_offset_of__rect_0(),
	LTRect_t2883103509::get_offset_of_alpha_1(),
	LTRect_t2883103509::get_offset_of_rotation_2(),
	LTRect_t2883103509::get_offset_of_pivot_3(),
	LTRect_t2883103509::get_offset_of_margin_4(),
	LTRect_t2883103509::get_offset_of_relativeRect_5(),
	LTRect_t2883103509::get_offset_of_rotateEnabled_6(),
	LTRect_t2883103509::get_offset_of_rotateFinished_7(),
	LTRect_t2883103509::get_offset_of_alphaEnabled_8(),
	LTRect_t2883103509::get_offset_of_labelStr_9(),
	LTRect_t2883103509::get_offset_of_type_10(),
	LTRect_t2883103509::get_offset_of_style_11(),
	LTRect_t2883103509::get_offset_of_useColor_12(),
	LTRect_t2883103509::get_offset_of_color_13(),
	LTRect_t2883103509::get_offset_of_fontScaleToFit_14(),
	LTRect_t2883103509::get_offset_of_useSimpleScale_15(),
	LTRect_t2883103509::get_offset_of_sizeByHeight_16(),
	LTRect_t2883103509::get_offset_of_texture_17(),
	LTRect_t2883103509::get_offset_of__id_18(),
	LTRect_t2883103509::get_offset_of_counter_19(),
	LTRect_t2883103509_StaticFields::get_offset_of_colorTouched_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (LTEvent_t176071434), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1902[2] = 
{
	LTEvent_t176071434::get_offset_of_id_0(),
	LTEvent_t176071434::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (LTGUI_t651246514), -1, sizeof(LTGUI_t651246514_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1903[12] = 
{
	LTGUI_t651246514_StaticFields::get_offset_of_RECT_LEVELS_0(),
	LTGUI_t651246514_StaticFields::get_offset_of_RECTS_PER_LEVEL_1(),
	LTGUI_t651246514_StaticFields::get_offset_of_BUTTONS_MAX_2(),
	LTGUI_t651246514_StaticFields::get_offset_of_levels_3(),
	LTGUI_t651246514_StaticFields::get_offset_of_levelDepths_4(),
	LTGUI_t651246514_StaticFields::get_offset_of_buttons_5(),
	LTGUI_t651246514_StaticFields::get_offset_of_buttonLevels_6(),
	LTGUI_t651246514_StaticFields::get_offset_of_buttonLastFrame_7(),
	LTGUI_t651246514_StaticFields::get_offset_of_r_8(),
	LTGUI_t651246514_StaticFields::get_offset_of_color_9(),
	LTGUI_t651246514_StaticFields::get_offset_of_isGUIEnabled_10(),
	LTGUI_t651246514_StaticFields::get_offset_of_global_counter_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (Element_Type_t1916908453)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1904[3] = 
{
	Element_Type_t1916908453::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (LeanDummy_t4064590342), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (LeanTweenExt_t1747014764), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (LTDescr_t2043587347), -1, sizeof(LTDescr_t2043587347_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1907[50] = 
{
	LTDescr_t2043587347::get_offset_of_toggle_0(),
	LTDescr_t2043587347::get_offset_of_useEstimatedTime_1(),
	LTDescr_t2043587347::get_offset_of_useFrames_2(),
	LTDescr_t2043587347::get_offset_of_useManualTime_3(),
	LTDescr_t2043587347::get_offset_of_usesNormalDt_4(),
	LTDescr_t2043587347::get_offset_of_hasInitiliazed_5(),
	LTDescr_t2043587347::get_offset_of_hasExtraOnCompletes_6(),
	LTDescr_t2043587347::get_offset_of_hasPhysics_7(),
	LTDescr_t2043587347::get_offset_of_onCompleteOnRepeat_8(),
	LTDescr_t2043587347::get_offset_of_onCompleteOnStart_9(),
	LTDescr_t2043587347::get_offset_of_useRecursion_10(),
	LTDescr_t2043587347::get_offset_of_ratioPassed_11(),
	LTDescr_t2043587347::get_offset_of_passed_12(),
	LTDescr_t2043587347::get_offset_of_delay_13(),
	LTDescr_t2043587347::get_offset_of_time_14(),
	LTDescr_t2043587347::get_offset_of_speed_15(),
	LTDescr_t2043587347::get_offset_of_lastVal_16(),
	LTDescr_t2043587347::get_offset_of__id_17(),
	LTDescr_t2043587347::get_offset_of_loopCount_18(),
	LTDescr_t2043587347::get_offset_of_counter_19(),
	LTDescr_t2043587347::get_offset_of_direction_20(),
	LTDescr_t2043587347::get_offset_of_directionLast_21(),
	LTDescr_t2043587347::get_offset_of_overshoot_22(),
	LTDescr_t2043587347::get_offset_of_period_23(),
	LTDescr_t2043587347::get_offset_of_scale_24(),
	LTDescr_t2043587347::get_offset_of_destroyOnComplete_25(),
	LTDescr_t2043587347::get_offset_of_trans_26(),
	LTDescr_t2043587347::get_offset_of_fromInternal_27(),
	LTDescr_t2043587347::get_offset_of_toInternal_28(),
	LTDescr_t2043587347::get_offset_of_diff_29(),
	LTDescr_t2043587347::get_offset_of_diffDiv2_30(),
	LTDescr_t2043587347::get_offset_of_type_31(),
	LTDescr_t2043587347::get_offset_of_easeType_32(),
	LTDescr_t2043587347::get_offset_of_loopType_33(),
	LTDescr_t2043587347::get_offset_of_hasUpdateCallback_34(),
	LTDescr_t2043587347::get_offset_of_easeMethod_35(),
	LTDescr_t2043587347::get_offset_of_U3CeaseInternalU3Ek__BackingField_36(),
	LTDescr_t2043587347::get_offset_of_U3CinitInternalU3Ek__BackingField_37(),
	LTDescr_t2043587347::get_offset_of_spriteRen_38(),
	LTDescr_t2043587347::get_offset_of_rectTransform_39(),
	LTDescr_t2043587347::get_offset_of_uiText_40(),
	LTDescr_t2043587347::get_offset_of_uiImage_41(),
	LTDescr_t2043587347::get_offset_of_rawImage_42(),
	LTDescr_t2043587347::get_offset_of_sprites_43(),
	LTDescr_t2043587347::get_offset_of__optional_44(),
	LTDescr_t2043587347_StaticFields::get_offset_of_val_45(),
	LTDescr_t2043587347_StaticFields::get_offset_of_dt_46(),
	LTDescr_t2043587347_StaticFields::get_offset_of_newVect_47(),
	LTDescr_t2043587347_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_48(),
	LTDescr_t2043587347_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_49(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (EaseTypeDelegate_t2201194898), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (ActionMethodDelegate_t2422926000), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (LTDescrOptional_t4257087022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[24] = 
{
	LTDescrOptional_t4257087022::get_offset_of_U3CtoTransU3Ek__BackingField_0(),
	LTDescrOptional_t4257087022::get_offset_of_U3CpointU3Ek__BackingField_1(),
	LTDescrOptional_t4257087022::get_offset_of_U3CaxisU3Ek__BackingField_2(),
	LTDescrOptional_t4257087022::get_offset_of_U3ClastValU3Ek__BackingField_3(),
	LTDescrOptional_t4257087022::get_offset_of_U3CorigRotationU3Ek__BackingField_4(),
	LTDescrOptional_t4257087022::get_offset_of_U3CpathU3Ek__BackingField_5(),
	LTDescrOptional_t4257087022::get_offset_of_U3CsplineU3Ek__BackingField_6(),
	LTDescrOptional_t4257087022::get_offset_of_animationCurve_7(),
	LTDescrOptional_t4257087022::get_offset_of_initFrameCount_8(),
	LTDescrOptional_t4257087022::get_offset_of_color_9(),
	LTDescrOptional_t4257087022::get_offset_of_U3CltRectU3Ek__BackingField_10(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConUpdateFloatU3Ek__BackingField_11(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConUpdateFloatRatioU3Ek__BackingField_12(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConUpdateFloatObjectU3Ek__BackingField_13(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConUpdateVector2U3Ek__BackingField_14(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConUpdateVector3U3Ek__BackingField_15(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConUpdateVector3ObjectU3Ek__BackingField_16(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConUpdateColorU3Ek__BackingField_17(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConUpdateColorObjectU3Ek__BackingField_18(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConCompleteU3Ek__BackingField_19(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConCompleteObjectU3Ek__BackingField_20(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConCompleteParamU3Ek__BackingField_21(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConUpdateParamU3Ek__BackingField_22(),
	LTDescrOptional_t4257087022::get_offset_of_U3ConStartU3Ek__BackingField_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (LTSeq_t1322000318), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[9] = 
{
	LTSeq_t1322000318::get_offset_of_previous_0(),
	LTSeq_t1322000318::get_offset_of_current_1(),
	LTSeq_t1322000318::get_offset_of_tween_2(),
	LTSeq_t1322000318::get_offset_of_totalDelay_3(),
	LTSeq_t1322000318::get_offset_of_timeScale_4(),
	LTSeq_t1322000318::get_offset_of_debugIter_5(),
	LTSeq_t1322000318::get_offset_of_counter_6(),
	LTSeq_t1322000318::get_offset_of_toggle_7(),
	LTSeq_t1322000318::get_offset_of__id_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (LegSelector_t2410335278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1912[1] = 
{
	LegSelector_t2410335278::get_offset_of_legSelectorUI_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (LegStainSelector_t444452833), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[1] = 
{
	LegStainSelector_t444452833::get_offset_of_legStainSelectorUI_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (PillowFabricSelector_t715134680), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (RotateSofa_t3874822646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1915[2] = 
{
	RotateSofa_t3874822646::get_offset_of_speed_2(),
	RotateSofa_t3874822646::get_offset_of_sofaRotation_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
