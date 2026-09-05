#include <telkin/Telkin.h>

using namespace tk::ppc;

// Disable all GamePad touch related abilities while in Boost Mode
tPatchBlr(0x0219d8f4);
tPatchBlr(0x02895f98);

tPatch8u(0x025cee0f, 0x14);
tPatch32u(0x025cee10, lwz(R::r12,R::r30, 0xf08));
tPatch32u(0x025cee14, lbz(R::r0,R::r12, 0x44));
tPatch32u(0x025cee18, rlwinm(R::r8, R::r0, 0x0, 0x18, 0x1e));
tPatch32u(0x025cee1c, stb(R::r8, R::r12, 0x44));
tPatch32u(0x025cee20, lwz(R::r10,R::r30, 0xf0c));
tPatch32u(0x025cee24, lbz(R::r11,R::r10, 0x44));
tPatch32u(0x025cee28, rlwinm(R::r0, R::r11, 0x0, 0x18, 0x1e));
tPatch32u(0x025cee2c, stb(R::r0, R::r10, 0x44));