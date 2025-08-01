# Install script for directory: /Users/haroldhernandez/keyball39/zmk-config-Keyball39/zephyr/subsys

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Users/haroldhernandez/zephyr-sdk-0.16.3/arm-zephyr-eabi/bin/arm-zephyr-eabi-objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/canbus/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/debug/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/fb/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/fs/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/ipc/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/logging/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/mem_mgmt/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/mgmt/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/modbus/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/pm/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/portability/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/random/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/rtio/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/sd/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/stats/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/storage/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/task_wdt/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/testsuite/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/tracing/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/usb/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/bluetooth/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/net/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/settings/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/left/zephyr/subsys/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
