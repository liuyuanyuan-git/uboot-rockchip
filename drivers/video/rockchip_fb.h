#ifndef __ROCKCHIP_H__
#define __ROCKCHIP_H__

#define FB_DEFAULT_ORDER			0
#define FB0_WIN2_FB1_WIN1_FB2_WIN0		12
#define FB0_WIN1_FB1_WIN2_FB2_WIN0		21
#define FB0_WIN2_FB1_WIN0_FB2_WIN1		102
#define FB0_WIN0_FB1_WIN2_FB2_WIN1		120
#define FB0_WIN0_FB1_WIN1_FB2_WIN2		210
#define FB0_WIN1_FB1_WIN0_FB2_WIN2		201
#define FB0_WIN0_FB1_WIN1_FB2_WIN2_FB3_WIN3	3210

#if defined(CONFIG_RK_HDMI)
extern int rk_hdmi_probe(vidinfo_t *panel);
#endif

#endif