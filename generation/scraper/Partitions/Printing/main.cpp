#define SECURITY_WIN32 // For sspi.h

#include "intrinfix.h"

#include "windows.fixed.h"
#include <sdkddkver.h>

#define USERMODE_DRIVER
#include <winddi.h>
#undef USERMODE_DRIVER

#define CINTERFACE
#include <BiDiSpl.h> 
#include <filterpipeline.h>
#include <msxml6.h>
#undef CINTERFACE

#include <compstui.h>
#include <winspool.h>
#include <mxdc.h>
#include <winddiui.h>
#include <printoem.h>
#include <prcomoem.h>
#include <prdrvcom.h>
#include <PrinterExtension.h>
#include <prnasnot.h>
#include <prnasntp.h>
#include <prntfont.h>
#include <tcpxcv.h>
#include <usbprint.h>
#include <winppi.h>
#include <winsplp.h>
#include <xpsrassvc.h>