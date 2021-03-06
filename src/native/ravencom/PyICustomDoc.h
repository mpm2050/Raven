// This file declares the ICustomDoc Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

#include "mshtmhst.h"
#include "PythonCOM.h"
#include "PythonCOMServer.h"

class PyICustomDoc : public PyIUnknown
{
public:
	MAKE_PYCOM_CTOR(PyICustomDoc);
	static ICustomDoc *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods
	static PyObject *SetUIHandler(PyObject *self, PyObject *args);

protected:
	PyICustomDoc(IUnknown *pdisp);
	~PyICustomDoc();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGCustomDoc : public PyGatewayBase, public ICustomDoc
{
protected:
	PyGCustomDoc(PyObject *instance) : PyGatewayBase(instance) { ; }
	PYGATEWAY_MAKE_SUPPORT2(PyGCustomDoc, ICustomDoc, IID_ICustomDoc, PyGatewayBase)

	// ICustomDoc
	STDMETHOD(SetUIHandler)(
		IDocHostUIHandler * pUIHandler);
};
