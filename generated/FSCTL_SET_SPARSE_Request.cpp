/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_SPARSE_Request.cpp
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

#include "FSCTL_SET_SPARSE_Request.h"

FSCTL_SET_SPARSE_Request::FSCTL_SET_SPARSE_Request() 
{
}

FSCTL_SET_SPARSE_Request::~FSCTL_SET_SPARSE_Request() 
{
}


quint8 FSCTL_SET_SPARSE_Request:: getSetSparse()
{
	return m_SetSparse;
}

void FSCTL_SET_SPARSE_Request:: setSetSparse(const quint8 & value)
{
	m_SetSparse = value;
}
void FSCTL_SET_SPARSE_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_SET_SPARSE_Request::getBytes() 
{
}

