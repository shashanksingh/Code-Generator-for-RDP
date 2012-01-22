/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Reply.h
 *
 *        Version:  1.0
 *        Created:  25/06/2011 06:54:53 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:
 *        Company:  Devon IT
 *
 * =====================================================================================
 */

#ifndef FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Reply_H
#define FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Reply_H

class FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Reply
{


public:
	FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Reply();
	~FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Reply();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif