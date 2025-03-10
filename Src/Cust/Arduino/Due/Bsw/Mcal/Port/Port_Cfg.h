/////////////////////////////////////////////////////// 
//  Copyright 2015 Stephan Hage.
//  Distributed under the Boost 
//  Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt 
//  or copy at http://www.boost.org/LICENSE_1_0.txt ) 
//

#ifndef PORT_CFG_2015_01_30_H
  #define PORT_CFG_2015_01_30_H

  // includes.
  #include <Bsw/Common/Std_Types.h>
  #include <Bsw/Mcal/Port/Port_ConfigTypes.h>
  #include <Bsw/Mcal/Port/Port_Target.h>

  // AUTOSAR-API.
  #define PORT_SET_PIN_DIRECTION_API      STD_ON
  #define PORT_SET_PIN_MODE_API           STD_OFF
  #define PORT_DEV_ERROR_DETECT           STD_OFF

  // specific.

  // Container collecting the PortPins.
  typedef struct struct_PortPin
  {
    const Port_PinType PinID;
    const Port_PinMode Mode;
//    const Port_PinModeChangeable ModeChangeable;
    const Port_PinDirectionType PinDirection;
//    const Port_PinDirectionChangeable DirectionChangeable;
    const Port_PinLevelValue PinLevelValue;
  }
  tPortPin;

  // Number of configurated Pins.
  typedef struct struct_Port_ConfigType
  {
    const tPortPin PortNumberOfPortPins[2U];
  }
  Port_ConfigType;

  EXTERN_C const Port_ConfigType Port_ConfigSet;

#endif // PORT_CFG_2015_01_30_H
