/*******************************************************************************
* File Name: reset.h  
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

#if !defined(CY_PINS_reset_H) /* Pins reset_H */
#define CY_PINS_reset_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "reset_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 reset__PORT == 15 && ((reset__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    reset_Write(uint8 value);
void    reset_SetDriveMode(uint8 mode);
uint8   reset_ReadDataReg(void);
uint8   reset_Read(void);
void    reset_SetInterruptMode(uint16 position, uint16 mode);
uint8   reset_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the reset_SetDriveMode() function.
     *  @{
     */
        #define reset_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define reset_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define reset_DM_RES_UP          PIN_DM_RES_UP
        #define reset_DM_RES_DWN         PIN_DM_RES_DWN
        #define reset_DM_OD_LO           PIN_DM_OD_LO
        #define reset_DM_OD_HI           PIN_DM_OD_HI
        #define reset_DM_STRONG          PIN_DM_STRONG
        #define reset_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define reset_MASK               reset__MASK
#define reset_SHIFT              reset__SHIFT
#define reset_WIDTH              1u

/* Interrupt constants */
#if defined(reset__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in reset_SetInterruptMode() function.
     *  @{
     */
        #define reset_INTR_NONE      (uint16)(0x0000u)
        #define reset_INTR_RISING    (uint16)(0x0001u)
        #define reset_INTR_FALLING   (uint16)(0x0002u)
        #define reset_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define reset_INTR_MASK      (0x01u) 
#endif /* (reset__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define reset_PS                     (* (reg8 *) reset__PS)
/* Data Register */
#define reset_DR                     (* (reg8 *) reset__DR)
/* Port Number */
#define reset_PRT_NUM                (* (reg8 *) reset__PRT) 
/* Connect to Analog Globals */                                                  
#define reset_AG                     (* (reg8 *) reset__AG)                       
/* Analog MUX bux enable */
#define reset_AMUX                   (* (reg8 *) reset__AMUX) 
/* Bidirectional Enable */                                                        
#define reset_BIE                    (* (reg8 *) reset__BIE)
/* Bit-mask for Aliased Register Access */
#define reset_BIT_MASK               (* (reg8 *) reset__BIT_MASK)
/* Bypass Enable */
#define reset_BYP                    (* (reg8 *) reset__BYP)
/* Port wide control signals */                                                   
#define reset_CTL                    (* (reg8 *) reset__CTL)
/* Drive Modes */
#define reset_DM0                    (* (reg8 *) reset__DM0) 
#define reset_DM1                    (* (reg8 *) reset__DM1)
#define reset_DM2                    (* (reg8 *) reset__DM2) 
/* Input Buffer Disable Override */
#define reset_INP_DIS                (* (reg8 *) reset__INP_DIS)
/* LCD Common or Segment Drive */
#define reset_LCD_COM_SEG            (* (reg8 *) reset__LCD_COM_SEG)
/* Enable Segment LCD */
#define reset_LCD_EN                 (* (reg8 *) reset__LCD_EN)
/* Slew Rate Control */
#define reset_SLW                    (* (reg8 *) reset__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define reset_PRTDSI__CAPS_SEL       (* (reg8 *) reset__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define reset_PRTDSI__DBL_SYNC_IN    (* (reg8 *) reset__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define reset_PRTDSI__OE_SEL0        (* (reg8 *) reset__PRTDSI__OE_SEL0) 
#define reset_PRTDSI__OE_SEL1        (* (reg8 *) reset__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define reset_PRTDSI__OUT_SEL0       (* (reg8 *) reset__PRTDSI__OUT_SEL0) 
#define reset_PRTDSI__OUT_SEL1       (* (reg8 *) reset__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define reset_PRTDSI__SYNC_OUT       (* (reg8 *) reset__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(reset__SIO_CFG)
    #define reset_SIO_HYST_EN        (* (reg8 *) reset__SIO_HYST_EN)
    #define reset_SIO_REG_HIFREQ     (* (reg8 *) reset__SIO_REG_HIFREQ)
    #define reset_SIO_CFG            (* (reg8 *) reset__SIO_CFG)
    #define reset_SIO_DIFF           (* (reg8 *) reset__SIO_DIFF)
#endif /* (reset__SIO_CFG) */

/* Interrupt Registers */
#if defined(reset__INTSTAT)
    #define reset_INTSTAT            (* (reg8 *) reset__INTSTAT)
    #define reset_SNAP               (* (reg8 *) reset__SNAP)
    
	#define reset_0_INTTYPE_REG 		(* (reg8 *) reset__0__INTTYPE)
#endif /* (reset__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_reset_H */


/* [] END OF FILE */
