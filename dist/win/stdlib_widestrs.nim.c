/* Generated by Nim Compiler v1.4.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NI16 tyUncheckedArray__Tyd4y3haUOOHTj71TPIRag[1];
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___NmQ9ct6KsQm3mcX4z6BEBbA)(NI16* w, NI estimate, NI replacement);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NI, ord__N9bsHhIEUMfKbgZ9aJBy6m2A)(NI16 arg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NI16*, newWideCString__K8rR70TBwrP6FNBzDhVVOA)(NCSTRING source, NI L);
static N_NIMCALL(void, Marker_tyRef__4HwedE75WPfqZSQ0Cq2OUg)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
static N_INLINE(NI, nimCStrLen)(NCSTRING a);

/* section: NIM_merge_DATA */
extern TNimType NTI__kDPg4wXyR8DDyA0MeEjIsw_;
N_LIB_PRIVATE TNimType NTI__Tyd4y3haUOOHTj71TPIRag_;
N_LIB_PRIVATE TNimType NTI__4HwedE75WPfqZSQ0Cq2OUg_;

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(NI, ord__N9bsHhIEUMfKbgZ9aJBy6m2A)(NI16 arg) {
	NI result;
	result = (NI)0;
	result = ((NI) (((NU16) (arg))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___NmQ9ct6KsQm3mcX4z6BEBbA)(NI16* w, NI estimate, NI replacement) {
	NimStringDesc* result;
	NI i;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((NI)(estimate + (NI)((NI64)(estimate) >> (NU64)(((NI) 2)))))));
	i = ((NI) 0);
	{
		while (1) {
			NI ch;
			if (!!((w[i] == ((NI16) 0)))) goto LA2;
			ch = ord__N9bsHhIEUMfKbgZ9aJBy6m2A(w[i]);
			i += ((NI) 1);
			{
				NIM_BOOL T5_;
				NI ch2;
				T5_ = (NIM_BOOL)0;
				T5_ = (((NI) 55296) <= ch);
				if (!(T5_)) goto LA6_;
				T5_ = (ch <= ((NI) 56319));
				LA6_: ;
				if (!T5_) goto LA7_;
				ch2 = ord__N9bsHhIEUMfKbgZ9aJBy6m2A(w[i]);
				{
					NIM_BOOL T11_;
					T11_ = (NIM_BOOL)0;
					T11_ = (((NI) 56320) <= ch2);
					if (!(T11_)) goto LA12_;
					T11_ = (ch2 <= ((NI) 57343));
					LA12_: ;
					if (!T11_) goto LA13_;
					ch = (NI)((NI)((NI)((NU64)((NI)(ch & ((NI) 1023))) << (NU64)(((NI) 10))) + (NI)(ch2 & ((NI) 1023))) + ((NI) 65536));
					i += ((NI) 1);
				}
				goto LA9_;
				LA13_: ;
				{
					ch = replacement;
				}
				LA9_: ;
			}
			goto LA3_;
			LA7_: ;
			{
				NIM_BOOL T17_;
				T17_ = (NIM_BOOL)0;
				T17_ = (((NI) 56320) <= ch);
				if (!(T17_)) goto LA18_;
				T17_ = (ch <= ((NI) 57343));
				LA18_: ;
				if (!T17_) goto LA19_;
				ch = replacement;
			}
			goto LA3_;
			LA19_: ;
			LA3_: ;
			{
				if (!(ch < ((NI) 128))) goto LA23_;
				result = addChar(result, ((NIM_CHAR) (((NI) (ch)))));
			}
			goto LA21_;
			LA23_: ;
			{
				if (!(ch < ((NI) 2048))) goto LA26_;
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI64)(ch) >> (NU64)(((NI) 6))) | ((NI) 192)))))));
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)(ch & ((NI) 63)) | ((NI) 128)))))));
			}
			goto LA21_;
			LA26_: ;
			{
				if (!(ch < ((NI) 65536))) goto LA29_;
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI64)(ch) >> (NU64)(((NI) 12))) | ((NI) 224)))))));
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI)((NI64)(ch) >> (NU64)(((NI) 6))) & ((NI) 63)) | ((NI) 128)))))));
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)(ch & ((NI) 63)) | ((NI) 128)))))));
			}
			goto LA21_;
			LA29_: ;
			{
				if (!(ch <= ((NI) 1114111))) goto LA32_;
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI64)(ch) >> (NU64)(((NI) 18))) | ((NI) 240)))))));
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI)((NI64)(ch) >> (NU64)(((NI) 12))) & ((NI) 63)) | ((NI) 128)))))));
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI)((NI64)(ch) >> (NU64)(((NI) 6))) & ((NI) 63)) | ((NI) 128)))))));
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)(ch & ((NI) 63)) | ((NI) 128)))))));
			}
			goto LA21_;
			LA32_: ;
			{
				result = addChar(result, 239);
				result = addChar(result, 191);
				result = addChar(result, 189);
			}
			LA21_: ;
		} LA2: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___NleKxkskBzDhxdrvP1WL7A)(NI16* s) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = dollar___NmQ9ct6KsQm3mcX4z6BEBbA(s, ((NI) 80), ((NI) 65533));
	return result;
}
static N_NIMCALL(void, Marker_tyRef__4HwedE75WPfqZSQ0Cq2OUg)(void* p, NI op) {
	NI16* a;
	a = (NI16*)p;
}
N_LIB_PRIVATE N_NIMCALL(NI16*, newWideCString__K8rR70TBwrP6FNBzDhVVOA)(NCSTRING source, NI L) {
	NI16* result;
	NI d;
	result = (NI16*)0;
	result = (NI16*) newObj((&NTI__4HwedE75WPfqZSQ0Cq2OUg_), ((NI) ((NI)((NI)(L * ((NI) 2)) + ((NI) 2)))));
	d = ((NI) 0);
	{
		NI ch;
		NI i;
		NI result_2;
		ch = (NI)0;
		i = ((NI) 0);
		result_2 = (NI)0;
		{
			while (1) {
				if (!(i < L)) goto LA3;
				{
					if (!(((NU8)(source[i])) <= ((NI) 127))) goto LA6_;
					result_2 = ((NU8)(source[i]));
					i += ((NI) 1);
				}
				goto LA4_;
				LA6_: ;
				{
					if (!((NI)((NI64)(((NU8)(source[i]))) >> (NU64)(((NI) 5))) == ((NI) 6))) goto LA9_;
					{
						if (!(i <= (NI)(L - ((NI) 2)))) goto LA13_;
						result_2 = (NI)((NI)((NU64)((NI)(((NU8)(source[i])) & ((NI) 31))) << (NU64)(((NI) 6))) | (NI)(((NU8)(source[(NI)(i + ((NI) 1))])) & ((NI) 63)));
						i += ((NI) 2);
					}
					goto LA11_;
					LA13_: ;
					{
						result_2 = ((NI) 65533);
						i += ((NI) 1);
					}
					LA11_: ;
				}
				goto LA4_;
				LA9_: ;
				{
					if (!((NI)((NI64)(((NU8)(source[i]))) >> (NU64)(((NI) 4))) == ((NI) 14))) goto LA17_;
					{
						if (!(i <= (NI)(L - ((NI) 3)))) goto LA21_;
						result_2 = (NI)((NI)((NI)((NU64)((NI)(((NU8)(source[i])) & ((NI) 15))) << (NU64)(((NI) 12))) | (NI)((NU64)((NI)(((NU8)(source[(NI)(i + ((NI) 1))])) & ((NI) 63))) << (NU64)(((NI) 6)))) | (NI)(((NU8)(source[(NI)(i + ((NI) 2))])) & ((NI) 63)));
						i += ((NI) 3);
					}
					goto LA19_;
					LA21_: ;
					{
						result_2 = ((NI) 65533);
						i += ((NI) 1);
					}
					LA19_: ;
				}
				goto LA4_;
				LA17_: ;
				{
					if (!((NI)((NI64)(((NU8)(source[i]))) >> (NU64)(((NI) 3))) == ((NI) 30))) goto LA25_;
					{
						if (!(i <= (NI)(L - ((NI) 4)))) goto LA29_;
						result_2 = (NI)((NI)((NI)((NI)((NU64)((NI)(((NU8)(source[i])) & ((NI) 7))) << (NU64)(((NI) 18))) | (NI)((NU64)((NI)(((NU8)(source[(NI)(i + ((NI) 1))])) & ((NI) 63))) << (NU64)(((NI) 12)))) | (NI)((NU64)((NI)(((NU8)(source[(NI)(i + ((NI) 2))])) & ((NI) 63))) << (NU64)(((NI) 6)))) | (NI)(((NU8)(source[(NI)(i + ((NI) 3))])) & ((NI) 63)));
						i += ((NI) 4);
					}
					goto LA27_;
					LA29_: ;
					{
						result_2 = ((NI) 65533);
						i += ((NI) 1);
					}
					LA27_: ;
				}
				goto LA4_;
				LA25_: ;
				{
					result_2 = ((NI) 65533);
					i += ((NI) 1);
				}
				LA4_: ;
				ch = result_2;
				{
					if (!(ch <= ((NI) 65535))) goto LA35_;
					{
						NIM_BOOL T39_;
						T39_ = (NIM_BOOL)0;
						T39_ = (((NI) 55296) <= ch);
						if (!(T39_)) goto LA40_;
						T39_ = (ch <= ((NI) 57343));
						LA40_: ;
						if (!T39_) goto LA41_;
						result[d] = ((NI16) -3);
					}
					goto LA37_;
					LA41_: ;
					{
						result[d] = ((NI16) (((NU16) (ch))));
					}
					LA37_: ;
				}
				goto LA33_;
				LA35_: ;
				{
					if (!(((NI) 1114111) < ch)) goto LA45_;
					result[d] = ((NI16) -3);
				}
				goto LA33_;
				LA45_: ;
				{
					NI ch_2;
					ch_2 = (NI)(ch - ((NI) 65536));
					result[d] = ((NI16) (((NU16) ((NI)((NI)((NI64)(ch_2) >> (NU64)(((NI) 10))) + ((NI) 55296))))));
					d += ((NI) 1);
					result[d] = ((NI16) (((NU16) ((NI)((NI)(ch_2 & ((NI) 1023)) + ((NI) 56320))))));
				}
				LA33_: ;
				d += ((NI) 1);
			} LA3: ;
		}
	}
	result[d] = ((NI16) 0);
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI16*, newWideCString__rFkWhJjmVi0m0Hc9agVEZIQ)(NimStringDesc* s) {
	NI16* result;
	NimStringDesc* T1_;
	result = (NI16*)0;
	T1_ = (NimStringDesc*)0;
	T1_ = s;
	result = newWideCString__K8rR70TBwrP6FNBzDhVVOA(nimToCStringConv(T1_), (s ? s->Sup.len : 0));
	return result;
}
static N_INLINE(NI, nimCStrLen)(NCSTRING a) {
	NI result;
	size_t T1_;
	result = (NI)0;
	T1_ = (size_t)0;
	T1_ = strlen(a);
	result = ((NI) (T1_));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI16*, newWideCString__G8rSmf9akUNUzuZWlrfFAmA)(NCSTRING s) {
	NI16* result;
	NCSTRING T5_;
{	result = (NI16*)0;
	{
		if (!(s == 0)) goto LA3_;
		result = NIM_NIL;
		goto BeforeRet_;
	}
	LA3_: ;
	T5_ = (NCSTRING)0;
	T5_ = s;
	result = newWideCString__K8rR70TBwrP6FNBzDhVVOA(T5_, (s ? nimCStrLen(s) : 0));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_widestrsDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT3 */
NTI__Tyd4y3haUOOHTj71TPIRag_.size = sizeof(tyUncheckedArray__Tyd4y3haUOOHTj71TPIRag);
NTI__Tyd4y3haUOOHTj71TPIRag_.align = NIM_ALIGNOF(tyUncheckedArray__Tyd4y3haUOOHTj71TPIRag);
NTI__Tyd4y3haUOOHTj71TPIRag_.kind = 49;
NTI__Tyd4y3haUOOHTj71TPIRag_.base = (&NTI__kDPg4wXyR8DDyA0MeEjIsw_);
NTI__Tyd4y3haUOOHTj71TPIRag_.flags = 3;
NTI__4HwedE75WPfqZSQ0Cq2OUg_.size = sizeof(NI16*);
NTI__4HwedE75WPfqZSQ0Cq2OUg_.align = NIM_ALIGNOF(NI16*);
NTI__4HwedE75WPfqZSQ0Cq2OUg_.kind = 22;
NTI__4HwedE75WPfqZSQ0Cq2OUg_.base = (&NTI__Tyd4y3haUOOHTj71TPIRag_);
NTI__4HwedE75WPfqZSQ0Cq2OUg_.flags = 2;
NTI__4HwedE75WPfqZSQ0Cq2OUg_.marker = Marker_tyRef__4HwedE75WPfqZSQ0Cq2OUg;
}

