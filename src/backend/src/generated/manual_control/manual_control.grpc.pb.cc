// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: manual_control/manual_control.proto

#include "manual_control/manual_control.pb.h"
#include "manual_control/manual_control.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace manual_control {

static const char* ManualControlService_method_names[] = {
  "/mavsdk.rpc.manual_control.ManualControlService/StartPositionControl",
  "/mavsdk.rpc.manual_control.ManualControlService/StartAltitudeControl",
  "/mavsdk.rpc.manual_control.ManualControlService/SetManualControlInput",
};

std::unique_ptr< ManualControlService::Stub> ManualControlService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ManualControlService::Stub> stub(new ManualControlService::Stub(channel));
  return stub;
}

ManualControlService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_StartPositionControl_(ManualControlService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StartAltitudeControl_(ManualControlService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetManualControlInput_(ManualControlService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ManualControlService::Stub::StartPositionControl(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::StartPositionControlRequest& request, ::mavsdk::rpc::manual_control::StartPositionControlResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_StartPositionControl_, context, request, response);
}

void ManualControlService::Stub::experimental_async::StartPositionControl(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::StartPositionControlRequest* request, ::mavsdk::rpc::manual_control::StartPositionControlResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_StartPositionControl_, context, request, response, std::move(f));
}

void ManualControlService::Stub::experimental_async::StartPositionControl(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::StartPositionControlRequest* request, ::mavsdk::rpc::manual_control::StartPositionControlResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_StartPositionControl_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::manual_control::StartPositionControlResponse>* ManualControlService::Stub::PrepareAsyncStartPositionControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::StartPositionControlRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::manual_control::StartPositionControlResponse>::Create(channel_.get(), cq, rpcmethod_StartPositionControl_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::manual_control::StartPositionControlResponse>* ManualControlService::Stub::AsyncStartPositionControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::StartPositionControlRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncStartPositionControlRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ManualControlService::Stub::StartAltitudeControl(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::StartAltitudeControlRequest& request, ::mavsdk::rpc::manual_control::StartAltitudeControlResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_StartAltitudeControl_, context, request, response);
}

void ManualControlService::Stub::experimental_async::StartAltitudeControl(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::StartAltitudeControlRequest* request, ::mavsdk::rpc::manual_control::StartAltitudeControlResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_StartAltitudeControl_, context, request, response, std::move(f));
}

void ManualControlService::Stub::experimental_async::StartAltitudeControl(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::StartAltitudeControlRequest* request, ::mavsdk::rpc::manual_control::StartAltitudeControlResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_StartAltitudeControl_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::manual_control::StartAltitudeControlResponse>* ManualControlService::Stub::PrepareAsyncStartAltitudeControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::StartAltitudeControlRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::manual_control::StartAltitudeControlResponse>::Create(channel_.get(), cq, rpcmethod_StartAltitudeControl_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::manual_control::StartAltitudeControlResponse>* ManualControlService::Stub::AsyncStartAltitudeControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::StartAltitudeControlRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncStartAltitudeControlRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ManualControlService::Stub::SetManualControlInput(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::SetManualControlInputRequest& request, ::mavsdk::rpc::manual_control::SetManualControlInputResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SetManualControlInput_, context, request, response);
}

void ManualControlService::Stub::experimental_async::SetManualControlInput(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::SetManualControlInputRequest* request, ::mavsdk::rpc::manual_control::SetManualControlInputResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SetManualControlInput_, context, request, response, std::move(f));
}

void ManualControlService::Stub::experimental_async::SetManualControlInput(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::SetManualControlInputRequest* request, ::mavsdk::rpc::manual_control::SetManualControlInputResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SetManualControlInput_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::manual_control::SetManualControlInputResponse>* ManualControlService::Stub::PrepareAsyncSetManualControlInputRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::SetManualControlInputRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mavsdk::rpc::manual_control::SetManualControlInputResponse>::Create(channel_.get(), cq, rpcmethod_SetManualControlInput_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::manual_control::SetManualControlInputResponse>* ManualControlService::Stub::AsyncSetManualControlInputRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::manual_control::SetManualControlInputRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetManualControlInputRaw(context, request, cq);
  result->StartCall();
  return result;
}

ManualControlService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ManualControlService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ManualControlService::Service, ::mavsdk::rpc::manual_control::StartPositionControlRequest, ::mavsdk::rpc::manual_control::StartPositionControlResponse>(
          [](ManualControlService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::manual_control::StartPositionControlRequest* req,
             ::mavsdk::rpc::manual_control::StartPositionControlResponse* resp) {
               return service->StartPositionControl(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ManualControlService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ManualControlService::Service, ::mavsdk::rpc::manual_control::StartAltitudeControlRequest, ::mavsdk::rpc::manual_control::StartAltitudeControlResponse>(
          [](ManualControlService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::manual_control::StartAltitudeControlRequest* req,
             ::mavsdk::rpc::manual_control::StartAltitudeControlResponse* resp) {
               return service->StartAltitudeControl(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ManualControlService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ManualControlService::Service, ::mavsdk::rpc::manual_control::SetManualControlInputRequest, ::mavsdk::rpc::manual_control::SetManualControlInputResponse>(
          [](ManualControlService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::manual_control::SetManualControlInputRequest* req,
             ::mavsdk::rpc::manual_control::SetManualControlInputResponse* resp) {
               return service->SetManualControlInput(ctx, req, resp);
             }, this)));
}

ManualControlService::Service::~Service() {
}

::grpc::Status ManualControlService::Service::StartPositionControl(::grpc::ServerContext* context, const ::mavsdk::rpc::manual_control::StartPositionControlRequest* request, ::mavsdk::rpc::manual_control::StartPositionControlResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ManualControlService::Service::StartAltitudeControl(::grpc::ServerContext* context, const ::mavsdk::rpc::manual_control::StartAltitudeControlRequest* request, ::mavsdk::rpc::manual_control::StartAltitudeControlResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ManualControlService::Service::SetManualControlInput(::grpc::ServerContext* context, const ::mavsdk::rpc::manual_control::SetManualControlInputRequest* request, ::mavsdk::rpc::manual_control::SetManualControlInputResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace manual_control

