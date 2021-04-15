
/*  CHANGELOG 


========================================================================================================================
* Origional version: Finished on 18-03-2021 
* 
* 
* Version: V1  01-03-2021   - show Available of wah(11) and looper(12) on screens: -> WORKING 
* Version: V2  23-03-2021   - Tuner characters change + Tuner ON all other functions are OFF: -> WORKING
* Version: V3  24-03-2021   - Changed bootscreen logo axe fx III color to red white and blue:  -> LOOKS NICE
*                           - overclock spi 44000000  Edit 01-04-2021 <- this is reversed back to 40000000  -> WORKING
*                           - opt out the BOUNCEDELAY and enabled per switch delay:  -> WORKS BETTER
* Version: V4  09-04-2021   - Added number button control for taptempo:  -> WORKING
*                           - Had some trouble with the effect state showing the Wah and Looper available.  -> FIXED
*                           - Tuner OFF: Fetch active scene:    -> WORKING
* Version:V4.1 09-04-2021   - Edited some issues with effects.  -> WORKING
*              10-04-2021   - Tried to make channels work with AMP and CAB, but got into complications with the libriary.             
*                             Asked TysonIT for help.   -> WAITING ON EDIT FOR AMP1
* Version:V4.2 11-04-2021   - Creating new page with AMP AND CAB block settings for channel ABCD setting  -> DONE
*              11-04-2021   - Creating ABCD settings and selecting per AMP-CAB -> DONE
*              12-04-2021   - Setting the correct AMP-CAB channel on screen refresh -> DONE
*                           - Activate AMP/CAB on selection if bypassed + setting to currentEffect.  -> DONE
*                           - Set to currentEffect is AMP-CAB = active -> DONE
*                           - Bypass if AMP-CAB = currentEffect.  Set currentEffect = 0. -> DONE
*                           - Setting channel A B C D GREEN border instead of RED as selected / active. -> DONE

========================================================================================================================*/
