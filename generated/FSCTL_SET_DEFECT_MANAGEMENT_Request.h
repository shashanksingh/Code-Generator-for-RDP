/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_DEFECT_MANAGEMENT_Request.h
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

#ifndef FSCTL_SET_DEFECT_MANAGEMENT_Request_H
#define FSCTL_SET_DEFECT_MANAGEMENT_Request_H

class FSCTL_SET_DEFECT_MANAGEMENT_Request
{


public:
	FSCTL_SET_DEFECT_MANAGEMENT_Request();
	~FSCTL_SET_DEFECT_MANAGEMENT_Request();

	quint8 getDisable();
	void setDisable(quint8 value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint8 m_Disable;

protected:


};

#endif