--[[
Quest_Define.lua
[ Start  ] 	2009.08.
[ Latest ]	2009-12-08 10:45 AM
[ Author ]	������
[ Version ]	0.0.0.5
[ Text ]									
[ Desc ]									
--]]

--��� ���ε�.
LuaQuestClass = QuestExpLuaBind()

--�ս� ���� 
GENS_DUPRIAN	=	1	--��������
GENS_VANERT	=	2	--�ٳ׸�Ʈ

--���� Ŭ����
CLASS_WIZARD                                          = 0
CLASS_KNIGHT                                          = 1
CLASS_ELF                                             = 2
CLASS_MAGUMSA                                         = 3
CLASS_DARKLORD                                        = 4
CLASS_SUMMONER                                        = 5
CLASS_MONK                                            = 6

-- ���� üũ ���� üũ
ASK1 = 1
ASK2 = 2
ASK3 = 3
ASK4 = 4
-- ���Ǽҵ� ��ȣ ����
Ep1		=	1
Ep2		=	2
Ep3		=	3
Ep4		=	4
Ep5		=	5
Ep6		=	6
Ep7		=	7
Ep8		=	8
Ep9		=	9
Ep10		=	10
Ep11		=	11
Ep12		=	12
Ep13		=	13
Ep14		=	14
Ep15		=	15
Ep16		=	16
Ep17		=	17
Ep18		=	18
Ep19		=	19
Ep20		=	20

--����Ʈ NPC
NPC_SHADOW_PHANTOM	=	257		-- ������ ����
NPC_GENS_DUPRIAN     	=	543		-- �ս� ��������
NPC_GENS_VANERT	        =	544		-- �ս� �ٳ׸�Ʈ
NPC_TERSIA	        =	566		-- �뺴������ �׸��þ�
NPC_VAINA	        =	567		-- �ų� ���̳�
NPC_ZAIRO	        =	568		-- ������ ���� ���̷�
NPC_DERUBISH		=	581

-- ������Ʈ �ɼ� �߰� ����
ExOpt1	=	0x20
ExOpt2	=	0x10
ExOpt3	=	0x08
ExOpt4	=	0x04
ExOpt5	=	0x02
ExOpt6	=	0x01

-- �ɼ� �߰� ����
Opt4	=	1
Opt8	=	2
Opt12	=	3
Opt16	=	4

-- ��Ƽ ����
PartyPlay = 1

-- �ű� ���� ����
	-- ����Ʈ ȹ�� ����
	EVENT_MAP_USER_KILL			= 0x0040	-- ���� ų ����Ʈ
	EVENT_MAP_MON_KILL			= 0x0041	-- ���� ų ����Ʈ
	EVENT_MAP_BLOOD_GATE			= 0x0042	-- ���� ĳ�� ���� �ı�
	EVENT_MAP_DEVIL_POINT			= 0x0104	-- �Ǹ��� ���� ����Ʈ ȹ��
	-- Ŭ���� ����
	EVENT_MAP_CLEAR_BLOOD			= 0x0100	-- ���� ĳ�� Ŭ����
	EVENT_MAP_CLEAR_CHAOS			= 0x0101	-- ī���� ĳ�� Ŭ����
	EVENT_MAP_CLEAR_DEVIL			= 0x0102	-- �Ǹ��� ���� Ŭ����
	EVENT_MAP_CLEAR_ILLUSION		= 0x0103	-- ȯ�� ��� Ŭ����

-- Drop Item �Ӽ� ����.
EN_OVERLAP		=	0x0001 -- ��ġ��
EN_DROP			=	0x0002 -- ������ �ٴڿ� ������
EN_WAREHOUSE		=	0x0004 -- â�� �̵�
EN_SELL_SHOP		=	0x0008 -- ���� �Ǹ�
EN_PERSONAL_SHOP	=	0x0010 -- ���� ����
EN_PERSONAL_TRADE	=	0x0020 -- ���� �ŷ�
EN_QUEST_PROG		=	0x0040 -- ������ ����ؼ� ����Ʈ ���� 


-- ���Ϻ� ����Ʈ
Sun	=	0
Mon	=	1
Tue	=	2
Wed	=	3
Thu	=	4
Fri	=	5
Sat	=	6

-- PVP ����Ʈ ����
VULCANUS = 63

-- Quests Configs
QuestResetMasterSkill 	= 1
QuestGensMuBlue			= 1
QuestExtendStorage 		= 1