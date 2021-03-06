#ifndef _USCSI_PUBLIC_H
#define _USCSI_PUBLIC_H

#include <devioctl.h>

#include <uSCSIPortPublic.h>

// {A10A82EB-E4FC-4d1d-9F5A-DFA326E393F5}
static const GUID USCSI_DISK_INTERFACE = 
{ 0xa10a82eb, 0xe4fc, 0x4d1d, { 0x9f, 0x5a, 0xdf, 0xa3, 0x26, 0xe3, 0x93, 0xf5 } };

#define FILE_DEVICE_USCSI         43

#define BUSENUM_IOCTL(_index_) \
    CTL_CODE (FILE_DEVICE_USCSI, _index_, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA)

#define IOCTL_ISCSI_CREATE_SESSION		BUSENUM_IOCTL (0x01)
#define IOCTL_ISCSI_ADD_TARGETS			BUSENUM_IOCTL (0x02)
#define IOCTL_ISCSI_GET_TARGETS			BUSENUM_IOCTL (0x03)

#endif