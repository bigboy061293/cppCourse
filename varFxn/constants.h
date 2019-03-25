// contains all user-defined constants
// coded by Thien Binh Nguyen, 13 jan 2019

#ifndef		_CONSTANTSDEF_
#define	_CONSTANTSDEF_

// commonly used numbers
const	double		ZERO	=	0.0000000000000000000000000000000000000;
const	double		ONE		=	1.0000000000000000000000000000000000000;
const	int			p_INF	=	100;																					// infinite norm

// type of matrices
// this is used to check if the assignment operator works correctly
// e.g. S is a square matrix, L is a lower triangular matrix, then L = S is not acceptable, but S = L is OK
const	int			DMAT				= 1;								// general mxn double matrix
const	int			DMATSQ			= 2;								// square mxm double matrix
const	int			DMATLOW		= 3;								// lower triangular double matrix
const	int			DMATUPP		= 4;								// upper triangular double matrix
const 	int			DMATTRI			= 5;								// tri-diagonal double matrix



#endif