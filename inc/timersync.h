/*
 / _____)             _              | |
( (____  _____ ____ _| |_ _____  ____| |__
 \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 _____) ) ____| | | || |_| ____( (___| | | |
(______/|_____)_|_|_| \__)_____)\____)_| |_|
  (C)2013 Semtech-Cycleo

Description:
    LoRa concentrator : Just In Time TX scheduling queue

License: Revised BSD License, see LICENSE.TXT file include in the project
Maintainer: Michael Coracin
*/


#ifndef _LORA_PKTFWD_TIMERSYNC_H
#define _LORA_PKTFWD_TIMERSYNC_H

/* -------------------------------------------------------------------------- */
/* --- DEPENDANCIES --------------------------------------------------------- */

#include <sys/time.h>    /* timeval */

/* -------------------------------------------------------------------------- */
/* --- PUBLIC FUNCTIONS PROTOTYPES ------------------------------------------ */

#ifdef LORAGW_PKT_FWD_USING_SINGLE_CHANNEL_MODE
int get_concentrator_time(uint32_t *concent_time_us);
#else
int get_concentrator_time(struct timeval *concent_time, struct timeval unix_time);
#endif

void thread_timersync(void);

#endif
