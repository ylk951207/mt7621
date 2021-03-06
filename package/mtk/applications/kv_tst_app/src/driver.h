/*
 ***************************************************************************
 * MediaTek Inc. 
 *
 * All rights reserved. source code is an unpublished work and the
 * use of a copyright notice does not imply otherwise. This source code
 * contains confidential trade secret material of MediaTek. Any attemp
 * or participation in deciphering, decoding, reverse engineering or in any
 * way altering the source code is stricitly prohibited, unless the prior
 * written consent of MediaTek, Inc. is obtained.
 ***************************************************************************

    Module Name:
    	driver.h
*/

#ifndef __DRIVER_H__
#define __DRIVER_H__

#include "rrm_wnm.h"

struct rrm_wnm_drv_ops {
	void * (*drv_inf_init)(struct rrm_wnm *rrm_wnm, const int opmode, const int drv_mode);
	int (*drv_inf_exit)(struct rrm_wnm *rrm_wnm);
	int (*drv_wnm_onoff)(void *drv_data, const char *ifname, u8 onoff);
	
	int (*drv_send_btm_req)(void *drv_data, const char *ifname,
							const char *peer_sta_addr, const char *btm_req,
							size_t btm_req_len);
	int (*drv_send_btm_req_raw)(void *drv_data, const char *ifname,
							u8 *btm_req_raw, u32 param_len);
	int (*drv_send_btm_req_param)(void *drv_data, const char *ifname,
							u8 *btm_req_param, u32 param_len);
	int (*drv_send_btm_query)(void *drv_data, const char *ifname,
							  const char *peer_sta_addr, const char *btm_query,
							  size_t btm_query_len);
	int (*drv_send_btm_rsp)(void *drv_data, const char *ifname,
							const char *peer_sta_addr, const char *btm_rsp,
							size_t btm_rsp_len);
	int (*drv_btm_onoff)(void *drv_data, const char *ifname,
                             int onoff);
	int (*drv_btm_query_cap)(void *drv_data, const char *ifname,
                             u8 *mac, u8 *cap);
	int (*drv_send_nr_rsp_param)(void *drv_data, const char *ifname,
							u8 *nr_rsp_param, u32 param_len);
	int (*drv_send_nr_rsp_raw)(void *drv_data, const char *ifname,
							u8 *nr_rsp_raw, u32 param_len);
	int (*drv_send_nr_req_handle_way)(void *drv_data, const char *ifname,
							u8 way);
	int (*drv_rrm_onoff)(void *drv_data, const char *ifname,
                             int onoff);
	int (*drv_rrm_query_cap)(void *drv_data, const char *ifname,
                             u8 *mac, u8 *cap);
	int (*drv_send_bcn_req_param)(void *drv_data, const char *ifname,
							u8 *bcn_req_param, u32 param_len);
	int (*drv_send_bcn_req_raw)(void *drv_data, const char *ifname,
							u8 *bcn_req_raw, u32 param_len);
};


#endif /* __DRIVER_H__ */
