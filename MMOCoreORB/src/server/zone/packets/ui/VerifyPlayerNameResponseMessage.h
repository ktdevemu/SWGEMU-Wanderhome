/*
 * VerifyPlayerNameResponseMessage.h
 *
 *  Created on: Nov 25, 2008
 *      Author: swgemu
 */

#ifndef VERIFYPLAYERNAMERESPONSEMESSAGE_H_
#define VERIFYPLAYERNAMERESPONSEMESSAGE_H_

class VerifyPlayerNameResponseMessage : public BaseMessage {
public:
   VerifyPlayerNameResponseMessage(bool success, int counter) : BaseMessage() {
		insertShort(0x09);
		insertInt(0xF4C498FD);  //VerifyPlayerNameResponseMessage
		insertByte((byte) success); //Success or fail
		insertInt(counter); //Pretty sure this is a counter from the Verify packet.
   }

};
#endif /* VERIFYPLAYERNAMERESPONSEMESSAGE_H_ */
