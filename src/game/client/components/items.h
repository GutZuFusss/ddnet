/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_CLIENT_COMPONENTS_ITEMS_H
#define GAME_CLIENT_COMPONENTS_ITEMS_H
#include <game/client/component.h>

class CProjectileData;

class CItems : public CComponent
{
	void RenderProjectile(const CProjectileData *pCurrent, int ItemID);
	void RenderPickup(const CNetObj_Pickup *pPrev, const CNetObj_Pickup *pCurrent, bool IsPredicted = false);
	void RenderFlag(const CNetObj_Flag *pPrev, const CNetObj_Flag *pCurrent, const CNetObj_GameData *pPrevGameData, const CNetObj_GameData *pCurGameData);
	void RenderLaser(const struct CNetObj_Laser *pCurrent, bool IsPredicted = false);

	int m_ItemsQuadContainerIndex;

public:
	virtual void OnRender();
	virtual void OnInit();

	void ReconstructSmokeTrail(const CProjectileData *pCurrent, int DestroyTick);
};

#endif
