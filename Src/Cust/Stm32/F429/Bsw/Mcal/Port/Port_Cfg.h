/////////////////////////////////////////////////////// 
//  Copyright 2014 Stephan Hage.
//  Copyright 2014 Christopher Kormanyos.
//  Distributed under the Boost 
//  Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt 
//  or copy at http://www.boost.org/LICENSE_1_0.txt ) 
//

#ifndef _PORT_CFG_2014_10_14_H_
  #define _PORT_CFG_2014_10_14_H_

  // includes.
  #include <Bsw/Common/Std_Types.h>
  #include <Bsw/Mcal/Port/Port_ConfigTypes.h>

  // AUTOSAR-API.
  #define PORT_SET_PIN_DIRECTION_API      STD_ON
  #define PORT_SET_PIN_MODE_API           STD_OFF
  #define PORT_DEV_ERROR_DETECT           STD_OFF

  // specific.
  #define RDM_PORT_PIN PORT_PIN_B_2

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
    const tPortPin PortNumberOfPortPins[1U];
  }
  Port_ConfigType;

  EXTERN_C const Port_ConfigType Port_ConfigSet;

#endif // _PORT_CFG_2014_10_14_H_
