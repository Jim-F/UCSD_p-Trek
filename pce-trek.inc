#-----------------------------------------------------------------------
# PCE/IBMPC COMMON CONFIGURATION
#-----------------------------------------------------------------------

# 2024-01-20

#-----------------------------------------------------------------------
# CPU
#-----------------------------------------------------------------------

cfg.cpu   ?= "8088"
cfg.speed ?= 1

cpu {
	model = cfg.cpu
	speed = cfg.speed
}


#-----------------------------------------------------------------------
# RAM
#-----------------------------------------------------------------------

cfg.ram     ?= 256K
cfg.memtest ?= true

ram {
	address = 0
	size    = cfg.ram
}


#-----------------------------------------------------------------------
# EMS
#-----------------------------------------------------------------------

cfg.ems    ?= 0
cfg.emsseg ?= 0xe000
cfg.ems40  ?= 1

if (cfg.ems > 0) {
	ems {
		ems40   = cfg.ems40
		segment = cfg.emsseg
		size    = cfg.ems
	}
}


#-----------------------------------------------------------------------
# XMS
#-----------------------------------------------------------------------

cfg.xms    ?= 0
cfg.umb    ?= 0
cfg.umbseg ?= 0xd000
cfg.hma    ?= 1

if ((cfg.xms > 0) || (cfg.umb > 0)) {
	xms {
		xms_size = cfg.xms
		umb_size = cfg.umb
		umb_segm = cfg.umbseg
		hma      = cfg.hma
	}
}


#-----------------------------------------------------------------------
# Floppy disks
#-----------------------------------------------------------------------

cfg.fdd ?= 2

if (cfg.fdd >= 1) {
	disk {
		drive    = 0x00
		type     = "image"
		c        = 40
		h        = 2
		s        = 8
		file     = "TRTREK.ima"
		optional = 1
		readonly = 0
	}
}

if (cfg.fdd >= 2) {
	disk {
		drive    = 0x01
		type     = "image"
		c        = 40
		h        = 2
		s        = 8
		file     = "TREK3A.ima"
		optional = 1
	}
}

if (cfg.fdd >= 3) {
	disk {
		drive    = 0x02
		type     = "image"
		c        = 40
		h        = 2
		s        = 8
		file     = "TREK3B.ima"
		optional = 1
	}
}

if (cfg.fdd >= 4) {
	disk {
		drive    = 0x03
		type     = "image"
		c        = 40
		h        = 2
		s        = 8
		file     = ""
		optional = 1
	}
}


#-----------------------------------------------------------------------
# Hard disks
#-----------------------------------------------------------------------

cfg.hdd ?= 8

cfg.hdd.cowdir ?= ""

cfg.hd0.base ?= "hd0"
cfg.hd0.cow  ?= 1

cfg.hd1.base ?= "hd1"
cfg.hd1.cow  ?= 1

cfg.hd2.base ?= "hd2"
cfg.hd2.cow  ?= 1

cfg.hd3.base ?= "hd3"
cfg.hd3.cow  ?= 1

cfg.hd4.base ?= "hd4"
cfg.hd4.cow  ?= 1

cfg.hd5.base ?= "hd5"
cfg.hd5.cow  ?= 1

cfg.hd6.base ?= "hd6"
cfg.hd6.cow  ?= 1

cfg.hd7.base ?= "hd7"
cfg.hd7.cow  ?= 1

if (cfg.hdd >= 1) {
	disk {
		drive    = 0x80
		type     = "auto"
		optional = 1

		file = cfg.hd0.base + ".pbi"
		file = cfg.hd0.base + ".pimg"
		file = cfg.hd0.base + ".qed"
		file = cfg.hd0.base + ".img"

		if (cfg.hd0.cow) {
			cow = cfg.hdd.cowdir + cfg.hd0.base + ".cow"
		}
	}
}

if (cfg.hdd >= 2) {
	disk {
		drive    = 0x81
		type     = "auto"
		optional = 1

		file = cfg.hd1.base + ".pbi"
		file = cfg.hd1.base + ".pimg"
		file = cfg.hd1.base + ".qed"
		file = cfg.hd1.base + ".img"

		if (cfg.hd1.cow) {
			cow = cfg.hdd.cowdir + cfg.hd1.base + ".cow"
		}
	}
}

if (cfg.hdd >= 3) {
	disk {
		drive    = 0x82
		type     = "auto"
		optional = 1

		file = cfg.hd2.base + ".pbi"
		file = cfg.hd2.base + ".pimg"
		file = cfg.hd2.base + ".qed"
		file = cfg.hd2.base + ".img"

		if (cfg.hd2.cow) {
			cow = cfg.hdd.cowdir + cfg.hd2.base + ".cow"
		}
	}
}

if (cfg.hdd >= 4) {
	disk {
		drive    = 0x83
		type     = "auto"
		optional = 1

		file = cfg.hd3.base + ".pbi"
		file = cfg.hd3.base + ".pimg"
		file = cfg.hd3.base + ".qed"
		file = cfg.hd3.base + ".img"

		if (cfg.hd3.cow) {
			cow = cfg.hdd.cowdir + cfg.hd3.base + ".cow"
		}
	}
}

if (cfg.hdd >= 5) {
	disk {
		drive    = 0x84
		type     = "auto"
		optional = 1

		file = cfg.hd4.base + ".pbi"
		file = cfg.hd4.base + ".pimg"
		file = cfg.hd4.base + ".qed"
		file = cfg.hd4.base + ".img"

		if (cfg.hd4.cow) {
			cow = cfg.hdd.cowdir + cfg.hd4.base + ".cow"
		}
	}
}

if (cfg.hdd >= 6) {
	disk {
		drive    = 0x85
		type     = "auto"
		optional = 1

		file = cfg.hd5.base + ".pbi"
		file = cfg.hd5.base + ".pimg"
		file = cfg.hd5.base + ".qed"
		file = cfg.hd5.base + ".img"

		if (cfg.hd5.cow) {
			cow = cfg.hdd.cowdir + cfg.hd5.base + ".cow"
		}
	}
}

if (cfg.hdd >= 7) {
	disk {
		drive    = 0x86
		type     = "auto"
		optional = 1

		file = cfg.hd6.base + ".pbi"
		file = cfg.hd6.base + ".pimg"
		file = cfg.hd6.base + ".qed"
		file = cfg.hd6.base + ".img"

		if (cfg.hd6.cow) {
			cow = cfg.hdd.cowdir + cfg.hd6.base + ".cow"
		}
	}
}

if (cfg.hdd >= 8) {
	disk {
		drive    = 0x87
		type     = "auto"
		optional = 1

		file = cfg.hd7.base + ".pbi"
		file = cfg.hd7.base + ".pimg"
		file = cfg.hd7.base + ".qed"
		file = cfg.hd7.base + ".img"

		if (cfg.hd7.cow) {
			cow = cfg.hdd.cowdir + cfg.hd7.base + ".cow"
		}
	}
}


#-----------------------------------------------------------------------
# FDC
#-----------------------------------------------------------------------

cfg.fdc          ?= true
cfg.fdc.accurate ?= false
cfg.fdc.eot      ?= true
cfg.fdc.drives   ?= 4

cfg.fd0.single_sided ?= 0
cfg.fd1.single_sided ?= 0
cfg.fd2.single_sided ?= 0
cfg.fd3.single_sided ?= 0

if (cfg.fdc) {
	fdc {
		address  = 0x3f0
		irq      = 6

		if (cfg.fdc.drives > 0) {
			drive0   = 0x00
		}

		if (cfg.fdc.drives > 1) {
			drive1   = 0x01
		}

		if (cfg.fdc.drives > 2) {
			drive2   = 0x02
		}

		if (cfg.fdc.drives > 3) {
			drive3   = 0x03
		}

		accurate   = cfg.fdc.accurate
		ignore_eot = !cfg.fdc.eot

		single_sided =
			(cfg.fd0.single_sided ? 1 : 0) |
			(cfg.fd1.single_sided ? 2 : 0) |
			(cfg.fd2.single_sided ? 4 : 0) |
			(cfg.fd3.single_sided ? 8 : 0)
	}
}


#-----------------------------------------------------------------------
# HDC
#-----------------------------------------------------------------------

cfg.hdc          ?= cfg.hdc.bios != ""
cfg.hdc.bios     ?= ""
cfg.hdc.switches ?= 0x00
cfg.hdc.cfg_id   ?= ""
cfg.hdc.sectors  ?= 17

cfg.hdc.bios_addr ?= 0xc8000
cfg.hdc.bios_size ?= 16K

if (cfg.hdc) {
	if (cfg.hdc.bios_size) {
		rom {
			address = cfg.hdc.bios_addr
			size    = cfg.hdc.bios_size

			if (cfg.hdc.bios) {
				file = cfg.hdc.bios
			}
		}
	}

	hdc {
		address = 0x320
		irq     = 5

		drive0  = 0x80
		drive1  = 0x81

		sectors   = cfg.hdc.sectors
		switches  = cfg.hdc.switches
		config_id = cfg.hdc.cfg_id
	}
}


#-----------------------------------------------------------------------
# Serial ports
#-----------------------------------------------------------------------

cfg.ser1.driver    ?= "stdio:file=ser1.out:flush=1"
cfg.ser1.multichar ?= 1

cfg.ser2.driver    ?= ""
cfg.ser2.multichar ?= 1

cfg.ser3.driver    ?= ""
cfg.ser3.multichar ?= 1

cfg.ser4.driver    ?= ""
cfg.ser4.multichar ?= 1

if (cfg.ser1.driver) {
	serial {
		uart      = "8250"
		address   = 0x3f8
		irq       = 4
		multichar = cfg.ser1.multichar
		driver    = cfg.ser1.driver
#		log       = "ser1.log"
	}
}

if (cfg.ser2.driver) {
	serial {
		uart      = "8250"
		address   = 0x2f8
		irq       = 3
		multichar = cfg.ser2.multichar
		driver    = cfg.ser2.driver
	}
}

if (cfg.ser3.driver) {
	serial {
		uart      = "8250"
		address   = 0x3e8
		irq       = 4
		multichar = cfg.ser3.multichar
		driver    = cfg.ser3.driver
	}
}

if (cfg.ser4.driver) {
	serial {
		uart      = "8250"
		address   = 0x2e8
		irq       = 3
		multichar = cfg.ser4.multichar
		driver    = cfg.ser4.driver
	}
}


#-----------------------------------------------------------------------
# Parallel ports
#-----------------------------------------------------------------------

cfg.par1.driver ?= "stdio:file=par1.out:flush=1"
cfg.par2.driver ?= ""
cfg.par3.driver ?= ""
cfg.par4.driver ?= ""

if (cfg.par1.driver) {
	parport {
		address = 0x378
		driver  = cfg.par1.driver
	}
}

if (cfg.par2.driver) {
	parport {
		address = 0x278
		driver  = cfg.par2.driver
	}
}

if (cfg.par3.driver) {
	parport {
		address = 0x3bc
		driver  = cfg.par3.driver
	}
}

if (cfg.par4.driver) {
	parport {
		address = 0x2bc
		driver  = cfg.par4.driver
	}
}


#-----------------------------------------------------------------------
# Cassette
#-----------------------------------------------------------------------

cfg.cas      ?= cfg.cas.file != ""
cfg.cas.file ?= ""

if (cfg.cas) {
	cassette {
		file  = cfg.cas.file

		#read  = cfg.cas
		#write = "out/cas-out.pti"
	}
}


#-----------------------------------------------------------------------
# Speaker
#-----------------------------------------------------------------------

cfg.sound           ?= 1
cfg.speaker.driver  ?= "sdl:lowpass=0"
cfg.speaker.volume  ?= 250
cfg.speaker.lowpass ?= 8000
cfg.speaker.srate   ?= 44100

if (cfg.sound) {
	speaker {
		volume      = cfg.speaker.volume
		lowpass     = cfg.speaker.lowpass
		sample_rate = cfg.speaker.srate
		driver      = cfg.speaker.driver
	}
}


#-----------------------------------------------------------------------
# Terminal
#-----------------------------------------------------------------------

cfg.scale       ?= 2
cfg.fullscreen  ?= 0
cfg.report_keys ?= 0
cfg.escape      ?= "ESC"

terminal {
	driver      = "sdl"

	escape      = cfg.escape

	keymap = "0x00e3=Alt"	# left start

	scale       = cfg.scale
	border      = 0
	fullscreen  = cfg.fullscreen

	report_keys = cfg.report_keys

	aspect_x    = 4
	aspect_y    = 3

	min_w       = 512
	min_h       = 350

	mouse_mul_x = 1
	mouse_div_x = 1
	mouse_mul_y = 1
	mouse_div_y = 1
}

terminal {
	driver = "x11"

	escape = cfg.escape

	scale = cfg.scale

	aspect_x   = 4
	aspect_y   = 3

	mouse_mul_x = 1
	mouse_div_x = 2
	mouse_mul_y = 1
	mouse_div_y = 2
}

terminal {
	driver = "null"
}


#-----------------------------------------------------------------------
# Video
#-----------------------------------------------------------------------

cfg.vga_bios ?= "ibm-vga.rom"
cfg.ega_bios ?= "ibm-ega.rom"
cfg.ega_mono ?= 0
cfg.ega_irq  ?= 1
cfg.blink    ?= 1

if (cfg.ega_mono) {
	cfg.ega_switches ?= 0x0a
}
else {
	cfg.ega_switches ?= 0x09
}

cfg.wyse_font ?= 0

video {
	device = "cga"
	font   = 0
	blink  = cfg.blink ? 60/2 : 0
}

video {
	device = "mda"
	color  = "green"
	blink  = cfg.blink ? 50/2 : 0
}

video {
	device = "hgc"
	color  = "amber"
	blink  = cfg.blink ? 50/2 : 0
}

video {
	device = "vga"

	blink = cfg.blink ? 70/2 : 0

	if (cfg.vga_bios != "") {
		rom {
			address = 0xc0000
			size    = 32K
			default = 0xff

			file = cfg.vga_bios
		}
	}
}

video {
	device = "ega"

	switches = cfg.ega_switches

	enable_irq = cfg.ega_irq
	irq        = 2

	blink      = cfg.blink ? 60/2 : 0

	if (cfg.ega_bios != "") {
		rom {
			address = 0xc0000
			size    = 32K
			default = 0xff

			file = cfg.ega_bios
		}
	}
}

video {
	device = "olivetti"
	blink  = cfg.blink ? 60/2 : 0
}

video {
	device = "plantronics"
	blink  = cfg.blink ? 60/3 : 0
}

video {
	device = "wy700"
	font   = cfg.wyse_font
	blink  = 60/2
}


#-----------------------------------------------------------------------
# PCEX
#-----------------------------------------------------------------------

cfg.pcex      ?= 0
cfg.pcex.addr ?= 0xf0000

if (cfg.pcex) {
	load {
		format  = "binary"
		address = cfg.pcex.addr
		file    = "ibmpc-pcex.rom"
	}
}


#-----------------------------------------------------------------------
# BIOS
#-----------------------------------------------------------------------

cfg.bios      ?= ""
cfg.bios.addr ?= 0xfe000

cfg.bios.rom.addr ?= 0xf0000
cfg.bios.rom.size ?= 65536

if (cfg.bios.rom.size > 0) {
	rom {
		address = cfg.bios.rom.addr
		size    = cfg.bios.rom.size
		default = 0xff
	}
}

if (cfg.bios) {
	load {
		format  = "auto"
		address = cfg.bios.addr
		file    = cfg.bios
	}
}


#-----------------------------------------------------------------------
# BASIC
#-----------------------------------------------------------------------

cfg.basic      ?= ""
cfg.basic.addr ?= 0xf6000

if (cfg.basic) {
	load {
		format  = "auto"
		address = cfg.basic.addr
		file    = cfg.basic
	}
}


#-----------------------------------------------------------------------
# System
#-----------------------------------------------------------------------

cfg.boot    ?= 128
cfg.rtc     ?= true
cfg.cga40   ?= false
cfg.memtest ?= false
cfg.fdd     ?= 2
cfg.patch   ?= false
cfg.patch19 ?= true
cfg.kbden   ?= false

if (cfg.model) {
	system {
		model	= cfg.model

		boot	= cfg.boot
		rtc	= cfg.rtc
		cga40	= cfg.cga40
		memtest	= cfg.memtest

		floppy_disk_drives = cfg.fdd

		force_keyboard_enable = cfg.kbden

		patch_bios_init  = cfg.patch
		patch_bios_int19 = cfg.patch19
	}
}
