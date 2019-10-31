
#ifndef __RHEA_PI_MNGR_H__
#define __RHEA_PI_MNGR_H__

enum {
	PI_MGR_PI_ID_MM,
	PI_MGR_PI_ID_HUB_SWITCHABLE,
	PI_MGR_PI_ID_HUB_AON,
	PI_MGR_PI_ID_ARM_CORE,
	PI_MGR_PI_ID_ARM_SUB_SYSTEM,
	PI_MGR_PI_ID_MODEM,
	PI_MGR_PI_ID_MAX
};

enum {
	PI_STATE_ACTIVE,
	PI_STATE_RETENTION,
	PI_STATE_SHUTDOWN,
};

enum {
	ARM_CORE_STATE_ACTIVE,
	ARM_CORE_STATE_SUSPEND,
	ARM_CORE_STATE_RETENTION,
	ARM_CORE_STATE_DORMANT,
	ARM_CORE_STATE_DS_DORMANT
};

enum {
	PI_OPP_ECONOMY,
	PI_OPP_NORMAL,
	PI_OPP_TURBO,
	PI_OPP_MAX
};

void rhea_pi_mgr_init(void);
int rhea_pi_mgr_print_act_pis(void);
#endif /*__RHEA_PI_MNGR_H__*/
