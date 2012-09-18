/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.18_02 from the
 * contents of mprace.xs. Do not edit this file, edit mprace.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "mprace.xs"
extern "C" {
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"
}

#include <mprace/Board.h>
#include <mprace/ABB.h>
#include <mprace/DMABuffer.h>

using namespace mprace;


#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#line 30 "mprace.c"

XS(XS_Board_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_Board_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Board::new", "CLASS, type, board_number");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	char *	CLASS = (char *)SvPV_nolen(ST(0));
	Board *	RETVAL;
	char *	type = (char *)SvPV_nolen(ST(1));
	int	board_number = (int)SvIV(ST(2));
#line 21 "mprace.xs"
	if (strcmp(type, "ABB") == 0) {
		RETVAL = new ABB(board_number);
	} else {
		croak("Unknown board type");
	}
#line 54 "mprace.c"
	ST(0) = sv_newmortal();
	sv_setref_pv( ST(0), CLASS, (void*)RETVAL );

    }
    XSRETURN(1);
}


XS(XS_Board_DESTROY); /* prototype to pass -Wmissing-prototypes */
XS(XS_Board_DESTROY)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Board::DESTROY", "THIS");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Board *	THIS;

	if( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) )
		THIS = (Board *)SvIV((SV*)SvRV( ST(0) ));
	else{
		warn( "Board::DESTROY() -- THIS is not a blessed SV reference" );
		XSRETURN_UNDEF;
	};

	delete THIS;
    }
    XSRETURN_EMPTY;
}


XS(XS_Board_dmabuffer); /* prototype to pass -Wmissing-prototypes */
XS(XS_Board_dmabuffer)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Board::dmabuffer", "THIS, size");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Board *	THIS;
	int	RETVAL;
	dXSTARG;
	int	size = (int)SvIV(ST(1));

	if( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) )
		THIS = (Board *)SvIV((SV*)SvRV( ST(0) ));
	else{
		warn( "Board::dmabuffer() -- THIS is not a blessed SV reference" );
		XSRETURN_UNDEF;
	};
#line 35 "mprace.xs"
	printf("maw\n");
	printf("size is %d\n", size);
	RETVAL = 4;
#line 117 "mprace.c"
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Board_getReg); /* prototype to pass -Wmissing-prototypes */
XS(XS_Board_getReg)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Board::getReg", "THIS, address");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Board *	THIS;
	unsigned int	RETVAL;
	dXSTARG;
	int	address = (int)SvIV(ST(1));

	if( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) )
		THIS = (Board *)SvIV((SV*)SvRV( ST(0) ));
	else{
		warn( "Board::getReg() -- THIS is not a blessed SV reference" );
		XSRETURN_UNDEF;
	};

	RETVAL = THIS->getReg(address);
	XSprePUSH; PUSHu((UV)RETVAL);
    }
    XSRETURN(1);
}


XS(XS_Board_setReg); /* prototype to pass -Wmissing-prototypes */
XS(XS_Board_setReg)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Board::setReg", "THIS, address, data");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Board *	THIS;
	int	address = (int)SvIV(ST(1));
	int	data = (int)SvIV(ST(2));

	if( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) )
		THIS = (Board *)SvIV((SV*)SvRV( ST(0) ));
	else{
		warn( "Board::setReg() -- THIS is not a blessed SV reference" );
		XSRETURN_UNDEF;
	};

	THIS->setReg(address, data);
    }
    XSRETURN_EMPTY;
}


XS(XS_Board_write); /* prototype to pass -Wmissing-prototypes */
XS(XS_Board_write)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 3)
       Perl_croak(aTHX_ "Usage: %s(%s)", "Board::write", "THIS, address, data");
    PERL_UNUSED_VAR(cv); /* -W */
    {
	Board *	THIS;
	unsigned int	address = (unsigned int)SvUV(ST(1));
	unsigned int	data = (unsigned int)SvUV(ST(2));

	if( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) )
		THIS = (Board *)SvIV((SV*)SvRV( ST(0) ));
	else{
		warn( "Board::write() -- THIS is not a blessed SV reference" );
		XSRETURN_UNDEF;
	};

	THIS->write(address, data);
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_mprace); /* prototype to pass -Wmissing-prototypes */
XS(boot_mprace)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    char* file = __FILE__;

    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(items); /* -W */
    XS_VERSION_BOOTCHECK ;

        newXS("Board::new", XS_Board_new, file);
        newXS("Board::DESTROY", XS_Board_DESTROY, file);
        newXS("Board::dmabuffer", XS_Board_dmabuffer, file);
        newXS("Board::getReg", XS_Board_getReg, file);
        newXS("Board::setReg", XS_Board_setReg, file);
        newXS("Board::write", XS_Board_write, file);
    if (PL_unitcheckav)
         call_list(PL_scopestack_ix, PL_unitcheckav);
    XSRETURN_YES;
}

