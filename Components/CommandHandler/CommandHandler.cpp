// ======================================================================
// \title  CommandHandler.cpp
// \author robertpendergrast
// \brief  cpp file for CommandHandler component implementation class
// ======================================================================

#include "Components/CommandHandler/CommandHandler.hpp"

namespace Components {

  // ----------------------------------------------------------------------
  // Component construction and destruction
  // ----------------------------------------------------------------------

  CommandHandler ::
    CommandHandler(const char* const compName) :
      CommandHandlerComponentBase(compName)
  {

  }

  CommandHandler ::
    ~CommandHandler()
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for commands
  // ----------------------------------------------------------------------

  void CommandHandler ::
    TODO_cmdHandler(
        FwOpcodeType opCode,
        U32 cmdSeq
    )
  {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
  }

}
