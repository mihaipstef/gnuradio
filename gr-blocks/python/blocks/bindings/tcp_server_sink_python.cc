/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(tcp_server_sink.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(9f8a488c6a838cb20c718b515e039594)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/tcp_server_sink.h>
// pydoc.h is automatically generated in the build directory
#include <tcp_server_sink_pydoc.h>

void bind_tcp_server_sink(py::module& m)
{

    using tcp_server_sink = ::gr::blocks::tcp_server_sink;


    py::class_<tcp_server_sink,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<tcp_server_sink>>(m, "tcp_server_sink", D(tcp_server_sink))

        .def(py::init(&tcp_server_sink::make),
             py::arg("itemsize"),
             py::arg("host"),
             py::arg("port"),
             py::arg("noblock") = false,
             D(tcp_server_sink, make))


        ;
}