/*
 * CitySpecializationConfirmSuiCallback.h
 *
 *  Created on: Feb 13, 2012
 *      Author: xyborn
 */

#ifndef CITYSPECIALIZATIONCONFIRMSUICALLBACK_H_
#define CITYSPECIALIZATIONCONFIRMSUICALLBACK_H_

#include "server/zone/objects/player/sui/SuiCallback.h"
#include "server/zone/objects/player/sui/listbox/SuiListBox.h"

class CitySpecializationConfirmSuiCallback : public SuiCallback {
public:
	CitySpecializationConfirmSuiCallback(ZoneServer* server)
		: SuiCallback(server) {
	}

	void run(CreatureObject* player, SuiBox* suiBox, bool cancelPressed, Vector<UnicodeString>* args) {
		ManagedReference<CitySpecializationSession*> session = dynamic_cast<CitySpecializationSession*>(player->getActiveSession(SessionFacadeType::CITYSPEC));

		if (session == NULL)
			return;

		if (!suiBox->isMessageBox() || player == NULL || cancelPressed) {
			session->cancelSession();
			return;
		}

		session->acceptChoice();
	}
};

#endif /* CITYSPECIALIZATIONCONFIRMSUICALLBACK_H_ */
