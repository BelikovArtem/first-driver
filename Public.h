/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    driver and application

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_UmdfDriver,
    0xc297b7b6,0x5f34,0x4115,0xa7,0x16,0x77,0x4b,0x7b,0xc8,0x7b,0x00);
// {c297b7b6-5f34-4115-a716-774b7bc87b00}
