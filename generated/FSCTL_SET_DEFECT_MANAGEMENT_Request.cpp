/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_DEFECT_MANAGEMENT_Request.cpp
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

#include "FSCTL_SET_DEFECT_MANAGEMENT_Request.h"

FSCTL_SET_DEFECT_MANAGEMENT_Request::FSCTL_SET_DEFECT_MANAGEMENT_Request() 
{
}

FSCTL_SET_DEFECT_MANAGEMENT_Request::~FSCTL_SET_DEFECT_MANAGEMENT_Request() 
{
}


quint8 FSCTL_SET_DEFECT_MANAGEMENT_Request:: getDisable()
{
	return m_Disable;
}

void FSCTL_SET_DEFECT_MANAGEMENT_Request:: setDisable(const quint8 & value)
{
	m_Disable = value;
}
void FSCTL_SET_DEFECT_MANAGEMENT_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_SET_DEFECT_MANAGEMENT_Request::getBytes() 
{
}

