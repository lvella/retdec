/**
 * @file src/cpdetect/signatures/yara/database/x86/pe/packer/packer_03.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86PePacker_03 =
R"x86_pe_packer(
rule rule_78_Anticrack_Software_Protector {
	meta:
		tool = "P"
		name = "Anticrack Software Protector"
		version = "1.09"
		pattern = "60????????????????0000????????????????????????E801000000??83042406C3??????????00"
	strings:
		$1 = { 60 ?? ?? ?? ?? ?? ?? ?? ?? 00 00 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? E8 01 00 00 00 ?? 83 04 24 06 C3 ?? ?? ?? ?? ?? 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_79_624__Six_to_Four {
	meta:
		tool = "P"
		name = "Six to Four - 624"
		version = "1.0"
		pattern = "50554C5083????FCBF????BE????B5??57F3A5C333ED"
	strings:
		$1 = { 50 55 4C 50 83 ?? ?? FC BF ?? ?? BE ?? ?? B5 ?? 57 F3 A5 C3 33 ED }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_80__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.1"
		pattern = "60EB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB0181E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB0181E80A000000E8EB0C0000E8"
	strings:
		$1 = { 60 EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 E8 0A 00 00 00 E8 EB 0C 00 00 E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_81__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.31"
		pattern = "60D1CB0FCAC1CAE0D1CA0FC8EB01F1"
	strings:
		$1 = { 60 D1 CB 0F CA C1 CA E0 D1 CA 0F C8 EB 01 F1 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_82__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [.BJFNT 1.3]"
		pattern = "EB033A4D3A1EEB02CD209CEB02CD20EB02CD2060EB02C705EB02CD20E803000000E9EB04584050C3619D1FEB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C4082B042474047502EB02EB01"
	strings:
		$1 = { EB 03 3A 4D 3A 1E EB 02 CD 20 9C EB 02 CD 20 EB 02 CD 20 60 EB 02 C7 05 EB 02 CD 20 E8 03 00 00 00 E9 EB 04 58 40 50 C3 61 9D 1F EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 2B 04 24 74 04 75 02 EB 02 EB 01 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_83__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [ASPack 2.11d]"
		pattern = "60E802000000EB095D5581ED39394400C361EB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF"
	strings:
		$1 = { 60 E8 02 00 00 00 EB 09 5D 55 81 ED 39 39 44 00 C3 61 EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_84__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [ASPack 2.12]"
		pattern = "60E803000000E9EB045D4555C3E801000000EB5DBBEDFFFFFF03DD81EB00A002EB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF"
	strings:
		$1 = { 60 E8 03 00 00 00 E9 EB 04 5D 45 55 C3 E8 01 00 00 00 EB 5D BB ED FF FF FF 03 DD 81 EB 00 A0 02 EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_85__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [EXE32Pack 1.3x]"
		pattern = "3BC074028183553BC074028183533BC97401BC563BD27402818557E8000000003BDB74019083C414EB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF"
	strings:
		$1 = { 3B C0 74 02 81 83 55 3B C0 74 02 81 83 53 3B C9 74 01 BC 56 3B D2 74 02 81 85 57 E8 00 00 00 00 3B DB 74 01 90 83 C4 14 EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_86__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [MSVC]"
		pattern = "558BEC6AFF68CA374100680638410064A1000000005064892500000000648F050000000083C40C5DEB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C4082B042474047502EB02EB01"
	strings:
		$1 = { 55 8B EC 6A FF 68 CA 37 41 00 68 06 38 41 00 64 A1 00 00 00 00 50 64 89 25 00 00 00 00 64 8F 05 00 00 00 00 83 C4 0C 5D EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 2B 04 24 74 04 75 02 EB 02 EB 01 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_87__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [MSVC 6.0 DLL]"
		pattern = "558BEC538B5D08568B750C578B7D1085F65F5E5B5DEB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF"
	strings:
		$1 = { 55 8B EC 53 8B 5D 08 56 8B 75 0C 57 8B 7D 10 85 F6 5F 5E 5B 5D EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_88__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [MSVC 7.0 DLL]"
		pattern = "558BEC538B5D08568B750C5E5B5DEB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF"
	strings:
		$1 = { 55 8B EC 53 8B 5D 08 56 8B 75 0C 5E 5B 5D EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_89__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [MSVC DLL]"
		pattern = "558BEC5657BF010000008B750C85F65F5E5DEB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF"
	strings:
		$1 = { 55 8B EC 56 57 BF 01 00 00 00 8B 75 0C 85 F6 5F 5E 5D EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_90__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [Neolite 2.0]"
		pattern = "E9A6000000B07B4000786040007C60400000000000B03F0000126240004E656F4C6974652045786563757461626C652046696C6520436F6D70726573736F720D0A436F707972696768742028632920313939382C31393939204E656F576F727820496E630D0A506F7274696F6E7320436F707972696768742028632920313939372D31393939204C65652048617369756B0D0A416C6C205269676874732052657365727665642E00000000EB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C4082B042474047502EB02EB01"
	strings:
		$1 = { E9 A6 00 00 00 B0 7B 40 00 78 60 40 00 7C 60 40 00 00 00 00 00 B0 3F 00 00 12 62 40 00 4E 65 6F 4C 69 74 65 20 45 78 65 63 75 74 61 62 6C 65 20 46 69 6C 65 20 43 6F 6D 70 72 65 73 73 6F 72 0D 0A 43 6F 70 79 72 69 67 68 74 20 28 63 29 20 31 39 39 38 2C 31 39 39 39 20 4E 65 6F 57 6F 72 78 20 49 6E 63 0D 0A 50 6F 72 74 69 6F 6E 73 20 43 6F 70 79 72 69 67 68 74 20 28 63 29 20 31 39 39 37 2D 31 39 39 39 20 4C 65 65 20 48 61 73 69 75 6B 0D 0A 41 6C 6C 20 52 69 67 68 74 73 20 52 65 73 65 72 76 65 64 2E 00 00 00 00 EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 2B 04 24 74 04 75 02 EB 02 EB 01 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_91__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [NsPacK 1.3]"
		pattern = "9C60E8000000005DB8B38540002DAC8540002BE88DB5D3FEFFFF8B0683F80074118DB5DFFEFFFF8B0683F8010F84F1010000619DEB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C4082B042474047502EB02EB01"
	strings:
		$1 = { 9C 60 E8 00 00 00 00 5D B8 B3 85 40 00 2D AC 85 40 00 2B E8 8D B5 D3 FE FF FF 8B 06 83 F8 00 74 11 8D B5 DF FE FF FF 8B 06 83 F8 01 0F 84 F1 01 00 00 61 9D EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 2B 04 24 74 04 75 02 EB 02 EB 01 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_92__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [PC Guard 4.xx]"
		pattern = "FC5550E8000000005DEB01E360E803000000D2EB0B58EB014840EB0135FFE0E761585DEB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF"
	strings:
		$1 = { FC 55 50 E8 00 00 00 00 5D EB 01 E3 60 E8 03 00 00 00 D2 EB 0B 58 EB 01 48 40 EB 01 35 FF E0 E7 61 58 5D EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_93__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [PE Crypt 1.02]"
		pattern = "E8000000005B83EB05EB04524E442185C07302F70550E808000000EAFF58EB18EB010FEB02CD20EB03EACD205858EB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF"
	strings:
		$1 = { E8 00 00 00 00 5B 83 EB 05 EB 04 52 4E 44 21 85 C0 73 02 F7 05 50 E8 08 00 00 00 EA FF 58 EB 18 EB 01 0F EB 02 CD 20 EB 03 EA CD 20 58 58 EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_94__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [PE-SHiELD 0.25]"
		pattern = "60E82B0000000D0A0D0A0D0A5265676973744172656420746F3A204E4F4E2D434F4D4D45524349414C21210D0A0D0A0D005861EB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF"
	strings:
		$1 = { 60 E8 2B 00 00 00 0D 0A 0D 0A 0D 0A 52 65 67 69 73 74 41 72 65 64 20 74 6F 3A 20 4E 4F 4E 2D 43 4F 4D 4D 45 52 43 49 41 4C 21 21 0D 0A 0D 0A 0D 00 58 61 EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_95__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [PEBundle 0.2 - 3.x]"
		pattern = "9C60E80200000033C08BC483C004938BE38B5BFC81EB0730400087DD619DEB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF"
	strings:
		$1 = { 9C 60 E8 02 00 00 00 33 C0 8B C4 83 C0 04 93 8B E3 8B 5B FC 81 EB 07 30 40 00 87 DD 61 9D EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_96__MSLRH {
	meta:
		tool = "P"
		name = "[MSLRH]"
		version = "0.32a [PEBundle 2.0x - 2.4x]"
		pattern = "9C60E80200000033C08BC483C004938BE38B5BFC81EB0730400087DD83BD9C38400001619DEB05E8EB044000EBFAE80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF83C40874047502EB02EB018150E802000000295A586BC003E802000000295A83C4045874047502EB02EB01810F31500F31E80A000000E8EB0C0000E8F6FFFFFFE8F2FFFFFF"
	strings:
		$1 = { 9C 60 E8 02 00 00 00 33 C0 8B C4 83 C0 04 93 8B E3 8B 5B FC 81 EB 07 30 40 00 87 DD 83 BD 9C 38 40 00 01 61 9D EB 05 E8 EB 04 40 00 EB FA E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF 83 C4 08 74 04 75 02 EB 02 EB 01 81 50 E8 02 00 00 00 29 5A 58 6B C0 03 E8 02 00 00 00 29 5A 83 C4 04 58 74 04 75 02 EB 02 EB 01 81 0F 31 50 0F 31 E8 0A 00 00 00 E8 EB 0C 00 00 E8 F6 FF FF FF E8 F2 FF FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
)x86_pe_packer";