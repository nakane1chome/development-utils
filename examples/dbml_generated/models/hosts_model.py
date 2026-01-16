"""Hosts model."""

from datetime import datetime

from sqlalchemy import (
    Column,
    DateTime,
    String,
)
from sqlalchemy.orm import relationship

from ..base import Base


class Hosts(Base):
    """Hosts that can execute operations."""

    __tablename__ = "hosts"
    # Columns
    id = Column(String, primary_key=True, nullable=False)
    created_at = Column(DateTime, nullable=False, default=datetime.utcnow)
    hostname = Column(String, nullable=True, unique=True)

    # Relationships (1)

    # Relationships (2)

    # Relationships (3)
    operations = relationship("Operations", back_populates="assigned_to")

    # Relationships (4)
