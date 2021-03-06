-------- Event timeline: Demo121_0_effect --------
actors: 2
clips: 17
oneshots: 0
cuts: 1
duration: 1580.0
params: {MapName: '', PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotY: 0.0}

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: DemoXLinkActor[0]
x36: 3
actions: ['Demo_XLinkEventCreate', 'Demo_XLinkEventFade']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}

Actor: EffectEmitter[0]
x36: 7
actions: ['Demo_EmitEffectLoop']
params: {CreateMode: 0, IsGrounding: false, IsWorld: false, PosX: 0.0, PosY: 0.0, PosZ: 0.0, RotX: 0.0, RotY: 0.0,
  RotZ: 0.0}


===== Timeline =====

[      0.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
               duration: 990.0
               {ELinkKey: TerminalGrudge, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[      0.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
               duration: 100.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo121_0_cg_appear,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[      2.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#16, xc=6)
               duration: 838.0
               {A: 0.0, Actor: GameRomCamera, B: 0.0, CutChangeReset: false, ELinkKey: GrudgeEnv_MainDungeon_Demo,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    100.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#6, xc=0)
[    240.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=0)
               duration: 486.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo121_0_cg_gludge,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    240.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=5)
               duration: 437.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: DripDemo, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    326.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=1)
               duration: 400.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo_bodyMelt,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    390.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=2)
               duration: 336.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo121_0_cg_GludgeLine,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    581.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=3)
               duration: 179.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo_flash01,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    677.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#14, xc=5)
[    677.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=4)
               duration: 83.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo_burst01,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    694.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#15, xc=5)
               duration: 66.0
               {A: 0.0, Actor: Enemy_SiteBoss_Spear, B: 0.0, CutChangeReset: false, ELinkKey: Demo_burst02,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[    726.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#7, xc=0)
[    726.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#9, xc=1)
[    726.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#11, xc=2)
[    760.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#12, xc=3)
[    760.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#13, xc=4)
[    760.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#15, xc=5)
[    800.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#2, xc=1)
               duration: 80.0
               {ELinkKey: Demo121_0_GrudgeHaze, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    840.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#16, xc=6)
[    880.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#2, xc=1)
[    880.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#3, xc=1)
               duration: 7.0
               {ELinkKey: Demo121_0_GrudgeHaze, IsWaitFinish: true, SLinkKey: ''}
[    887.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#3, xc=1)
[    960.0] E DemoXLinkActor[0] - Demo_XLinkEventCreate (#4, xc=2)
               duration: 120.0
               {ELinkKey: TerminalRelease, IsTargetDemoSLinkUser: false, IsWaitFinish: true, SLinkKey: ''}
[    990.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#0, xc=0)
[    990.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#1, xc=0)
               duration: 10.0
               {ELinkKey: TerminalGrudge, IsWaitFinish: true, SLinkKey: ''}
[   1000.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#1, xc=0)
[   1080.0] L DemoXLinkActor[0] - Demo_XLinkEventCreate (#4, xc=2)
[   1080.0] E DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=2)
               duration: 7.0
               {ELinkKey: TerminalRelease, IsWaitFinish: true, SLinkKey: ''}
[   1087.0] L DemoXLinkActor[0] - Demo_XLinkEventFade (#5, xc=2)
[   1200.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=0)
               duration: 380.0
               {A: 0.0, Actor: Obj_HeartUtuwa_A_01, B: 0.0, CutChangeReset: false, ELinkKey: Kirakira, G: 0.0,
                 InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false, R: 0.0,
                 RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1497.0] E EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=1)
               duration: 83.0
               {A: 0.0, Actor: RemainsClearTerminal, B: 0.0, CutChangeReset: false, ELinkKey: BossBattle_Clear,
                 G: 0.0, InstanceName: '', IsWaitFinish: false, NoFade: false, Option: '', OverWrite: false,
                 R: 0.0, RX: 0.0, RY: 0.0, RZ: 0.0, Scale: 0.0, X: 0.0, Y: 0.0, Z: 0.0}
[   1580.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#8, xc=0)
[   1580.0] L EffectEmitter[0] - Demo_EmitEffectLoop (#10, xc=1)
