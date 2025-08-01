# Install script for directory: /Users/haroldhernandez/keyball39/zmk-config-Keyball39/zephyr/drivers

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
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/disk/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/interrupt_controller/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/misc/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/pcie/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/usb/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/usb_c/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/adc/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/clock_control/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/display/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/entropy/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/flash/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/gpio/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/hwinfo/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/i2c/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/input/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/kscan/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/pinctrl/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/sensor/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/serial/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/spi/cmake_install.cmake")
  include("/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/timer/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/haroldhernandez/keyball39/zmk-config-Keyball39/build/right/zephyr/drivers/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
