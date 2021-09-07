# Generated by Boost 1.70.0

# address-model=64

if(CMAKE_SIZEOF_VOID_P EQUAL 4)
  _BOOST_SKIPPED("libboost_timer.so.1.70.0" "64 bit, need 32")
  return()
endif()

# layout=system

# toolset=gcc48

# link=shared

if(NOT "${Boost_USE_STATIC_LIBS}" STREQUAL "" AND Boost_USE_STATIC_LIBS)
  _BOOST_SKIPPED("libboost_timer.so.1.70.0" "shared, Boost_USE_STATIC_LIBS=${Boost_USE_STATIC_LIBS}")
  return()
endif()

if(NOT BUILD_SHARED_LIBS)
  _BOOST_SKIPPED("libboost_timer.so.1.70.0" "shared, BUILD_SHARED_LIBS not ON, set Boost_USE_STATIC_LIBS=OFF to override")
  return()
endif()

# runtime-link=shared

if(Boost_USE_STATIC_RUNTIME)
  _BOOST_SKIPPED("libboost_timer.so.1.70.0" "shared runtime, Boost_USE_STATIC_RUNTIME=${Boost_USE_STATIC_RUNTIME}")
  return()
endif()

# runtime-debugging=off

if(Boost_USE_DEBUG_RUNTIME)
  _BOOST_SKIPPED("libboost_timer.so.1.70.0" "release runtime, Boost_USE_DEBUG_RUNTIME=${Boost_USE_DEBUG_RUNTIME}")
  return()
endif()

# threading=multi

# variant=release

if(NOT "${Boost_USE_RELEASE_LIBS}" STREQUAL "" AND NOT Boost_USE_RELEASE_LIBS)
  _BOOST_SKIPPED("libboost_timer.so.1.70.0" "release, Boost_USE_RELEASE_LIBS=${Boost_USE_RELEASE_LIBS}")
  return()
endif()

message(STATUS "  libboost_timer.so.1.70.0")

# Target file name: libboost_timer.so.1.70.0
set_property(TARGET Boost::timer APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Boost::timer PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE CXX
  IMPORTED_LOCATION_RELEASE "${_BOOST_LIBDIR}/libboost_timer.so.1.70.0"
  )

set_target_properties(Boost::timer PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "BOOST_TIMER_DYN_LINK"
  )

list(APPEND _BOOST_TIMER_DEPS chrono headers)
