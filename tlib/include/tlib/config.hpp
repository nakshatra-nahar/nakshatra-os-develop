//=======================================================================
// Copyright Baptiste Wicht 2013-2018.
// Distributed under the terms of the MIT License.
// (See accompanying file LICENSE or copy at
//  http://www.opensource.org/licenses/MIT)
//=======================================================================

#ifndef TLIB_CONFIG_HPP
#define TLIB_CONFIG_HPP

namespace tlib {

constexpr bool is_nakshatra_program(){
#ifdef nakshatra_PROGRAM
    return true;
#else
    return false;
#endif
}

constexpr bool is_nakshatra_lib(){
#ifdef nakshatra_TLIB
    return true;
#else
    return false;
#endif
}

} // end of namespace tlib

#define ASSERT_ONLY_nakshatra_PROGRAM static_assert(tlib::is_nakshatra_program() || tlib::is_nakshatra_lib(), __FILE__ " can only be used in nakshatra programs");

// Conditional namespace

#ifdef nakshatra_TLIB
#define nakshatra_NAMESPACE_NAME(LIB_NS,nakshatra_NS) LIB_NS
#elif defined(nakshatra_PROGRAM)
#define nakshatra_NAMESPACE_NAME(LIB_NS,nakshatra_NS) LIB_NS
#else
#define nakshatra_NAMESPACE_NAME(LIB_NS,nakshatra_NS) nakshatra_NS
#endif

#define nakshatra_NAMESPACE(LIB_NS,nakshatra_NS) namespace nakshatra_NAMESPACE_NAME(LIB_NS, nakshatra_NS)

// Namespaces in kernel

#ifdef nakshatra_TLIB
#define KERNEL_NAMESPACE_BEGIN(nakshatra_NS)
#define KERNEL_NAMESPACE_END
#elif defined(nakshatra_PROGRAM)
#define KERNEL_NAMESPACE_BEGIN(nakshatra_NS)
#define KERNEL_NAMESPACE_END
#else
#define KERNEL_NAMESPACE_BEGIN(nakshatra_NS) namespace nakshatra_NS {
#define KERNEL_NAMESPACE_END }
#endif

// Conditional prefixing

#ifdef nakshatra_TLIB
#define nakshatra_PREFIX(prefix) prefix
#elif defined(nakshatra_PROGRAM)
#define nakshatra_PREFIX(prefix) prefix
#else
#define nakshatra_PREFIX(prefix)
#endif

#endif
