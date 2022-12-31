# Make Instructions

### Not a Step by step guide!


![Spacemouse Advance Main](https://user-images.githubusercontent.com/8228450/210141123-5c5fa4ff-ebef-4b3c-94a9-a4487e29df29.jpg)



## BoM

|      | Name                                                         | Quantity | Notes                                                        |
| ---- | ------------------------------------------------------------ | -------- | ------------------------------------------------------------ |
| 01   | SM_MacroPad Top Shell.STL<br />```./Production Files/Enclosure``` | 1        | 3D Printed at home or [JLCPCB](https://jlcpcb.com/3d-printing), [HUBS](https://www.hubs.com/), [Weerg](https://www.weerg.com/) etc<br />I SLS printed mine with "Nylon PA12 White" |
| 02   | PCB ~> Spacemouse-Macro-Keys-v1.0.0<br />```./Production Files/PCB``` | 1        | PCB together with most SMD components. CPL and BoM files provided for automated assembly. If hand assembling, components listed in ```Spacemouse-Macro-Keys-v1.0.0-BoM.csv``` need to also be sourced.<br />I used [JLCPCB](https://jlcpcb.com/) together with their assembly service. |
| 03   | [Seeed Studio XIAO RP2040](https://wiki.seeedstudio.com/XIAO-RP2040/) | 1        | Cover the bottom bonding pads with kapton tape prior to soldering to the PCB. this is to prevent these pads from shorting to the vias on PCB. |
| 04   | [PCA9505](https://www.nxp.com/docs/en/data-sheet/PCA9505_9506.pdf) | 1        | In short supply. I purchased mine on [AliExpress](https://www.aliexpress.com) |
| 05   | Kailh LP Switch                                              | 12       | I used 57gf blue switches. feel free to use different speck keys<br />Datasheet can be found in ```./Source Files/Datasheets``` |
| 06   | Kailh LP Keycaps                                             | 12       | I went with "Black-chocolate". Personal preference           |
| 07   | M3 Brass Threaded Insert                                     | 11       | To be inserted in to the 3D Printed "SM_MacroPad Top Shell"  |
| 08   | M3 x 6mm Countersunk Screws                                  | 11       |                                                              |
| 09   | Bottom Rubber Pad                                            | 1        | Grippy layer so the device dosent slide around whn using. I lasecut mine from TK.<br />Alternatively use suitable self adhesive rubber feat |
| 10   | bottom pad                                                   | 1        | Can be laser cut (TK mm) and countersunk manually, or 3D printed |
| 11   | Light block (optional)                                       | 1        | Lasercut (tk mm). minimises light bleed                      |
| 12   | label sticker (Optional)                                     | 1        | engraved with TK                                             |





## Loading Firmware

1. Plug in the [Seeed Studio XIAO RP2040](https://wiki.seeedstudio.com/XIAO-RP2040/) to the computer in bootloader mode

   ```
   - Long press the "B" button.
   - Connect the Seeed Studio XIAO PR2040 to your computer.
   - The computer will appear a disk driver.
   ```

2. Copy and paste "Spacemouse-Macro-Keys for seeed_xiao_rp2040_v1.0.0.uf2" file from ```./Production Files/Firmware``` to the bootloader

3. Wait for the device to restart

4. Each key is now a new Key on your HID. Go to shortcut manager for your preferred program and assign keys as you wish.
