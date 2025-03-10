/////////////////////////////////////////////////////// 
//  Copyright 2014 Stephan Hage.
//  Copyright 2014 Christopher Kormanyos.
//  Distributed under the Boost 
//  Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt 
//  or copy at http://www.boost.org/LICENSE_1_0.txt ) 
//

#ifndef _WDG_CFG_2014_10_14_H_
  #define _WDG_CFG_2014_10_14_H_

  // includes.
  #include <Bsw/Common/Std_Types.h>
  #include <Bsw/Mcal/Wdg/Wdg_ConfigTypes.h>

  // AUTOSAR-API.
  #define WDG_DEV_ERROR_DETECT_API        STD_OFF

  typedef struct struct_Wdg_ConfigType
  {
//   uint16 Wdg_Prescaler;
//   uint16 Wdg_ReloadValue;
    uint32 dummy;
  }
  Wdg_ConfigType;

  EXTERN_C const Wdg_ConfigType Wdg_ModeConfiguration;

#endif // _WDG_CFG_2014_10_14_H_
