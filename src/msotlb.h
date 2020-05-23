    typedef enum {
        msoLineDashStyleMixed = -2,
        msoLineSolid = 1,
        msoLineSquareDot = 2,
        msoLineRoundDot = 3,
        msoLineDash = 4,
        msoLineDashDot = 5,
        msoLineDashDotDot = 6,
        msoLineLongDash = 7,
        msoLineLongDashDot = 8
    } MsoLineDashStyle;

    typedef enum {
        msoLineStyleMixed = -2,
        msoLineSingle = 1,
        msoLineThinThin = 2,
        msoLineThinThick = 3,
        msoLineThickThin = 4,
        msoLineThickBetweenThin = 5
    } MsoLineStyle;

    typedef enum {
        msoArrowheadStyleMixed = -2,
        msoArrowheadNone = 1,
        msoArrowheadTriangle = 2,
        msoArrowheadOpen = 3,
        msoArrowheadStealth = 4,
        msoArrowheadDiamond = 5,
        msoArrowheadOval = 6
    } MsoArrowheadStyle;

    typedef enum {
        msoArrowheadWidthMixed = -2,
        msoArrowheadNarrow = 1,
        msoArrowheadWidthMedium = 2,
        msoArrowheadWide = 3
    } MsoArrowheadWidth;

    typedef enum {
        msoArrowheadLengthMixed = -2,
        msoArrowheadShort = 1,
        msoArrowheadLengthMedium = 2,
        msoArrowheadLong = 3
    } MsoArrowheadLength;

    typedef enum {
        msoFillMixed = -2,
        msoFillSolid = 1,
        msoFillPatterned = 2,
        msoFillGradient = 3,
        msoFillTextured = 4,
        msoFillBackground = 5,
        msoFillPicture = 6
    } MsoFillType;

    typedef enum {
        msoGradientMixed = -2,
        msoGradientHorizontal = 1,
        msoGradientVertical = 2,
        msoGradientDiagonalUp = 3,
        msoGradientDiagonalDown = 4,
        msoGradientFromCorner = 5,
        msoGradientFromTitle = 6,
        msoGradientFromCenter = 7
    } MsoGradientStyle;

    typedef enum {
        msoGradientColorMixed = -2,
        msoGradientOneColor = 1,
        msoGradientTwoColors = 2,
        msoGradientPresetColors = 3
    } MsoGradientColorType;

    typedef enum {
        msoTextureTypeMixed = -2,
        msoTexturePreset = 1,
        msoTextureUserDefined = 2
    } MsoTextureType;

    typedef enum {
        msoPresetTextureMixed = -2,
        msoTexturePapyrus = 1,
        msoTextureCanvas = 2,
        msoTextureDenim = 3,
        msoTextureWovenMat = 4,
        msoTextureWaterDroplets = 5,
        msoTexturePaperBag = 6,
        msoTextureFishFossil = 7,
        msoTextureSand = 8,
        msoTextureGreenMarble = 9,
        msoTextureWhiteMarble = 10,
        msoTextureBrownMarble = 11,
        msoTextureGranite = 12,
        msoTextureNewsprint = 13,
        msoTextureRecycledPaper = 14,
        msoTextureParchment = 15,
        msoTextureStationery = 16,
        msoTextureBlueTissuePaper = 17,
        msoTexturePinkTissuePaper = 18,
        msoTexturePurpleMesh = 19,
        msoTextureBouquet = 20,
        msoTextureCork = 21,
        msoTextureWalnut = 22,
        msoTextureOak = 23,
        msoTextureMediumWood = 24
    } MsoPresetTexture;

    typedef enum {
        msoPatternMixed = -2,
        msoPattern5Percent = 1,
        msoPattern10Percent = 2,
        msoPattern20Percent = 3,
        msoPattern25Percent = 4,
        msoPattern30Percent = 5,
        msoPattern40Percent = 6,
        msoPattern50Percent = 7,
        msoPattern60Percent = 8,
        msoPattern70Percent = 9,
        msoPattern75Percent = 10,
        msoPattern80Percent = 11,
        msoPattern90Percent = 12,
        msoPatternDarkHorizontal = 13,
        msoPatternDarkVertical = 14,
        msoPatternDarkDownwardDiagonal = 15,
        msoPatternDarkUpwardDiagonal = 16,
        msoPatternSmallCheckerBoard = 17,
        msoPatternTrellis = 18,
        msoPatternLightHorizontal = 19,
        msoPatternLightVertical = 20,
        msoPatternLightDownwardDiagonal = 21,
        msoPatternLightUpwardDiagonal = 22,
        msoPatternSmallGrid = 23,
        msoPatternDottedDiamond = 24,
        msoPatternWideDownwardDiagonal = 25,
        msoPatternWideUpwardDiagonal = 26,
        msoPatternDashedUpwardDiagonal = 27,
        msoPatternDashedDownwardDiagonal = 28,
        msoPatternNarrowVertical = 29,
        msoPatternNarrowHorizontal = 30,
        msoPatternDashedVertical = 31,
        msoPatternDashedHorizontal = 32,
        msoPatternLargeConfetti = 33,
        msoPatternLargeGrid = 34,
        msoPatternHorizontalBrick = 35,
        msoPatternLargeCheckerBoard = 36,
        msoPatternSmallConfetti = 37,
        msoPatternZigZag = 38,
        msoPatternSolidDiamond = 39,
        msoPatternDiagonalBrick = 40,
        msoPatternOutlinedDiamond = 41,
        msoPatternPlaid = 42,
        msoPatternSphere = 43,
        msoPatternWeave = 44,
        msoPatternDottedGrid = 45,
        msoPatternDivot = 46,
        msoPatternShingle = 47,
        msoPatternWave = 48
    } MsoPatternType;

    typedef enum {
        msoPresetGradientMixed = -2,
        msoGradientEarlySunset = 1,
        msoGradientLateSunset = 2,
        msoGradientNightfall = 3,
        msoGradientDaybreak = 4,
        msoGradientHorizon = 5,
        msoGradientDesert = 6,
        msoGradientOcean = 7,
        msoGradientCalmWater = 8,
        msoGradientFire = 9,
        msoGradientFog = 10,
        msoGradientMoss = 11,
        msoGradientPeacock = 12,
        msoGradientWheat = 13,
        msoGradientParchment = 14,
        msoGradientMahogany = 15,
        msoGradientRainbow = 16,
        msoGradientRainbowII = 17,
        msoGradientGold = 18,
        msoGradientGoldII = 19,
        msoGradientBrass = 20,
        msoGradientChrome = 21,
        msoGradientChromeII = 22,
        msoGradientSilver = 23,
        msoGradientSapphire = 24
    } MsoPresetGradientType;

    typedef enum {
        msoShadowMixed = -2,
        msoShadow1 = 1,
        msoShadow2 = 2,
        msoShadow3 = 3,
        msoShadow4 = 4,
        msoShadow5 = 5,
        msoShadow6 = 6,
        msoShadow7 = 7,
        msoShadow8 = 8,
        msoShadow9 = 9,
        msoShadow10 = 10,
        msoShadow11 = 11,
        msoShadow12 = 12,
        msoShadow13 = 13,
        msoShadow14 = 14,
        msoShadow15 = 15,
        msoShadow16 = 16,
        msoShadow17 = 17,
        msoShadow18 = 18,
        msoShadow19 = 19,
        msoShadow20 = 20
    } MsoShadowType;

    typedef enum {
        msoTextEffectMixed = -2,
        msoTextEffect1 = 0,
        msoTextEffect2 = 1,
        msoTextEffect3 = 2,
        msoTextEffect4 = 3,
        msoTextEffect5 = 4,
        msoTextEffect6 = 5,
        msoTextEffect7 = 6,
        msoTextEffect8 = 7,
        msoTextEffect9 = 8,
        msoTextEffect10 = 9,
        msoTextEffect11 = 10,
        msoTextEffect12 = 11,
        msoTextEffect13 = 12,
        msoTextEffect14 = 13,
        msoTextEffect15 = 14,
        msoTextEffect16 = 15,
        msoTextEffect17 = 16,
        msoTextEffect18 = 17,
        msoTextEffect19 = 18,
        msoTextEffect20 = 19,
        msoTextEffect21 = 20,
        msoTextEffect22 = 21,
        msoTextEffect23 = 22,
        msoTextEffect24 = 23,
        msoTextEffect25 = 24,
        msoTextEffect26 = 25,
        msoTextEffect27 = 26,
        msoTextEffect28 = 27,
        msoTextEffect29 = 28,
        msoTextEffect30 = 29
    } MsoPresetTextEffect;

    typedef enum {
        msoTextEffectShapeMixed = -2,
        msoTextEffectShapePlainText = 1,
        msoTextEffectShapeStop = 2,
        msoTextEffectShapeTriangleUp = 3,
        msoTextEffectShapeTriangleDown = 4,
        msoTextEffectShapeChevronUp = 5,
        msoTextEffectShapeChevronDown = 6,
        msoTextEffectShapeRingInside = 7,
        msoTextEffectShapeRingOutside = 8,
        msoTextEffectShapeArchUpCurve = 9,
        msoTextEffectShapeArchDownCurve = 10,
        msoTextEffectShapeCircleCurve = 11,
        msoTextEffectShapeButtonCurve = 12,
        msoTextEffectShapeArchUpPour = 13,
        msoTextEffectShapeArchDownPour = 14,
        msoTextEffectShapeCirclePour = 15,
        msoTextEffectShapeButtonPour = 16,
        msoTextEffectShapeCurveUp = 17,
        msoTextEffectShapeCurveDown = 18,
        msoTextEffectShapeCanUp = 19,
        msoTextEffectShapeCanDown = 20,
        msoTextEffectShapeWave1 = 21,
        msoTextEffectShapeWave2 = 22,
        msoTextEffectShapeDoubleWave1 = 23,
        msoTextEffectShapeDoubleWave2 = 24,
        msoTextEffectShapeInflate = 25,
        msoTextEffectShapeDeflate = 26,
        msoTextEffectShapeInflateBottom = 27,
        msoTextEffectShapeDeflateBottom = 28,
        msoTextEffectShapeInflateTop = 29,
        msoTextEffectShapeDeflateTop = 30,
        msoTextEffectShapeDeflateInflate = 31,
        msoTextEffectShapeDeflateInflateDeflate = 32,
        msoTextEffectShapeFadeRight = 33,
        msoTextEffectShapeFadeLeft = 34,
        msoTextEffectShapeFadeUp = 35,
        msoTextEffectShapeFadeDown = 36,
        msoTextEffectShapeSlantUp = 37,
        msoTextEffectShapeSlantDown = 38,
        msoTextEffectShapeCascadeUp = 39,
        msoTextEffectShapeCascadeDown = 40
    } MsoPresetTextEffectShape;

    typedef enum {
        msoTextEffectAlignmentMixed = -2,
        msoTextEffectAlignmentLeft = 1,
        msoTextEffectAlignmentCentered = 2,
        msoTextEffectAlignmentRight = 3,
        msoTextEffectAlignmentLetterJustify = 4,
        msoTextEffectAlignmentWordJustify = 5,
        msoTextEffectAlignmentStretchJustify = 6
    } MsoTextEffectAlignment;

    typedef enum {
        msoPresetLightingDirectionMixed = -2,
        msoLightingTopLeft = 1,
        msoLightingTop = 2,
        msoLightingTopRight = 3,
        msoLightingLeft = 4,
        msoLightingNone = 5,
        msoLightingRight = 6,
        msoLightingBottomLeft = 7,
        msoLightingBottom = 8,
        msoLightingBottomRight = 9
    } MsoPresetLightingDirection;

    typedef enum {
        msoPresetLightingSoftnessMixed = -2,
        msoLightingDim = 1,
        msoLightingNormal = 2,
        msoLightingBright = 3
    } MsoPresetLightingSoftness;

    typedef enum {
        msoPresetMaterialMixed = -2,
        msoMaterialMatte = 1,
        msoMaterialPlastic = 2,
        msoMaterialMetal = 3,
        msoMaterialWireFrame = 4
    } MsoPresetMaterial;

    typedef enum {
        msoPresetExtrusionDirectionMixed = -2,
        msoExtrusionBottomRight = 1,
        msoExtrusionBottom = 2,
        msoExtrusionBottomLeft = 3,
        msoExtrusionRight = 4,
        msoExtrusionNone = 5,
        msoExtrusionLeft = 6,
        msoExtrusionTopRight = 7,
        msoExtrusionTop = 8,
        msoExtrusionTopLeft = 9
    } MsoPresetExtrusionDirection;

    typedef enum {
        msoPresetThreeDFormatMixed = -2,
        msoThreeD1 = 1,
        msoThreeD2 = 2,
        msoThreeD3 = 3,
        msoThreeD4 = 4,
        msoThreeD5 = 5,
        msoThreeD6 = 6,
        msoThreeD7 = 7,
        msoThreeD8 = 8,
        msoThreeD9 = 9,
        msoThreeD10 = 10,
        msoThreeD11 = 11,
        msoThreeD12 = 12,
        msoThreeD13 = 13,
        msoThreeD14 = 14,
        msoThreeD15 = 15,
        msoThreeD16 = 16,
        msoThreeD17 = 17,
        msoThreeD18 = 18,
        msoThreeD19 = 19,
        msoThreeD20 = 20
    } MsoPresetThreeDFormat;

    typedef enum {
        msoExtrusionColorTypeMixed = -2,
        msoExtrusionColorAutomatic = 1,
        msoExtrusionColorCustom = 2
    } MsoExtrusionColorType;

    typedef enum {
        msoAlignLefts = 0,
        msoAlignCenters = 1,
        msoAlignRights = 2,
        msoAlignTops = 3,
        msoAlignMiddles = 4,
        msoAlignBottoms = 5
    } MsoAlignCmd;

    typedef enum {
        msoDistributeHorizontally = 0,
        msoDistributeVertically = 1
    } MsoDistributeCmd;

    typedef enum {
        msoConnectorTypeMixed = -2,
        msoConnectorStraight = 1,
        msoConnectorElbow = 2,
        msoConnectorCurve = 3
    } MsoConnectorType;

    typedef enum {
        msoHorizontalAnchorMixed = -2,
        msoAnchorNone = 1,
        msoAnchorCenter = 2
    } MsoHorizontalAnchor;

    typedef enum {
        msoVerticalAnchorMixed = -2,
        msoAnchorTop = 1,
        msoAnchorTopBaseline = 2,
        msoAnchorMiddle = 3,
        msoAnchorBottom = 4,
        msoAnchorBottomBaseLine = 5
    } MsoVerticalAnchor;

    typedef enum {
        msoOrientationMixed = -2,
        msoOrientationHorizontal = 1,
        msoOrientationVertical = 2
    } MsoOrientation;

    typedef enum {
        msoBringToFront = 0,
        msoSendToBack = 1,
        msoBringForward = 2,
        msoSendBackward = 3,
        msoBringInFrontOfText = 4,
        msoSendBehindText = 5
    } MsoZOrderCmd;

    typedef enum {
        msoSegmentLine = 0,
        msoSegmentCurve = 1
    } MsoSegmentType;

    typedef enum {
        msoEditingAuto = 0,
        msoEditingCorner = 1,
        msoEditingSmooth = 2,
        msoEditingSymmetric = 3
    } MsoEditingType;

    typedef enum {
        msoShapeMixed = -2,
        msoShapeRectangle = 1,
        msoShapeParallelogram = 2,
        msoShapeTrapezoid = 3,
        msoShapeDiamond = 4,
        msoShapeRoundedRectangle = 5,
        msoShapeOctagon = 6,
        msoShapeIsoscelesTriangle = 7,
        msoShapeRightTriangle = 8,
        msoShapeOval = 9,
        msoShapeHexagon = 10,
        msoShapeCross = 11,
        msoShapeRegularPentagon = 12,
        msoShapeCan = 13,
        msoShapeCube = 14,
        msoShapeBevel = 15,
        msoShapeFoldedCorner = 16,
        msoShapeSmileyFace = 17,
        msoShapeDonut = 18,
        msoShapeNoSymbol = 19,
        msoShapeBlockArc = 20,
        msoShapeHeart = 21,
        msoShapeLightningBolt = 22,
        msoShapeSun = 23,
        msoShapeMoon = 24,
        msoShapeArc = 25,
        msoShapeDoubleBracket = 26,
        msoShapeDoubleBrace = 27,
        msoShapePlaque = 28,
        msoShapeLeftBracket = 29,
        msoShapeRightBracket = 30,
        msoShapeLeftBrace = 31,
        msoShapeRightBrace = 32,
        msoShapeRightArrow = 33,
        msoShapeLeftArrow = 34,
        msoShapeUpArrow = 35,
        msoShapeDownArrow = 36,
        msoShapeLeftRightArrow = 37,
        msoShapeUpDownArrow = 38,
        msoShapeQuadArrow = 39,
        msoShapeLeftRightUpArrow = 40,
        msoShapeBentArrow = 41,
        msoShapeUTurnArrow = 42,
        msoShapeLeftUpArrow = 43,
        msoShapeBentUpArrow = 44,
        msoShapeCurvedRightArrow = 45,
        msoShapeCurvedLeftArrow = 46,
        msoShapeCurvedUpArrow = 47,
        msoShapeCurvedDownArrow = 48,
        msoShapeStripedRightArrow = 49,
        msoShapeNotchedRightArrow = 50,
        msoShapePentagon = 51,
        msoShapeChevron = 52,
        msoShapeRightArrowCallout = 53,
        msoShapeLeftArrowCallout = 54,
        msoShapeUpArrowCallout = 55,
        msoShapeDownArrowCallout = 56,
        msoShapeLeftRightArrowCallout = 57,
        msoShapeUpDownArrowCallout = 58,
        msoShapeQuadArrowCallout = 59,
        msoShapeCircularArrow = 60,
        msoShapeFlowchartProcess = 61,
        msoShapeFlowchartAlternateProcess = 62,
        msoShapeFlowchartDecision = 63,
        msoShapeFlowchartData = 64,
        msoShapeFlowchartPredefinedProcess = 65,
        msoShapeFlowchartInternalStorage = 66,
        msoShapeFlowchartDocument = 67,
        msoShapeFlowchartMultidocument = 68,
        msoShapeFlowchartTerminator = 69,
        msoShapeFlowchartPreparation = 70,
        msoShapeFlowchartManualInput = 71,
        msoShapeFlowchartManualOperation = 72,
        msoShapeFlowchartConnector = 73,
        msoShapeFlowchartOffpageConnector = 74,
        msoShapeFlowchartCard = 75,
        msoShapeFlowchartPunchedTape = 76,
        msoShapeFlowchartSummingJunction = 77,
        msoShapeFlowchartOr = 78,
        msoShapeFlowchartCollate = 79,
        msoShapeFlowchartSort = 80,
        msoShapeFlowchartExtract = 81,
        msoShapeFlowchartMerge = 82,
        msoShapeFlowchartStoredData = 83,
        msoShapeFlowchartDelay = 84,
        msoShapeFlowchartSequentialAccessStorage = 85,
        msoShapeFlowchartMagneticDisk = 86,
        msoShapeFlowchartDirectAccessStorage = 87,
        msoShapeFlowchartDisplay = 88,
        msoShapeExplosion1 = 89,
        msoShapeExplosion2 = 90,
        msoShape4pointStar = 91,
        msoShape5pointStar = 92,
        msoShape8pointStar = 93,
        msoShape16pointStar = 94,
        msoShape24pointStar = 95,
        msoShape32pointStar = 96,
        msoShapeUpRibbon = 97,
        msoShapeDownRibbon = 98,
        msoShapeCurvedUpRibbon = 99,
        msoShapeCurvedDownRibbon = 100,
        msoShapeVerticalScroll = 101,
        msoShapeHorizontalScroll = 102,
        msoShapeWave = 103,
        msoShapeDoubleWave = 104,
        msoShapeRectangularCallout = 105,
        msoShapeRoundedRectangularCallout = 106,
        msoShapeOvalCallout = 107,
        msoShapeCloudCallout = 108,
        msoShapeLineCallout1 = 109,
        msoShapeLineCallout2 = 110,
        msoShapeLineCallout3 = 111,
        msoShapeLineCallout4 = 112,
        msoShapeLineCallout1AccentBar = 113,
        msoShapeLineCallout2AccentBar = 114,
        msoShapeLineCallout3AccentBar = 115,
        msoShapeLineCallout4AccentBar = 116,
        msoShapeLineCallout1NoBorder = 117,
        msoShapeLineCallout2NoBorder = 118,
        msoShapeLineCallout3NoBorder = 119,
        msoShapeLineCallout4NoBorder = 120,
        msoShapeLineCallout1BorderandAccentBar = 121,
        msoShapeLineCallout2BorderandAccentBar = 122,
        msoShapeLineCallout3BorderandAccentBar = 123,
        msoShapeLineCallout4BorderandAccentBar = 124,
        msoShapeActionButtonCustom = 125,
        msoShapeActionButtonHome = 126,
        msoShapeActionButtonHelp = 127,
        msoShapeActionButtonInformation = 128,
        msoShapeActionButtonBackorPrevious = 129,
        msoShapeActionButtonForwardorNext = 130,
        msoShapeActionButtonBeginning = 131,
        msoShapeActionButtonEnd = 132,
        msoShapeActionButtonReturn = 133,
        msoShapeActionButtonDocument = 134,
        msoShapeActionButtonSound = 135,
        msoShapeActionButtonMovie = 136,
        msoShapeBalloon = 137,
        msoShapeNotPrimitive = 138
    } MsoAutoShapeType;

    typedef enum {
        msoShapeTypeMixed = -2,
        msoAutoShape = 1,
        msoCallout = 2,
        msoChart = 3,
        msoComment = 4,
        msoFreeform = 5,
        msoGroup = 6,
        msoEmbeddedOLEObject = 7,
        msoFormControl = 8,
        msoLine = 9,
        msoLinkedOLEObject = 10,
        msoLinkedPicture = 11,
        msoOLEControlObject = 12,
        msoPicture = 13,
        msoPlaceholder = 14,
        msoTextEffect = 15,
        msoMedia = 16,
        msoTextBox = 17,
        msoScriptAnchor = 18,
        msoTable = 19,
        msoCanvas = 20,
        msoDiagram = 21
    } MsoShapeType;

    typedef enum {
        msoFlipHorizontal = 0,
        msoFlipVertical = 1
    } MsoFlipCmd;

    typedef enum {
        msoTrue = -1,
        msoFalse = 0,
        msoCTrue = 1,
        msoTriStateToggle = -3,
        msoTriStateMixed = -2
    } MsoTriState;

    typedef enum {
        msoColorTypeMixed = -2,
        msoColorTypeRGB = 1,
        msoColorTypeScheme = 2,
        msoColorTypeCMYK = 3,
        msoColorTypeCMS = 4,
        msoColorTypeInk = 5
    } MsoColorType;

    typedef enum {
        msoPictureMixed = -2,
        msoPictureAutomatic = 1,
        msoPictureGrayscale = 2,
        msoPictureBlackAndWhite = 3,
        msoPictureWatermark = 4
    } MsoPictureColorType;

    typedef enum {
        msoCalloutAngleMixed = -2,
        msoCalloutAngleAutomatic = 1,
        msoCalloutAngle30 = 2,
        msoCalloutAngle45 = 3,
        msoCalloutAngle60 = 4,
        msoCalloutAngle90 = 5
    } MsoCalloutAngleType;

    typedef enum {
        msoCalloutDropMixed = -2,
        msoCalloutDropCustom = 1,
        msoCalloutDropTop = 2,
        msoCalloutDropCenter = 3,
        msoCalloutDropBottom = 4
    } MsoCalloutDropType;

    typedef enum {
        msoCalloutMixed = -2,
        msoCalloutOne = 1,
        msoCalloutTwo = 2,
        msoCalloutThree = 3,
        msoCalloutFour = 4
    } MsoCalloutType;

    typedef enum {
        msoBlackWhiteMixed = -2,
        msoBlackWhiteAutomatic = 1,
        msoBlackWhiteGrayScale = 2,
        msoBlackWhiteLightGrayScale = 3,
        msoBlackWhiteInverseGrayScale = 4,
        msoBlackWhiteGrayOutline = 5,
        msoBlackWhiteBlackTextAndLine = 6,
        msoBlackWhiteHighContrast = 7,
        msoBlackWhiteBlack = 8,
        msoBlackWhiteWhite = 9,
        msoBlackWhiteDontShow = 10
    } MsoBlackWhiteMode;

    typedef enum {
        msoIntegerMixed = 32768,
        msoSingleMixed = INT_MIN
        // msoSingleMixed = -2147483648
    } MsoMixedType;

    typedef enum {
        msoTextOrientationMixed = -2,
        msoTextOrientationHorizontal = 1,
        msoTextOrientationUpward = 2,
        msoTextOrientationDownward = 3,
        msoTextOrientationVerticalFarEast = 4,
        msoTextOrientationVertical = 5,
        msoTextOrientationHorizontalRotatedFarEast = 6
    } MsoTextOrientation;

    typedef enum {
        msoScaleFromTopLeft = 0,
        msoScaleFromMiddle = 1,
        msoScaleFromBottomRight = 2
    } MsoScaleFrom;

    typedef enum {
        msoBarLeft = 0,
        msoBarTop = 1,
        msoBarRight = 2,
        msoBarBottom = 3,
        msoBarFloating = 4,
        msoBarPopup = 5,
        msoBarMenuBar = 6
    } MsoBarPosition;

    typedef enum {
        msoBarNoProtection = 0,
        msoBarNoCustomize = 1,
        msoBarNoResize = 2,
        msoBarNoMove = 4,
        msoBarNoChangeVisible = 8,
        msoBarNoChangeDock = 16,
        msoBarNoVerticalDock = 32,
        msoBarNoHorizontalDock = 64
    } MsoBarProtection;

    typedef enum {
        msoBarTypeNormal = 0,
        msoBarTypeMenuBar = 1,
        msoBarTypePopup = 2
    } MsoBarType;

    typedef enum {
        msoControlCustom = 0,
        msoControlButton = 1,
        msoControlEdit = 2,
        msoControlDropdown = 3,
        msoControlComboBox = 4,
        msoControlButtonDropdown = 5,
        msoControlSplitDropdown = 6,
        msoControlOCXDropdown = 7,
        msoControlGenericDropdown = 8,
        msoControlGraphicDropdown = 9,
        msoControlPopup = 10,
        msoControlGraphicPopup = 11,
        msoControlButtonPopup = 12,
        msoControlSplitButtonPopup = 13,
        msoControlSplitButtonMRUPopup = 14,
        msoControlLabel = 15,
        msoControlExpandingGrid = 16,
        msoControlSplitExpandingGrid = 17,
        msoControlGrid = 18,
        msoControlGauge = 19,
        msoControlGraphicCombo = 20,
        msoControlPane = 21,
        msoControlActiveX = 22,
        msoControlSpinner = 23,
        msoControlLabelEx = 24,
        msoControlWorkPane = 25,
        msoControlAutoCompleteCombo = 26
    } MsoControlType;

    typedef enum {
        msoButtonUp = 0,
        msoButtonDown = -1,
        msoButtonMixed = 2
    } MsoButtonState;

    typedef enum {
        msoControlOLEUsageNeither = 0,
        msoControlOLEUsageServer = 1,
        msoControlOLEUsageClient = 2,
        msoControlOLEUsageBoth = 3
    } MsoControlOLEUsage;

    typedef enum {
        msoButtonWrapText = 4,
        msoButtonTextBelow = 8
    } MsoButtonStyleHidden;

    typedef enum {
        msoButtonAutomatic = 0,
        msoButtonIcon = 1,
        msoButtonCaption = 2,
        msoButtonIconAndCaption = 3,
        msoButtonIconAndWrapCaption = 7,
        msoButtonIconAndCaptionBelow = 11,
        msoButtonWrapCaption = 14,
        msoButtonIconAndWrapCaptionBelow = 15
    } MsoButtonStyle;

    typedef enum {
        msoComboNormal = 0,
        msoComboLabel = 1
    } MsoComboStyle;

    typedef enum {
        msoOLEMenuGroupNone = -1,
        msoOLEMenuGroupFile = 0,
        msoOLEMenuGroupEdit = 1,
        msoOLEMenuGroupContainer = 2,
        msoOLEMenuGroupObject = 3,
        msoOLEMenuGroupWindow = 4,
        msoOLEMenuGroupHelp = 5
    } MsoOLEMenuGroup;

    typedef enum {
        msoMenuAnimationNone = 0,
        msoMenuAnimationRandom = 1,
        msoMenuAnimationUnfold = 2,
        msoMenuAnimationSlide = 3
    } MsoMenuAnimation;

    typedef enum {
        msoBarRowFirst = 0,
        msoBarRowLast = -1
    } MsoBarRow;

    typedef enum {
        msoCommandBarButtonHyperlinkNone = 0,
        msoCommandBarButtonHyperlinkOpen = 1,
        msoCommandBarButtonHyperlinkInsertPicture = 2
    } MsoCommandBarButtonHyperlinkType;

    typedef enum {
        msoHyperlinkRange = 0,
        msoHyperlinkShape = 1,
        msoHyperlinkInlineShape = 2
    } MsoHyperlinkType;

    typedef enum {
        msoMethodGet = 0,
        msoMethodPost = 1
    } MsoExtraInfoMethod;

    typedef enum {
        msoAnimationIdle = 1,
        msoAnimationGreeting = 2,
        msoAnimationGoodbye = 3,
        msoAnimationBeginSpeaking = 4,
        msoAnimationRestPose = 5,
        msoAnimationCharacterSuccessMajor = 6,
        msoAnimationGetAttentionMajor = 11,
        msoAnimationGetAttentionMinor = 12,
        msoAnimationSearching = 13,
        msoAnimationPrinting = 18,
        msoAnimationGestureRight = 19,
        msoAnimationWritingNotingSomething = 22,
        msoAnimationWorkingAtSomething = 23,
        msoAnimationThinking = 24,
        msoAnimationSendingMail = 25,
        msoAnimationListensToComputer = 26,
        msoAnimationDisappear = 31,
        msoAnimationAppear = 32,
        msoAnimationGetArtsy = 100,
        msoAnimationGetTechy = 101,
        msoAnimationGetWizardy = 102,
        msoAnimationCheckingSomething = 103,
        msoAnimationLookDown = 104,
        msoAnimationLookDownLeft = 105,
        msoAnimationLookDownRight = 106,
        msoAnimationLookLeft = 107,
        msoAnimationLookRight = 108,
        msoAnimationLookUp = 109,
        msoAnimationLookUpLeft = 110,
        msoAnimationLookUpRight = 111,
        msoAnimationSaving = 112,
        msoAnimationGestureDown = 113,
        msoAnimationGestureLeft = 114,
        msoAnimationGestureUp = 115,
        msoAnimationEmptyTrash = 116
    } MsoAnimationType;

    typedef enum {
        msoButtonSetNone = 0,
        msoButtonSetOK = 1,
        msoButtonSetCancel = 2,
        msoButtonSetOkCancel = 3,
        msoButtonSetYesNo = 4,
        msoButtonSetYesNoCancel = 5,
        msoButtonSetBackClose = 6,
        msoButtonSetNextClose = 7,
        msoButtonSetBackNextClose = 8,
        msoButtonSetRetryCancel = 9,
        msoButtonSetAbortRetryIgnore = 10,
        msoButtonSetSearchClose = 11,
        msoButtonSetBackNextSnooze = 12,
        msoButtonSetTipsOptionsClose = 13,
        msoButtonSetYesAllNoCancel = 14
    } MsoButtonSetType;

    typedef enum {
        msoIconNone = 0,
        msoIconAlert = 2,
        msoIconTip = 3,
        msoIconAlertInfo = 4,
        msoIconAlertWarning = 5,
        msoIconAlertQuery = 6,
        msoIconAlertCritical = 7
    } MsoIconType;

    typedef enum {
        msoBalloonTypeButtons = 0,
        msoBalloonTypeBullets = 1,
        msoBalloonTypeNumbers = 2
    } MsoBalloonType;

    typedef enum {
        msoModeModal = 0,
        msoModeAutoDown = 1,
        msoModeModeless = 2
    } MsoModeType;

    typedef enum {
        msoBalloonErrorNone = 0,
        msoBalloonErrorOther = 1,
        msoBalloonErrorTooBig = 2,
        msoBalloonErrorOutOfMemory = 3,
        msoBalloonErrorBadPictureRef = 4,
        msoBalloonErrorBadReference = 5,
        msoBalloonErrorButtonlessModal = 6,
        msoBalloonErrorButtonModeless = 7,
        msoBalloonErrorBadCharacter = 8,
        msoBalloonErrorCOMFailure = 9,
        msoBalloonErrorCharNotTopmostForModal = 10,
        msoBalloonErrorTooManyControls = 11
    } MsoBalloonErrorType;

    typedef enum {
        msoWizardActInactive = 0,
        msoWizardActActive = 1,
        msoWizardActSuspend = 2,
        msoWizardActResume = 3
    } MsoWizardActType;

    typedef enum {
        msoWizardMsgLocalStateOn = 1,
        msoWizardMsgLocalStateOff = 2,
        msoWizardMsgShowHelp = 3,
        msoWizardMsgSuspending = 4,
        msoWizardMsgResuming = 5
    } MsoWizardMsgType;

    typedef enum {
        msoBalloonButtonYesToAll = -15,
        msoBalloonButtonOptions = -14,
        msoBalloonButtonTips = -13,
        msoBalloonButtonClose = -12,
        msoBalloonButtonSnooze = -11,
        msoBalloonButtonSearch = -10,
        msoBalloonButtonIgnore = -9,
        msoBalloonButtonAbort = -8,
        msoBalloonButtonRetry = -7,
        msoBalloonButtonNext = -6,
        msoBalloonButtonBack = -5,
        msoBalloonButtonNo = -4,
        msoBalloonButtonYes = -3,
        msoBalloonButtonCancel = -2,
        msoBalloonButtonOK = -1,
        msoBalloonButtonNull = 0
    } MsoBalloonButtonType;

    typedef enum {
        offPropertyTypeNumber = 1,
        offPropertyTypeBoolean = 2,
        offPropertyTypeDate = 3,
        offPropertyTypeString = 4,
        offPropertyTypeFloat = 5
    } DocProperties;

    typedef enum {
        msoPropertyTypeNumber = 1,
        msoPropertyTypeBoolean = 2,
        msoPropertyTypeDate = 3,
        msoPropertyTypeString = 4,
        msoPropertyTypeFloat = 5
    } MsoDocProperties;

    typedef enum {
        msoLanguageIDInstall = 1,
        msoLanguageIDUI = 2,
        msoLanguageIDHelp = 3,
        msoLanguageIDExeMode = 4,
        msoLanguageIDUIPrevious = 5
    } MsoAppLanguageID;

    typedef enum {
        MsoFarEastLineBreakLanguageJapanese = 1041,
        MsoFarEastLineBreakLanguageKorean = 1042,
        MsoFarEastLineBreakLanguageSimplifiedChinese = 2052,
        MsoFarEastLineBreakLanguageTraditionalChinese = 1028
    } MsoFarEastLineBreakLanguageID;

    typedef enum {
        msoFeatureInstallNone = 0,
        msoFeatureInstallOnDemand = 1,
        msoFeatureInstallOnDemandWithUI = 2
    } MsoFeatureInstall;


    typedef enum {
        msoScriptLanguageJava = 1,
        msoScriptLanguageVisualBasic = 2,
        msoScriptLanguageASP = 3,
        msoScriptLanguageOther = 4
    } MsoScriptLanguage;

    typedef enum {
        msoScriptLocationInHead = 1,
        msoScriptLocationInBody = 2
    } MsoScriptLocation;


    typedef enum {
        msoOptionsNew = 1,
        msoOptionsAdd = 2,
        msoOptionsWithin = 3
    } MsoFileFindOptions;

    typedef enum {
        msoViewFileInfo = 1,
        msoViewPreview = 2,
        msoViewSummaryInfo = 3
    } MsoFileFindView;

    typedef enum {
        msoFileFindSortbyAuthor = 1,
        msoFileFindSortbyDateCreated = 2,
        msoFileFindSortbyLastSavedBy = 3,
        msoFileFindSortbyDateSaved = 4,
        msoFileFindSortbyFileName = 5,
        msoFileFindSortbySize = 6,
        msoFileFindSortbyTitle = 7
    } MsoFileFindSortBy;

    typedef enum {
        msoListbyName = 1,
        msoListbyTitle = 2
    } MsoFileFindListBy;

    typedef enum {
        msoLastModifiedYesterday = 1,
        msoLastModifiedToday = 2,
        msoLastModifiedLastWeek = 3,
        msoLastModifiedThisWeek = 4,
        msoLastModifiedLastMonth = 5,
        msoLastModifiedThisMonth = 6,
        msoLastModifiedAnyTime = 7
    } MsoLastModified;

    typedef enum {
        msoSortByFileName = 1,
        msoSortBySize = 2,
        msoSortByFileType = 3,
        msoSortByLastModified = 4,
        msoSortByNone = 5
    } MsoSortBy;

    typedef enum {
        msoSortOrderAscending = 1,
        msoSortOrderDescending = 2
    } MsoSortOrder;

    typedef enum {
        msoConnectorAnd = 1,
        msoConnectorOr = 2
    } MsoConnector;

    typedef enum {
        msoConditionFileTypeAllFiles = 1,
        msoConditionFileTypeOfficeFiles = 2,
        msoConditionFileTypeWordDocuments = 3,
        msoConditionFileTypeExcelWorkbooks = 4,
        msoConditionFileTypePowerPointPresentations = 5,
        msoConditionFileTypeBinders = 6,
        msoConditionFileTypeDatabases = 7,
        msoConditionFileTypeTemplates = 8,
        msoConditionIncludes = 9,
        msoConditionIncludesPhrase = 10,
        msoConditionBeginsWith = 11,
        msoConditionEndsWith = 12,
        msoConditionIncludesNearEachOther = 13,
        msoConditionIsExactly = 14,
        msoConditionIsNot = 15,
        msoConditionYesterday = 16,
        msoConditionToday = 17,
        msoConditionTomorrow = 18,
        msoConditionLastWeek = 19,
        msoConditionThisWeek = 20,
        msoConditionNextWeek = 21,
        msoConditionLastMonth = 22,
        msoConditionThisMonth = 23,
        msoConditionNextMonth = 24,
        msoConditionAnytime = 25,
        msoConditionAnytimeBetween = 26,
        msoConditionOn = 27,
        msoConditionOnOrAfter = 28,
        msoConditionOnOrBefore = 29,
        msoConditionInTheNext = 30,
        msoConditionInTheLast = 31,
        msoConditionEquals = 32,
        msoConditionDoesNotEqual = 33,
        msoConditionAnyNumberBetween = 34,
        msoConditionAtMost = 35,
        msoConditionAtLeast = 36,
        msoConditionMoreThan = 37,
        msoConditionLessThan = 38,
        msoConditionIsYes = 39,
        msoConditionIsNo = 40,
        msoConditionIncludesFormsOf = 41,
        msoConditionFreeText = 42,
        msoConditionFileTypeOutlookItems = 43,
        msoConditionFileTypeMailItem = 44,
        msoConditionFileTypeCalendarItem = 45,
        msoConditionFileTypeContactItem = 46,
        msoConditionFileTypeNoteItem = 47,
        msoConditionFileTypeJournalItem = 48,
        msoConditionFileTypeTaskItem = 49,
        msoConditionFileTypePhotoDrawFiles = 50,
        msoConditionFileTypeDataConnectionFiles = 51,
        msoConditionFileTypePublisherFiles = 52,
        msoConditionFileTypeProjectFiles = 53,
        msoConditionFileTypeDocumentImagingFiles = 54,
        msoConditionFileTypeVisioFiles = 55,
        msoConditionFileTypeDesignerFiles = 56,
        msoConditionFileTypeWebPages = 57,
        msoConditionEqualsLow = 58,
        msoConditionEqualsNormal = 59,
        msoConditionEqualsHigh = 60,
        msoConditionNotEqualToLow = 61,
        msoConditionNotEqualToNormal = 62,
        msoConditionNotEqualToHigh = 63,
        msoConditionEqualsNotStarted = 64,
        msoConditionEqualsInProgress = 65,
        msoConditionEqualsCompleted = 66,
        msoConditionEqualsWaitingForSomeoneElse = 67,
        msoConditionEqualsDeferred = 68,
        msoConditionNotEqualToNotStarted = 69,
        msoConditionNotEqualToInProgress = 70,
        msoConditionNotEqualToCompleted = 71,
        msoConditionNotEqualToWaitingForSomeoneElse = 72,
        msoConditionNotEqualToDeferred = 73
    } MsoCondition;

    typedef enum {
        msoFileTypeAllFiles = 1,
        msoFileTypeOfficeFiles = 2,
        msoFileTypeWordDocuments = 3,
        msoFileTypeExcelWorkbooks = 4,
        msoFileTypePowerPointPresentations = 5,
        msoFileTypeBinders = 6,
        msoFileTypeDatabases = 7,
        msoFileTypeTemplates = 8,
        msoFileTypeOutlookItems = 9,
        msoFileTypeMailItem = 10,
        msoFileTypeCalendarItem = 11,
        msoFileTypeContactItem = 12,
        msoFileTypeNoteItem = 13,
        msoFileTypeJournalItem = 14,
        msoFileTypeTaskItem = 15,
        msoFileTypePhotoDrawFiles = 16,
        msoFileTypeDataConnectionFiles = 17,
        msoFileTypePublisherFiles = 18,
        msoFileTypeProjectFiles = 19,
        msoFileTypeDocumentImagingFiles = 20,
        msoFileTypeVisioFiles = 21,
        msoFileTypeDesignerFiles = 22,
        msoFileTypeWebPages = 23
    } MsoFileType;


    typedef enum {
        msoLanguageIDMixed = -2,
        msoLanguageIDNone = 0,
        msoLanguageIDNoProofing = 1024,
        msoLanguageIDAfrikaans = 1078,
        msoLanguageIDAlbanian = 1052,
        msoLanguageIDAmharic = 1118,
        msoLanguageIDArabicAlgeria = 5121,
        msoLanguageIDArabicBahrain = 15361,
        msoLanguageIDArabicEgypt = 3073,
        msoLanguageIDArabicIraq = 2049,
        msoLanguageIDArabicJordan = 11265,
        msoLanguageIDArabicKuwait = 13313,
        msoLanguageIDArabicLebanon = 12289,
        msoLanguageIDArabicLibya = 4097,
        msoLanguageIDArabicMorocco = 6145,
        msoLanguageIDArabicOman = 8193,
        msoLanguageIDArabicQatar = 16385,
        msoLanguageIDArabic = 1025,
        msoLanguageIDArabicSyria = 10241,
        msoLanguageIDArabicTunisia = 7169,
        msoLanguageIDArabicUAE = 14337,
        msoLanguageIDArabicYemen = 9217,
        msoLanguageIDArmenian = 1067,
        msoLanguageIDAssamese = 1101,
        msoLanguageIDAzeriCyrillic = 2092,
        msoLanguageIDAzeriLatin = 1068,
        msoLanguageIDBasque = 1069,
        msoLanguageIDByelorussian = 1059,
        msoLanguageIDBengali = 1093,
        msoLanguageIDBulgarian = 1026,
        msoLanguageIDBurmese = 1109,
        msoLanguageIDCatalan = 1027,
        msoLanguageIDChineseHongKongSAR = 3076,
        msoLanguageIDChineseMacaoSAR = 5124,
        msoLanguageIDSimplifiedChinese = 2052,
        msoLanguageIDChineseSingapore = 4100,
        msoLanguageIDTraditionalChinese = 1028,
        msoLanguageIDCherokee = 1116,
        msoLanguageIDCroatian = 1050,
        msoLanguageIDCzech = 1029,
        msoLanguageIDDanish = 1030,
        msoLanguageIDDivehi = 1125,
        msoLanguageIDBelgianDutch = 2067,
        msoLanguageIDDutch = 1043,
        msoLanguageIDDzongkhaBhutan = 2129,
        msoLanguageIDEdo = 1126,
        msoLanguageIDEnglishAUS = 3081,
        msoLanguageIDEnglishBelize = 10249,
        msoLanguageIDEnglishCanadian = 4105,
        msoLanguageIDEnglishCaribbean = 9225,
        msoLanguageIDEnglishIndonesia = 14345,
        msoLanguageIDEnglishIreland = 6153,
        msoLanguageIDEnglishJamaica = 8201,
        msoLanguageIDEnglishNewZealand = 5129,
        msoLanguageIDEnglishPhilippines = 13321,
        msoLanguageIDEnglishSouthAfrica = 7177,
        msoLanguageIDEnglishTrinidadTobago = 11273,
        msoLanguageIDEnglishUK = 2057,
        msoLanguageIDEnglishUS = 1033,
        msoLanguageIDEnglishZimbabwe = 12297,
        msoLanguageIDEstonian = 1061,
        msoLanguageIDFaeroese = 1080,
        msoLanguageIDFarsi = 1065,
        msoLanguageIDFilipino = 1124,
        msoLanguageIDFinnish = 1035,
        msoLanguageIDBelgianFrench = 2060,
        msoLanguageIDFrenchCameroon = 11276,
        msoLanguageIDFrenchCanadian = 3084,
        msoLanguageIDFrenchCotedIvoire = 12300,
        msoLanguageIDFrench = 1036,
        msoLanguageIDFrenchHaiti = 15372,
        msoLanguageIDFrenchLuxembourg = 5132,
        msoLanguageIDFrenchMali = 13324,
        msoLanguageIDFrenchMonaco = 6156,
        msoLanguageIDFrenchMorocco = 14348,
        msoLanguageIDFrenchReunion = 8204,
        msoLanguageIDFrenchSenegal = 10252,
        msoLanguageIDSwissFrench = 4108,
        msoLanguageIDFrenchWestIndies = 7180,
        msoLanguageIDFrenchZaire = 9228,
        msoLanguageIDFrisianNetherlands = 1122,
        msoLanguageIDFulfulde = 1127,
        msoLanguageIDGaelicIreland = 2108,
        msoLanguageIDGaelicScotland = 1084,
        msoLanguageIDGalician = 1110,
        msoLanguageIDGeorgian = 1079,
        msoLanguageIDGermanAustria = 3079,
        msoLanguageIDGerman = 1031,
        msoLanguageIDGermanLiechtenstein = 5127,
        msoLanguageIDGermanLuxembourg = 4103,
        msoLanguageIDSwissGerman = 2055,
        msoLanguageIDGreek = 1032,
        msoLanguageIDGuarani = 1140,
        msoLanguageIDGujarati = 1095,
        msoLanguageIDHausa = 1128,
        msoLanguageIDHawaiian = 1141,
        msoLanguageIDHebrew = 1037,
        msoLanguageIDHindi = 1081,
        msoLanguageIDHungarian = 1038,
        msoLanguageIDIbibio = 1129,
        msoLanguageIDIcelandic = 1039,
        msoLanguageIDIgbo = 1136,
        msoLanguageIDIndonesian = 1057,
        msoLanguageIDInuktitut = 1117,
        msoLanguageIDItalian = 1040,
        msoLanguageIDSwissItalian = 2064,
        msoLanguageIDJapanese = 1041,
        msoLanguageIDKannada = 1099,
        msoLanguageIDKanuri = 1137,
        msoLanguageIDKashmiri = 1120,
        msoLanguageIDKashmiriDevanagari = 2144,
        msoLanguageIDKazakh = 1087,
        msoLanguageIDKhmer = 1107,
        msoLanguageIDKirghiz = 1088,
        msoLanguageIDKonkani = 1111,
        msoLanguageIDKorean = 1042,
        msoLanguageIDKyrgyz = 1088,
        msoLanguageIDLatin = 1142,
        msoLanguageIDLao = 1108,
        msoLanguageIDLatvian = 1062,
        msoLanguageIDLithuanian = 1063,
        msoLanguageIDMacedonian = 1071,
        msoLanguageIDMalaysian = 1086,
        msoLanguageIDMalayBruneiDarussalam = 2110,
        msoLanguageIDMalayalam = 1100,
        msoLanguageIDMaltese = 1082,
        msoLanguageIDManipuri = 1112,
        msoLanguageIDMarathi = 1102,
        msoLanguageIDMongolian = 1104,
        msoLanguageIDNepali = 1121,
        msoLanguageIDNorwegianBokmol = 1044,
        msoLanguageIDNorwegianNynorsk = 2068,
        msoLanguageIDOriya = 1096,
        msoLanguageIDOromo = 1138,
        msoLanguageIDPashto = 1123,
        msoLanguageIDPolish = 1045,
        msoLanguageIDBrazilianPortuguese = 1046,
        msoLanguageIDPortuguese = 2070,
        msoLanguageIDPunjabi = 1094,
        msoLanguageIDRhaetoRomanic = 1047,
        msoLanguageIDRomanianMoldova = 2072,
        msoLanguageIDRomanian = 1048,
        msoLanguageIDRussianMoldova = 2073,
        msoLanguageIDRussian = 1049,
        msoLanguageIDSamiLappish = 1083,
        msoLanguageIDSanskrit = 1103,
        msoLanguageIDSerbianCyrillic = 3098,
        msoLanguageIDSerbianLatin = 2074,
        msoLanguageIDSesotho = 1072,
        msoLanguageIDSindhi = 1113,
        msoLanguageIDSindhiPakistan = 2137,
        msoLanguageIDSinhalese = 1115,
        msoLanguageIDSlovak = 1051,
        msoLanguageIDSlovenian = 1060,
        msoLanguageIDSomali = 1143,
        msoLanguageIDSorbian = 1070,
        msoLanguageIDSpanishArgentina = 11274,
        msoLanguageIDSpanishBolivia = 16394,
        msoLanguageIDSpanishChile = 13322,
        msoLanguageIDSpanishColombia = 9226,
        msoLanguageIDSpanishCostaRica = 5130,
        msoLanguageIDSpanishDominicanRepublic = 7178,
        msoLanguageIDSpanishEcuador = 12298,
        msoLanguageIDSpanishElSalvador = 17418,
        msoLanguageIDSpanishGuatemala = 4106,
        msoLanguageIDSpanishHonduras = 18442,
        msoLanguageIDMexicanSpanish = 2058,
        msoLanguageIDSpanishNicaragua = 19466,
        msoLanguageIDSpanishPanama = 6154,
        msoLanguageIDSpanishParaguay = 15370,
        msoLanguageIDSpanishPeru = 10250,
        msoLanguageIDSpanishPuertoRico = 20490,
        msoLanguageIDSpanishModernSort = 3082,
        msoLanguageIDSpanish = 1034,
        msoLanguageIDSpanishUruguay = 14346,
        msoLanguageIDSpanishVenezuela = 8202,
        msoLanguageIDSutu = 1072,
        msoLanguageIDSwahili = 1089,
        msoLanguageIDSwedishFinland = 2077,
        msoLanguageIDSwedish = 1053,
        msoLanguageIDSyriac = 1114,
        msoLanguageIDTajik = 1064,
        msoLanguageIDTamil = 1097,
        msoLanguageIDTamazight = 1119,
        msoLanguageIDTamazightLatin = 2143,
        msoLanguageIDTatar = 1092,
        msoLanguageIDTelugu = 1098,
        msoLanguageIDThai = 1054,
        msoLanguageIDTibetan = 1105,
        msoLanguageIDTigrignaEthiopic = 1139,
        msoLanguageIDTigrignaEritrea = 2163,
        msoLanguageIDTsonga = 1073,
        msoLanguageIDTswana = 1074,
        msoLanguageIDTurkish = 1055,
        msoLanguageIDTurkmen = 1090,
        msoLanguageIDUkrainian = 1058,
        msoLanguageIDUrdu = 1056,
        msoLanguageIDUzbekCyrillic = 2115,
        msoLanguageIDUzbekLatin = 1091,
        msoLanguageIDVenda = 1075,
        msoLanguageIDVietnamese = 1066,
        msoLanguageIDWelsh = 1106,
        msoLanguageIDXhosa = 1076,
        msoLanguageIDYi = 1144,
        msoLanguageIDYiddish = 1085,
        msoLanguageIDYoruba = 1130,
        msoLanguageIDZulu = 1077
    } MsoLanguageID;

    typedef enum {
        msoScreenSize544x376 = 0,
        msoScreenSize640x480 = 1,
        msoScreenSize720x512 = 2,
        msoScreenSize800x600 = 3,
        msoScreenSize1024x768 = 4,
        msoScreenSize1152x882 = 5,
        msoScreenSize1152x900 = 6,
        msoScreenSize1280x1024 = 7,
        msoScreenSize1600x1200 = 8,
        msoScreenSize1800x1440 = 9,
        msoScreenSize1920x1200 = 10
    } MsoScreenSize;

    typedef enum {
        msoCharacterSetArabic = 1,
        msoCharacterSetCyrillic = 2,
        msoCharacterSetEnglishWesternEuropeanOtherLatinScript = 3,
        msoCharacterSetGreek = 4,
        msoCharacterSetHebrew = 5,
        msoCharacterSetJapanese = 6,
        msoCharacterSetKorean = 7,
        msoCharacterSetMultilingualUnicode = 8,
        msoCharacterSetSimplifiedChinese = 9,
        msoCharacterSetThai = 10,
        msoCharacterSetTraditionalChinese = 11,
        msoCharacterSetVietnamese = 12
    } MsoCharacterSet;

    typedef enum {
        msoEncodingThai = 874,
        msoEncodingJapaneseShiftJIS = 932,
        msoEncodingSimplifiedChineseGBK = 936,
        msoEncodingKorean = 949,
        msoEncodingTraditionalChineseBig5 = 950,
        msoEncodingUnicodeLittleEndian = 1200,
        msoEncodingUnicodeBigEndian = 1201,
        msoEncodingCentralEuropean = 1250,
        msoEncodingCyrillic = 1251,
        msoEncodingWestern = 1252,
        msoEncodingGreek = 1253,
        msoEncodingTurkish = 1254,
        msoEncodingHebrew = 1255,
        msoEncodingArabic = 1256,
        msoEncodingBaltic = 1257,
        msoEncodingVietnamese = 1258,
        msoEncodingAutoDetect = 50001,
        msoEncodingJapaneseAutoDetect = 50932,
        msoEncodingSimplifiedChineseAutoDetect = 50936,
        msoEncodingKoreanAutoDetect = 50949,
        msoEncodingTraditionalChineseAutoDetect = 50950,
        msoEncodingCyrillicAutoDetect = 51251,
        msoEncodingGreekAutoDetect = 51253,
        msoEncodingArabicAutoDetect = 51256,
        msoEncodingISO88591Latin1 = 28591,
        msoEncodingISO88592CentralEurope = 28592,
        msoEncodingISO88593Latin3 = 28593,
        msoEncodingISO88594Baltic = 28594,
        msoEncodingISO88595Cyrillic = 28595,
        msoEncodingISO88596Arabic = 28596,
        msoEncodingISO88597Greek = 28597,
        msoEncodingISO88598Hebrew = 28598,
        msoEncodingISO88599Turkish = 28599,
        msoEncodingISO885915Latin9 = 28605,
        msoEncodingISO2022JPNoHalfwidthKatakana = 50220,
        msoEncodingISO2022JPJISX02021984 = 50221,
        msoEncodingISO2022JPJISX02011989 = 50222,
        msoEncodingISO2022KR = 50225,
        msoEncodingISO2022CNTraditionalChinese = 50227,
        msoEncodingISO2022CNSimplifiedChinese = 50229,
        msoEncodingMacRoman = 10000,
        msoEncodingMacJapanese = 10001,
        msoEncodingMacTraditionalChineseBig5 = 10002,
        msoEncodingMacKorean = 10003,
        msoEncodingMacArabic = 10004,
        msoEncodingMacHebrew = 10005,
        msoEncodingMacGreek1 = 10006,
        msoEncodingMacCyrillic = 10007,
        msoEncodingMacSimplifiedChineseGB2312 = 10008,
        msoEncodingMacRomania = 10010,
        msoEncodingMacUkraine = 10017,
        msoEncodingMacLatin2 = 10029,
        msoEncodingMacIcelandic = 10079,
        msoEncodingMacTurkish = 10081,
        msoEncodingMacCroatia = 10082,
        msoEncodingEBCDICUSCanada = 37,
        msoEncodingEBCDICInternational = 500,
        msoEncodingEBCDICMultilingualROECELatin2 = 870,
        msoEncodingEBCDICGreekModern = 875,
        msoEncodingEBCDICTurkishLatin5 = 1026,
        msoEncodingEBCDICGermany = 20273,
        msoEncodingEBCDICDenmarkNorway = 20277,
        msoEncodingEBCDICFinlandSweden = 20278,
        msoEncodingEBCDICItaly = 20280,
        msoEncodingEBCDICLatinAmericaSpain = 20284,
        msoEncodingEBCDICUnitedKingdom = 20285,
        msoEncodingEBCDICJapaneseKatakanaExtended = 20290,
        msoEncodingEBCDICFrance = 20297,
        msoEncodingEBCDICArabic = 20420,
        msoEncodingEBCDICGreek = 20423,
        msoEncodingEBCDICHebrew = 20424,
        msoEncodingEBCDICKoreanExtended = 20833,
        msoEncodingEBCDICThai = 20838,
        msoEncodingEBCDICIcelandic = 20871,
        msoEncodingEBCDICTurkish = 20905,
        msoEncodingEBCDICRussian = 20880,
        msoEncodingEBCDICSerbianBulgarian = 21025,
        msoEncodingEBCDICJapaneseKatakanaExtendedAndJapanese = 50930,
        msoEncodingEBCDICUSCanadaAndJapanese = 50931,
        msoEncodingEBCDICKoreanExtendedAndKorean = 50933,
        msoEncodingEBCDICSimplifiedChineseExtendedAndSimplifiedChinese = 50935,
        msoEncodingEBCDICUSCanadaAndTraditionalChinese = 50937,
        msoEncodingEBCDICJapaneseLatinExtendedAndJapanese = 50939,
        msoEncodingOEMUnitedStates = 437,
        msoEncodingOEMGreek437G = 737,
        msoEncodingOEMBaltic = 775,
        msoEncodingOEMMultilingualLatinI = 850,
        msoEncodingOEMMultilingualLatinII = 852,
        msoEncodingOEMCyrillic = 855,
        msoEncodingOEMTurkish = 857,
        msoEncodingOEMPortuguese = 860,
        msoEncodingOEMIcelandic = 861,
        msoEncodingOEMHebrew = 862,
        msoEncodingOEMCanadianFrench = 863,
        msoEncodingOEMArabic = 864,
        msoEncodingOEMNordic = 865,
        msoEncodingOEMCyrillicII = 866,
        msoEncodingOEMModernGreek = 869,
        msoEncodingEUCJapanese = 51932,
        msoEncodingEUCChineseSimplifiedChinese = 51936,
        msoEncodingEUCKorean = 51949,
        msoEncodingEUCTaiwaneseTraditionalChinese = 51950,
        msoEncodingISCIIDevanagari = 57002,
        msoEncodingISCIIBengali = 57003,
        msoEncodingISCIITamil = 57004,
        msoEncodingISCIITelugu = 57005,
        msoEncodingISCIIAssamese = 57006,
        msoEncodingISCIIOriya = 57007,
        msoEncodingISCIIKannada = 57008,
        msoEncodingISCIIMalayalam = 57009,
        msoEncodingISCIIGujarati = 57010,
        msoEncodingISCIIPunjabi = 57011,
        msoEncodingArabicASMO = 708,
        msoEncodingArabicTransparentASMO = 720,
        msoEncodingKoreanJohab = 1361,
        msoEncodingTaiwanCNS = 20000,
        msoEncodingTaiwanTCA = 20001,
        msoEncodingTaiwanEten = 20002,
        msoEncodingTaiwanIBM5550 = 20003,
        msoEncodingTaiwanTeleText = 20004,
        msoEncodingTaiwanWang = 20005,
        msoEncodingIA5IRV = 20105,
        msoEncodingIA5German = 20106,
        msoEncodingIA5Swedish = 20107,
        msoEncodingIA5Norwegian = 20108,
        msoEncodingUSASCII = 20127,
        msoEncodingT61 = 20261,
        msoEncodingISO6937NonSpacingAccent = 20269,
        msoEncodingKOI8R = 20866,
        msoEncodingExtAlphaLowercase = 21027,
        msoEncodingKOI8U = 21866,
        msoEncodingEuropa3 = 29001,
        msoEncodingHZGBSimplifiedChinese = 52936,
        msoEncodingUTF7 = 65000,
        msoEncodingUTF8 = 65001
    } MsoEncoding;


    typedef enum {
        msoHTMLProjectOpenSourceView = 1,
        msoHTMLProjectOpenTextView = 2
    } MsoHTMLProjectOpen;

    typedef enum {
        msoHTMLProjectStateDocumentLocked = 1,
        msoHTMLProjectStateProjectLocked = 2,
        msoHTMLProjectStateDocumentProjectUnlocked = 3
    } MsoHTMLProjectState;


    typedef enum {
        msoFileDialogOpen = 1,
        msoFileDialogSaveAs = 2,
        msoFileDialogFilePicker = 3,
        msoFileDialogFolderPicker = 4
    } MsoFileDialogType;

    typedef enum {
        msoFileDialogViewList = 1,
        msoFileDialogViewDetails = 2,
        msoFileDialogViewProperties = 3,
        msoFileDialogViewPreview = 4,
        msoFileDialogViewThumbnail = 5,
        msoFileDialogViewLargeIcons = 6,
        msoFileDialogViewSmallIcons = 7,
        msoFileDialogViewWebView = 8
    } MsoFileDialogView;


    typedef enum {
        msoAutomationSecurityLow = 1,
        msoAutomationSecurityByUI = 2,
        msoAutomationSecurityForceDisable = 3
    } MsoAutomationSecurity;


    typedef enum {
        mfPlainText = 1,
        mfHTML = 2,
        mfRTF = 3
    } MailFormat;


    typedef enum {
        msoAlertButtonOK = 0,
        msoAlertButtonOKCancel = 1,
        msoAlertButtonAbortRetryIgnore = 2,
        msoAlertButtonYesNoCancel = 3,
        msoAlertButtonYesNo = 4,
        msoAlertButtonRetryCancel = 5,
        msoAlertButtonYesAllNoCancel = 6
    } MsoAlertButtonType;

    typedef enum {
        msoAlertIconNoIcon = 0,
        msoAlertIconCritical = 1,
        msoAlertIconQuery = 2,
        msoAlertIconWarning = 3,
        msoAlertIconInfo = 4
    } MsoAlertIconType;

    typedef enum {
        msoAlertDefaultFirst = 0,
        msoAlertDefaultSecond = 1,
        msoAlertDefaultThird = 2,
        msoAlertDefaultFourth = 3,
        msoAlertDefaultFifth = 4
    } MsoAlertDefaultType;

    typedef enum {
        msoAlertCancelDefault = -1,
        msoAlertCancelFirst = 0,
        msoAlertCancelSecond = 1,
        msoAlertCancelThird = 2,
        msoAlertCancelFourth = 3,
        msoAlertCancelFifth = 4
    } MsoAlertCancelType;

    typedef enum {
        msoSearchInMyComputer = 0,
        msoSearchInOutlook = 1,
        msoSearchInMyNetworkPlaces = 2,
        msoSearchInCustom = 3
    } MsoSearchIn;

    typedef enum {
        msoTargetBrowserV3 = 0,
        msoTargetBrowserV4 = 1,
        msoTargetBrowserIE4 = 2,
        msoTargetBrowserIE5 = 3,
        msoTargetBrowserIE6 = 4
    } MsoTargetBrowser;

    typedef enum {
        msoOrgChartOrientationMixed = -2,
        msoOrgChartOrientationVertical = 1
    } MsoOrgChartOrientation;

    typedef enum {
        msoOrgChartLayoutMixed = -2,
        msoOrgChartLayoutStandard = 1,
        msoOrgChartLayoutBothHanging = 2,
        msoOrgChartLayoutLeftHanging = 3,
        msoOrgChartLayoutRightHanging = 4
    } MsoOrgChartLayoutType;

    typedef enum {
        msoBeforeNode = 1,
        msoAfterNode = 2,
        msoBeforeFirstSibling = 3,
        msoAfterLastSibling = 4
    } MsoRelativeNodePosition;

    typedef enum {
        msoDiagramMixed = -2,
        msoDiagramOrgChart = 1,
        msoDiagramCycle = 2,
        msoDiagramRadial = 3,
        msoDiagramPyramid = 4,
        msoDiagramVenn = 5,
        msoDiagramTarget = 6
    } MsoDiagramType;

    typedef enum {
        msoDiagramNode = 1,
        msoDiagramAssistant = 2
    } MsoDiagramNodeType;

    typedef enum {
        msoMoveRowFirst = -4,
        msoMoveRowPrev = -3,
        msoMoveRowNext = -2,
        msoMoveRowNbr = -1
    } MsoMoveRow;


    typedef enum {
        msoFilterComparisonEqual = 0,
        msoFilterComparisonNotEqual = 1,
        msoFilterComparisonLessThan = 2,
        msoFilterComparisonGreaterThan = 3,
        msoFilterComparisonLessThanEqual = 4,
        msoFilterComparisonGreaterThanEqual = 5,
        msoFilterComparisonIsBlank = 6,
        msoFilterComparisonIsNotBlank = 7,
        msoFilterComparisonContains = 8,
        msoFilterComparisonNotContains = 9
    } MsoFilterComparison;

    typedef enum {
        msoFilterConjunctionAnd = 0,
        msoFilterConjunctionOr = 1
    } MsoFilterConjunction;

    typedef enum {
        msoOpenDocument = 0,
        msoNew = 1,
        msoNewfromExistingFile = 2,
        msoNewfromTemplate = 3,
        msoBottomSection = 4
    } MsoFileNewSection;

    typedef enum {
        msoEditFile = 0,
        msoCreateNewFile = 1,
        msoOpenFile = 2
    } MsoFileNewAction;


    typedef enum {
        msoLanguageIDChineseHongKong = 3076,
        msoLanguageIDChineseMacao = 5124,
        msoLanguageIDEnglishTrinidad = 11273
    } MsoLanguageIDHidden;
