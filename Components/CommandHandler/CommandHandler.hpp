// ======================================================================
// \title  CommandHandler.hpp
// \author robertpendergrast
// \brief  hpp file for CommandHandler component implementation class
// ======================================================================

#ifndef Components_CommandHandler_HPP
#define Components_CommandHandler_HPP

#include "Components/CommandHandler/CommandHandlerComponentAc.hpp"

namespace Components {

  class CommandHandler :
    public CommandHandlerComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Component construction and destruction
      // ----------------------------------------------------------------------

      //! Construct CommandHandler object
      CommandHandler(
          const char* const compName //!< The component name
      );

      //! Destroy CommandHandler object
      ~CommandHandler();

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for commands
      // ----------------------------------------------------------------------

      //! Handler implementation for command TODO
      //!
      //! TODO
      void TODO_cmdHandler(
          FwOpcodeType opCode, //!< The opcode
          U32 cmdSeq //!< The command sequence number
      ) override;

  };

}

#endif
