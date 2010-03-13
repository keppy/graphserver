#ifndef _GRAPHSERVER_H_
#define _GRAPHSERVER_H_

#define ABSOLUTE_MAX_WALK 1000000 //meters. 100 km. prevents overflow
#define MAX_LONG 2147483647
#define SECS_IN_DAY 86400
#define TRUE 1
#define FALSE 0

typedef int ServiceId;

// generally useful classes
typedef struct EdgePayload EdgePayload;
typedef struct State State;
typedef struct WalkOptions WalkOptions;
typedef struct Vertex Vertex;
typedef struct Edge Edge;
typedef struct ListNode ListNode;
typedef struct Graph Graph;

// classes that support edgetypes
typedef struct ServicePeriod ServicePeriod;
typedef struct ServiceCalendar ServiceCalendar;
typedef struct Timezone Timezone;
typedef struct TimezonePeriod TimezonePeriod;

// edgetypes
typedef struct Link Link;
typedef struct Street Street;
typedef struct Egress Egress;
typedef struct Wait Wait;
typedef struct ElapseTime ElapseTime;
typedef struct Headway Headway;
typedef struct TripBoard TripBoard;
typedef struct HeadwayBoard HeadwayBoard;
typedef struct HeadwayAlight HeadwayAlight;
typedef struct Crossing Crossing;
typedef struct Alight Alight;

typedef enum {    
  PL_STREET,
  PL_TRIPHOPSCHED_DEPRIC,
  PL_TRIPHOP_DEPRIC,
  PL_LINK,
  PL_EXTERNVALUE,
  PL_NONE, // 5
  PL_WAIT,
  PL_HEADWAY,
  PL_TRIPBOARD,
  PL_CROSSING,
  PL_ALIGHT, // 10
  PL_HEADWAYBOARD,
  PL_EGRESS,
  PL_HEADWAYALIGHT,
  PL_ELAPSE_TIME
} edgepayload_t;

#include "state.h"
#include "walkoptions.h"
#include "elapsehelpers.h"

#include "edgetypes/link.h"
#include "edgetypes/street.h"
#include "edgetypes/egress.h"
#include "edgetypes/wait.h"
#include "edgetypes/elapsetime.h"
#include "edgetypes/headway.h"
#include "edgetypes/tripboard.h"
#include "edgetypes/headwayboard.h"
#include "edgetypes/headwayalight.h"
#include "edgetypes/crossing.h"
#include "edgetypes/alight.h"
#include "edgetypes/custompayload.h"
#include "edgepayload.h"
#include "list.h"
#include "servicecalendar.h"
#include "timezone.h"

// things that everyone needs
#include <stdlib.h>
#include <string.h>

#endif