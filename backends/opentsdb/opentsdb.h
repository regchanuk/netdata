// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef NETDATA_BACKEND_OPENTSDB_H
#define NETDATA_BACKEND_OPENTSDB_H

#include "backends/backends.h"

extern int format_dimension_collected_opentsdb_telnet(
          BUFFER *b                 // the buffer to write data to
        , const char *prefix        // the prefix to use
        , RRDHOST *host             // the host this chart comes from
        , const char *hostname      // the hostname (to override host->hostname)
        , RRDSET *st                // the chart
        , RRDDIM *rd                // the dimension
        , usec_t after_usec              // the start timestamp
        , usec_t before_usec             // the end timestamp
        , BACKEND_OPTIONS backend_options // BACKEND_SOURCE_* bitmap
);

extern int format_dimension_stored_opentsdb_telnet(
          BUFFER *b                 // the buffer to write data to
        , const char *prefix        // the prefix to use
        , RRDHOST *host             // the host this chart comes from
        , const char *hostname      // the hostname (to override host->hostname)
        , RRDSET *st                // the chart
        , RRDDIM *rd                // the dimension
        , usec_t after_usec              // the start timestamp
        , usec_t before_usec             // the end timestamp
        , BACKEND_OPTIONS backend_options // BACKEND_SOURCE_* bitmap
);

extern int process_opentsdb_response(BUFFER *b);


#endif //NETDATA_BACKEND_OPENTSDB_H
