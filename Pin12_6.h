/*******************************************************************************
* File Name: Pin12_6.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin12_6_H) /* Pins Pin12_6_H */
#define CY_PINS_Pin12_6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin12_6_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Pin12_6__PORT == 15 && ((Pin12_6__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Pin12_6_Write(uint8 value);
void    Pin12_6_SetDriveMode(uint8 mode);
uint8   Pin12_6_ReadDataReg(void);
uint8   Pin12_6_Read(void);
void    Pin12_6_SetInterruptMode(uint16 position, uint16 mode);
uint8   Pin12_6_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Pin12_6_SetDriveMode() function.
     *  @{
     */
        #define Pin12_6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Pin12_6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Pin12_6_DM_RES_UP          PIN_DM_RES_UP
        #define Pin12_6_DM_RES_DWN         PIN_DM_RES_DWN
        #define Pin12_6_DM_OD_LO           PIN_DM_OD_LO
        #define Pin12_6_DM_OD_HI           PIN_DM_OD_HI
        #define Pin12_6_DM_STRONG          PIN_DM_STRONG
        #define Pin12_6_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Pin12_6_MASK               Pin12_6__MASK
#define Pin12_6_SHIFT              Pin12_6__SHIFT
#define Pin12_6_WIDTH              1u

/* Interrupt constants */
#if defined(Pin12_6__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Pin12_6_SetInterruptMode() function.
     *  @{
     */
        #define Pin12_6_INTR_NONE      (uint16)(0x0000u)
        #define Pin12_6_INTR_RISING    (uint16)(0x0001u)
        #define Pin12_6_INTR_FALLING   (uint16)(0x0002u)
        #define Pin12_6_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Pin12_6_INTR_MASK      (0x01u) 
#endif /* (Pin12_6__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin12_6_PS                     (* (reg8 *) Pin12_6__PS)
/* Data Register */
#define Pin12_6_DR                     (* (reg8 *) Pin12_6__DR)
/* Port Number */
#define Pin12_6_PRT_NUM                (* (reg8 *) Pin12_6__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin12_6_AG                     (* (reg8 *) Pin12_6__AG)                       
/* Analog MUX bux enable */
#define Pin12_6_AMUX                   (* (reg8 *) Pin12_6__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin12_6_BIE                    (* (reg8 *) Pin12_6__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin12_6_BIT_MASK               (* (reg8 *) Pin12_6__BIT_MASK)
/* Bypass Enable */
#define Pin12_6_BYP                    (* (reg8 *) Pin12_6__BYP)
/* Port wide control signals */                                                   
#define Pin12_6_CTL                    (* (reg8 *) Pin12_6__CTL)
/* Drive Modes */
#define Pin12_6_DM0                    (* (reg8 *) Pin12_6__DM0) 
#define Pin12_6_DM1                    (* (reg8 *) Pin12_6__DM1)
#define Pin12_6_DM2                    (* (reg8 *) Pin12_6__DM2) 
/* Input Buffer Disable Override */
#define Pin12_6_INP_DIS                (* (reg8 *) Pin12_6__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin12_6_LCD_COM_SEG            (* (reg8 *) Pin12_6__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin12_6_LCD_EN                 (* (reg8 *) Pin12_6__LCD_EN)
/* Slew Rate Control */
#define Pin12_6_SLW                    (* (reg8 *) Pin12_6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin12_6_PRTDSI__CAPS_SEL       (* (reg8 *) Pin12_6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin12_6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin12_6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin12_6_PRTDSI__OE_SEL0        (* (reg8 *) Pin12_6__PRTDSI__OE_SEL0) 
#define Pin12_6_PRTDSI__OE_SEL1        (* (reg8 *) Pin12_6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin12_6_PRTDSI__OUT_SEL0       (* (reg8 *) Pin12_6__PRTDSI__OUT_SEL0) 
#define Pin12_6_PRTDSI__OUT_SEL1       (* (reg8 *) Pin12_6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin12_6_PRTDSI__SYNC_OUT       (* (reg8 *) Pin12_6__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Pin12_6__SIO_CFG)
    #define Pin12_6_SIO_HYST_EN        (* (reg8 *) Pin12_6__SIO_HYST_EN)
    #define Pin12_6_SIO_REG_HIFREQ     (* (reg8 *) Pin12_6__SIO_REG_HIFREQ)
    #define Pin12_6_SIO_CFG            (* (reg8 *) Pin12_6__SIO_CFG)
    #define Pin12_6_SIO_DIFF           (* (reg8 *) Pin12_6__SIO_DIFF)
#endif /* (Pin12_6__SIO_CFG) */

/* Interrupt Registers */
#if defined(Pin12_6__INTSTAT)
    #define Pin12_6_INTSTAT            (* (reg8 *) Pin12_6__INTSTAT)
    #define Pin12_6_SNAP               (* (reg8 *) Pin12_6__SNAP)
    
	#define Pin12_6_0_INTTYPE_REG 		(* (reg8 *) Pin12_6__0__INTTYPE)
#endif /* (Pin12_6__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Pin12_6_H */


/* [] END OF FILE */
